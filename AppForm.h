#pragma once

namespace CurrencyProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AppForm
	/// </summary>
	public ref class AppForm : public System::Windows::Forms::Form
	{
	public:
		AppForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AppForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ usd_tb;
	protected:

	protected:
	private: System::Windows::Forms::Label^ lbl_1;
	private: System::Windows::Forms::Label^ usd_lbl;
	private: System::Windows::Forms::TextBox^ idr_tb;

	private: System::Windows::Forms::Label^ idr_lbl;
	private: System::Windows::Forms::Button^ convert_btn;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AppForm::typeid));
			this->usd_tb = (gcnew System::Windows::Forms::TextBox());
			this->lbl_1 = (gcnew System::Windows::Forms::Label());
			this->usd_lbl = (gcnew System::Windows::Forms::Label());
			this->idr_tb = (gcnew System::Windows::Forms::TextBox());
			this->idr_lbl = (gcnew System::Windows::Forms::Label());
			this->convert_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// usd_tb
			// 
			this->usd_tb->Location = System::Drawing::Point(16, 146);
			this->usd_tb->Multiline = true;
			this->usd_tb->Name = L"usd_tb";
			this->usd_tb->Size = System::Drawing::Size(500, 39);
			this->usd_tb->TabIndex = 2;
			this->usd_tb->TextChanged += gcnew System::EventHandler(this, &AppForm::usdTextBox1_TextChanged);
			// 
			// lbl_1
			// 
			this->lbl_1->AutoSize = true;
			this->lbl_1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_1->Location = System::Drawing::Point(12, 22);
			this->lbl_1->Name = L"lbl_1";
			this->lbl_1->Size = System::Drawing::Size(351, 32);
			this->lbl_1->TabIndex = 3;
			this->lbl_1->Text = L"Indonesia Currency Editor";
			// 
			// usd_lbl
			// 
			this->usd_lbl->AutoSize = true;
			this->usd_lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usd_lbl->Location = System::Drawing::Point(12, 98);
			this->usd_lbl->Name = L"usd_lbl";
			this->usd_lbl->Size = System::Drawing::Size(149, 23);
			this->usd_lbl->TabIndex = 3;
			this->usd_lbl->Text = L"Currency (USD)";
			// 
			// idr_tb
			// 
			this->idr_tb->Location = System::Drawing::Point(16, 315);
			this->idr_tb->Multiline = true;
			this->idr_tb->Name = L"idr_tb";
			this->idr_tb->Size = System::Drawing::Size(500, 39);
			this->idr_tb->TabIndex = 2;
			this->idr_tb->TextChanged += gcnew System::EventHandler(this, &AppForm::textBox1_TextChanged);
			// 
			// idr_lbl
			// 
			this->idr_lbl->AutoSize = true;
			this->idr_lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idr_lbl->Location = System::Drawing::Point(12, 267);
			this->idr_lbl->Name = L"idr_lbl";
			this->idr_lbl->Size = System::Drawing::Size(142, 23);
			this->idr_lbl->TabIndex = 3;
			this->idr_lbl->Text = L"Currency (IDR)";
			// 
			// convert_btn
			// 
			this->convert_btn->Location = System::Drawing::Point(16, 208);
			this->convert_btn->Name = L"convert_btn";
			this->convert_btn->Size = System::Drawing::Size(113, 43);
			this->convert_btn->TabIndex = 4;
			this->convert_btn->Text = L"Convert";
			this->convert_btn->UseVisualStyleBackColor = true;
			this->convert_btn->Click += gcnew System::EventHandler(this, &AppForm::convert_btn_Click);
			// 
			// AppForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(662, 520);
			this->Controls->Add(this->convert_btn);
			this->Controls->Add(this->idr_lbl);
			this->Controls->Add(this->usd_lbl);
			this->Controls->Add(this->lbl_1);
			this->Controls->Add(this->idr_tb);
			this->Controls->Add(this->usd_tb);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AppForm";
			this->Text = L"AppForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void convert_btn_Click(System::Object^ sender, System::EventArgs^ e) {

		int result = System::Convert::ToInt16(usd_tb->Text) * 15000;
		idr_tb->Text = System::Convert::ToString(result);
	}
    
    private: System::Void usdTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
