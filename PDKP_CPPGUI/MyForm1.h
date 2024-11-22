#pragma once
#include "MyForm2.h"
namespace PDKPCPPGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::CheckBox^ checkBox12;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button3;
	private:
		double totalPrice = 0.0;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(195, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(295, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pilih Pesanan Anda";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Brown;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(432, 606);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 61);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Pembayaran\r\n(Transfer)\r\n";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(98, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Bolt";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(403, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Royal Canin";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(97, 252);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Whiskas";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(403, 252);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 25);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Cat Choize";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(102, 120);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(187, 29);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"250gr (Rp15.000)";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(102, 155);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(187, 29);
			this->checkBox2->TabIndex = 7;
			this->checkBox2->Text = L"500gr (Rp30.000)";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(102, 190);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(169, 29);
			this->checkBox3->TabIndex = 8;
			this->checkBox3->Text = L"1kg (Rp55.000)";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(408, 120);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(187, 29);
			this->checkBox4->TabIndex = 9;
			this->checkBox4->Text = L"250gr (Rp20.000)";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(101, 289);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(187, 29);
			this->checkBox5->TabIndex = 10;
			this->checkBox5->Text = L"250gr (Rp17.000)";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(408, 289);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(187, 29);
			this->checkBox6->TabIndex = 11;
			this->checkBox6->Text = L"250gr (Rp12.000)";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(408, 155);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(187, 29);
			this->checkBox7->TabIndex = 12;
			this->checkBox7->Text = L"500gr (Rp40.000)";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(102, 324);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(187, 29);
			this->checkBox8->TabIndex = 13;
			this->checkBox8->Text = L"500gr (Rp34.000)";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(408, 324);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(187, 29);
			this->checkBox9->TabIndex = 14;
			this->checkBox9->Text = L"500gr (Rp24.000)";
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(408, 190);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(169, 29);
			this->checkBox10->TabIndex = 15;
			this->checkBox10->Text = L"1kg (Rp75.000)";
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(101, 359);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(169, 29);
			this->checkBox11->TabIndex = 16;
			this->checkBox11->Text = L"1kg (Rp65.000)";
			this->checkBox11->UseVisualStyleBackColor = true;
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(408, 359);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(169, 29);
			this->checkBox12->TabIndex = 17;
			this->checkBox12->Text = L"1kg (Rp45.000)";
			this->checkBox12->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SteelBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(301, 411);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 42);
			this->button2->TabIndex = 18;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(34, 491);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(236, 29);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Detail Pesanan Anda";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm1::label6_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Location = System::Drawing::Point(39, 533);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(317, 179);
			this->listBox1->TabIndex = 20;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SteelBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(210, 718);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 35);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Hapus Pesanan";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(465, 578);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 25);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Total : Rp 0";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Brown;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(39, 718);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(86, 45);
			this->button4->TabIndex = 23;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(690, 834);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox12);
			this->Controls->Add(this->checkBox11);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBox1->Items->Count > 0) {
			this->Hide();
			MyForm2 obj;
			obj.ShowDialog();
			Application::Exit();
		}
		else {
			MessageBox::Show("The list is empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

	}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checkBox1->Checked) {
		listBox1->Items->Add("Bolt 250gr - Rp15.000");
		totalPrice += 15000.0;
		checkBox1->Checked = false;
	}
	if (checkBox2->Checked) {
		listBox1->Items->Add("Bolt 500gr - Rp 30.000");
		totalPrice += 30000.0;
		checkBox2->Checked = false;
	}
	if (checkBox3->Checked) {
		listBox1->Items->Add("Bolt 1kg - Rp 55.000");
		totalPrice += 55000.0;
		checkBox3->Checked = false;
	}
	if (checkBox4->Checked) {
		listBox1->Items->Add("Royal Canin 250gr - Rp 20.000");
		totalPrice += 20000.0;
		checkBox4->Checked = false;
	}
	if (checkBox7->Checked) {
		listBox1->Items->Add("Royal Canin 500gr - Rp 40.000");
		totalPrice += 40000.0;
		checkBox7->Checked = false;
	}
	if (checkBox10->Checked) {
		listBox1->Items->Add("Royal Canin 1kg - Rp 75.000");
		totalPrice += 75000.0;
		checkBox10->Checked = false;
	}
	if (checkBox5->Checked) {
		listBox1->Items->Add("Whiskas 250gr - Rp 17.000");
		totalPrice += 17000.0;
		checkBox5->Checked = false;
	}
	if (checkBox8->Checked) {
		listBox1->Items->Add("Whiskas 500gr - Rp 34.000");
		totalPrice += 34000.0;
		checkBox8->Checked = false;
	}
	if (checkBox11->Checked) {
		listBox1->Items->Add("Whiskas 1kg - Rp 65.000");
		totalPrice += 65000.0;
		checkBox11->Checked = false;
	}
	if (checkBox6->Checked) {
		listBox1->Items->Add("Cat Choize 250gr - Rp 12.000");
		totalPrice += 12000.0;
		checkBox6->Checked = false;
	}
	if (checkBox9->Checked) {
		listBox1->Items->Add("Cat Choize 500gr - Rp 24.000");
		totalPrice += 24000.0;
		checkBox9->Checked = false;
	}
	if (checkBox12->Checked) {
		listBox1->Items->Add("Cat Choize 1kg - Rp 45.000");
		totalPrice += 45000.0;
		checkBox12->Checked = false;
	}
	this->label7->Text = "Total : Rp " + totalPrice.ToString();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->Items->Count > 0) {
		// Ambil item terakhir dari listBox1
		System::String^ lastItem = listBox1->Items[listBox1->Items->Count - 1]->ToString();

		// Cari harga dari item terakhir
		int pos = lastItem->LastIndexOf("Rp");
		if (pos != -1) {
			// Ekstrak harga dari string
			System::String^ priceStr = lastItem->Substring(pos + 3); // Ambil angka setelah "Rp"
			double price = Convert::ToDouble(priceStr);

			// Kurangi harga dari total
			totalPrice -= price;
		}

		// Hapus item terakhir dari listBox1
		listBox1->Items->RemoveAt(listBox1->Items->Count - 1);

		// Perbarui total harga
		this->label7->Text = "Total : Rp " + totalPrice.ToString();
	}

	else {
		MessageBox::Show("Pesanan kosong!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
