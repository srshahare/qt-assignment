#include "aboutdialog.h"
#include "ui_aboutdialog.h"
#include <qdebug.h>

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
    QString content = "<html><head><meta content=\"text/html; charset=UTF-8\" http-equiv=\"content-type\"><style type=\"text/css\">@import url('https://themes.googleusercontent.com/fonts/css?kit=RFda8w1V0eDZheqfcyQ4EGb3DKsRMD34dqg1gT8Z-p6isjtAVhoKeKPV_uAAgBOSk3k702ZOKiLJc3WVjuplzPesZW2xOQ-xsNqO47m55DA');.lst-kix_d52h1clnbs3c-5>li:before{content:\"\0025a0  \"}.lst-kix_d52h1clnbs3c-3>li:before{content:\"\0025cf  \"}.lst-kix_d52h1clnbs3c-2>li:before{content:\"\0025a0  \"}.lst-kix_d52h1clnbs3c-6>li:before{content:\"\0025cf  \"}.lst-kix_d52h1clnbs3c-1>li:before{content:\"\0025cb  \"}.lst-kix_d52h1clnbs3c-7>li:before{content:\"\0025cb  \"}.lst-kix_d52h1clnbs3c-0>li:before{content:\"\00200b  \"}.lst-kix_d52h1clnbs3c-8>li:before{content:\"\0025a0  \"}.lst-kix_3expns8knkd9-0>li:before{content:\"\00200b  \"}.lst-kix_3expns8knkd9-1>li:before{content:\"\0025cb  \"}ul.lst-kix_d52h1clnbs3c-5{list-style-type:none}ul.lst-kix_d52h1clnbs3c-6{list-style-type:none}.lst-kix_3expns8knkd9-3>li:before{content:\"\0025cf  \"}ul.lst-kix_d52h1clnbs3c-7{list-style-type:none}ul.lst-kix_d52h1clnbs3c-8{list-style-type:none}.lst-kix_3expns8knkd9-2>li:before{content:\"\0025a0  \"}.lst-kix_d52h1clnbs3c-4>li:before{content:\"\0025cb  \"}.lst-kix_3expns8knkd9-8>li:before{content:\"\0025a0  \"}.lst-kix_3expns8knkd9-7>li:before{content:\"\0025cb  \"}ul.lst-kix_d52h1clnbs3c-0{list-style-type:none}ul.lst-kix_d52h1clnbs3c-1{list-style-type:none}ul.lst-kix_d52h1clnbs3c-2{list-style-type:none}ul.lst-kix_d52h1clnbs3c-3{list-style-type:none}ul.lst-kix_d52h1clnbs3c-4{list-style-type:none}.lst-kix_3expns8knkd9-4>li:before{content:\"\0025cb  \"}.lst-kix_3expns8knkd9-5>li:before{content:\"\0025a0  \"}.lst-kix_3expns8knkd9-6>li:before{content:\"\0025cf  \"}ul.lst-kix_3expns8knkd9-2{list-style-type:none}ul.lst-kix_3expns8knkd9-1{list-style-type:none}ul.lst-kix_3expns8knkd9-4{list-style-type:none}ul.lst-kix_3expns8knkd9-3{list-style-type:none}ul.lst-kix_3expns8knkd9-0{list-style-type:none}ul.lst-kix_3expns8knkd9-6{list-style-type:none}ul.lst-kix_3expns8knkd9-5{list-style-type:none}ul.lst-kix_3expns8knkd9-8{list-style-type:none}ul.lst-kix_3expns8knkd9-7{list-style-type:none}ol{margin:0;padding:0}table td,table th{padding:0}.c28{border-right-style:solid;padding:7.2pt 7.2pt 7.2pt 7.2pt;border-bottom-color:#ffffff;border-top-width:0pt;border-right-width:0pt;border-left-color:#ffffff;vertical-align:top;border-right-color:#ffffff;border-left-width:0pt;border-top-style:solid;border-left-style:solid;border-bottom-width:0pt;width:358.5pt;border-top-color:#ffffff;border-bottom-style:solid}.c30{border-right-style:solid;padding:7.2pt 7.2pt 7.2pt 7.2pt;border-bottom-color:#ffffff;border-top-width:0pt;border-right-width:0pt;border-left-color:#ffffff;vertical-align:top;border-right-color:#ffffff;border-left-width:0pt;border-top-style:solid;border-left-style:solid;border-bottom-width:0pt;width:165pt;border-top-color:#ffffff;border-bottom-style:solid}.c3{margin-left:0pt;padding-top:16pt;list-style-position:inside;text-indent:45pt;padding-bottom:0pt;line-height:1.3;text-align:left;margin-right:15pt}.c11{color:#2079c7;font-weight:700;text-decoration:none;vertical-align:baseline;font-size:9pt;font-family:\"Open Sans\";font-style:normal}.c4{font-weight:400;text-decoration:none;vertical-align:baseline;font-size:11pt;font-family:\"Merriweather\";font-style:italic}.c18{color:#666666;text-decoration:none;vertical-align:baseline;font-size:9pt;font-family:\"Merriweather\";font-style:normal}.c0{padding-top:16pt;padding-bottom:0pt;line-height:1.0;page-break-after:avoid;text-align:left;margin-right:15pt}.c19{color:#666666;text-decoration:none;vertical-align:baseline;font-size:8pt;font-family:\"Open Sans\";font-style:normal}.c5{padding-top:5pt;padding-bottom:5pt;line-height:1.0;page-break-after:avoid;text-align:left;margin-right:15pt}.c32{color:#666666;text-decoration:none;vertical-align:baseline;font-size:6pt;font-family:\"Merriweather\";font-style:normal}.c21{color:#2079c7;text-decoration:none;vertical-align:baseline;font-size:10pt;font-family:\"Open Sans\";font-style:normal}.c16{padding-top:16pt;padding-bottom:0pt;line-height:1.3;text-align:left;margin-right:15pt}.c26{padding-top:6pt;padding-bottom:0pt;line-height:1.0;text-align:left;margin-right:15pt}.c22{padding-top:0pt;padding-bottom:6pt;line-height:1.0;text-align:left;margin-right:15pt}.c17{text-decoration:none;vertical-align:baseline;font-size:11pt;font-family:\"Merriweather\";font-style:normal}.c1{padding-top:6pt;padding-bottom:0pt;line-height:1.3;text-align:left;margin-right:15pt}.c29{text-decoration:none;vertical-align:baseline;font-size:30pt;font-family:\"Merriweather\";font-style:normal}.c13{text-decoration:none;vertical-align:baseline;font-size:9pt;font-family:\"Open Sans\";font-style:normal}.c23{padding-top:0pt;padding-bottom:0pt;line-height:1.15;text-align:left;margin-right:15pt}.c10{padding-top:30pt;padding-bottom:0pt;line-height:1.0;text-align:left;margin-right:15pt}.c25{text-decoration:none;vertical-align:baseline;font-size:12pt;font-family:\"Merriweather\"}.c31{border-spacing:0;border-collapse:collapse;margin-right:auto}.c6{margin-left:0pt;list-style-position:inside;text-indent:45pt}.c24{background-color:#ffffff;max-width:525.6pt;padding:28.8pt 43.2pt 43.2pt 43.2pt}.c7{padding:0;margin:0}.c8{font-weight:400;font-style:italic}.c27{height:80pt}.c9{font-weight:400}.c15{height:588pt}.c14{height:9pt}.c20{color:#b7b7b7}.c12{font-weight:700}.c2{color:#000000}.title{padding-top:0pt;color:#000000;font-weight:700;font-size:36pt;padding-bottom:6pt;font-family:\"Merriweather\";line-height:1.0;text-align:left}.subtitle{padding-top:0pt;color:#000000;font-size:9pt;padding-bottom:0pt;font-family:\"Open Sans\";line-height:1.15;text-align:left}li{color:#666666;font-size:9pt;font-family:\"Merriweather\"}p{margin:0;color:#666666;font-size:9pt;font-family:\"Merriweather\"}h1{padding-top:30pt;color:#2079c7;font-weight:700;font-size:9pt;padding-bottom:0pt;font-family:\"Open Sans\";line-height:1.0;text-align:left}h2{padding-top:16pt;color:#000000;font-weight:700;font-size:11pt;padding-bottom:0pt;font-family:\"Merriweather\";line-height:1.0;page-break-after:avoid;text-align:left}h3{padding-top:5pt;color:#666666;font-size:8pt;padding-bottom:5pt;font-family:\"Open Sans\";line-height:1.0;page-break-after:avoid;text-align:left}h4{padding-top:8pt;-webkit-text-decoration-skip:none;color:#666666;text-decoration:underline;text-decoration-skip-ink:none;font-size:11pt;padding-bottom:0pt;font-family:\"Trebuchet MS\";line-height:1.3;page-break-after:avoid;text-align:left}h5{padding-top:8pt;color:#666666;font-size:11pt;padding-bottom:0pt;font-family:\"Trebuchet MS\";line-height:1.3;page-break-after:avoid;text-align:left}h6{padding-top:8pt;color:#666666;font-size:11pt;padding-bottom:0pt;font-family:\"Trebuchet MS\";line-height:1.3;page-break-after:avoid;font-style:italic;text-align:left}</style></head><body class=\"c24\"><p class=\"c14 c26\"><span class=\"c9 c32\"></span></p><a id=\"t.3318325c51723d7986f73359f0679e8864c38d4c\"></a><a id=\"t.0\"></a><table class=\"c31\"><tbody><tr class=\"c27\"><td class=\"c28\" colspan=\"1\" rowspan=\"1\"><p class=\"c22 title\" id=\"h.x8fm1uorkbaw\"><span class=\"c12 c2 c29\">Shashank Shahare</span></p><p class=\"c23 subtitle\" id=\"h.ymi089liagec\"><span>Lorem ipsum dolor sit amet, consectetuer adipiscing elit</span></p></td><td class=\"c30\" colspan=\"1\" rowspan=\"1\"><p class=\"c23\"><span class=\"c9 c2 c13\">123 Your Street</span></p><p class=\"c23\"><span class=\"c13 c9 c2\">Your City, ST 12345</span></p><p class=\"c23\"><span class=\"c13 c12 c2\">(123) 456-7890</span></p><p class=\"c23\"><span class=\"c13 c12 c2\">no_reply@example.com</span></p></td></tr><tr class=\"c15\"><td class=\"c28\" colspan=\"1\" rowspan=\"1\"><h1 class=\"c10\" id=\"h.y7d3xdxnr44m\"><span class=\"c11\">EXPERIENCE</span></h1><h2 class=\"c0\" id=\"h.rfgvkg2ifhfd\"><span class=\"c2\">Company, </span><span class=\"c9 c2\">Location</span><span class=\"c9\">&nbsp;&mdash; </span><span class=\"c8\">Job Title</span></h2><h3 class=\"c5\" id=\"h.n64fgzu3lwuy\"><span>MONTH 20XX - PRESENT</span></h3><p class=\"c1\"><span>Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh.</span></p><h2 class=\"c0\" id=\"h.wj0puh61kxsr\"><span class=\"c2\">Company, </span><span class=\"c9 c2\">Location</span><span class=\"c9\">&nbsp;&mdash; </span><span class=\"c4 c2\">Job Title</span></h2><h3 class=\"c5\" id=\"h.8hk593fs3sag\"><span class=\"c19 c9\">MONTH 20XX - MONTH 20XX</span></h3><p class=\"c1\"><span class=\"c18 c9\">Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh.</span></p><h2 class=\"c0\" id=\"h.1hxcpsc1hco2\"><span>Company, </span><span class=\"c9\">Location</span><span>&nbsp;</span><span class=\"c9\">&mdash; </span><span class=\"c4 c2\">Job Title</span></h2><h3 class=\"c5\" id=\"h.ybypdmed418m\"><span>MONTH 20XX - MONTH 20XX</span></h3><p class=\"c1\"><span class=\"c18 c9\">Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh.</span></p><h1 class=\"c10\" id=\"h.yk8luflkpwij\"><span>EDUCATION</span></h1><h2 class=\"c0\" id=\"h.6wymnhinx9q5\"><span>School</span><span>&nbsp;Name, </span><span class=\"c9\">Location &mdash; </span><span class=\"c2 c4\">Degree</span></h2><h3 class=\"c5\" id=\"h.7vtcyzeczjot\"><span>MONTH 20XX - MONTH 20XX</span></h3><p class=\"c1\"><span class=\"c18 c9\">Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore.</span></p><h2 class=\"c0\" id=\"h.czfiadnsgnzp\"><span>School Name, </span><span class=\"c9\">Location &mdash; </span><span class=\"c4 c2\">Degree</span></h2><h3 class=\"c5\" id=\"h.miiyt1y6sl7g\"><span>MONTH 20XX - MONTH 20XX</span></h3><p class=\"c1\"><span class=\"c18 c9\">Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam.</span></p><h1 class=\"c10\" id=\"h.jhv78pp9wtzd\"><span>PROJECTS</span></h1><h2 class=\"c0\" id=\"h.vm051rmyhoww\"><span>Project Name </span><span class=\"c9\">&mdash; </span><span class=\"c8\">Detail</span></h2><p class=\"c1\"><span class=\"c18 c9\">Lorem ipsum dolor sit amet, consectetuer adipiscing elit.</span></p></td><td class=\"c30\" colspan=\"1\" rowspan=\"1\"><h1 class=\"c10\" id=\"h.ca0awj8022e2\"><span class=\"c11\">SKILLS</span></h1><ul class=\"c7 lst-kix_d52h1clnbs3c-0 start\"><li class=\"c3\"><span class=\"c18 c9\">Lorem ipsum dolor sit amet.</span></li><li class=\"c1 c6\"><span class=\"c18 c9\">Consectetuer adipiscing elit.</span></li></ul><ul class=\"c7 lst-kix_3expns8knkd9-0 start\"><li class=\"c1 c6\"><span class=\"c18 c9\">Sed diam nonummy nibh euismod tincidunt.</span></li></ul><ul class=\"c7 lst-kix_d52h1clnbs3c-0\"><li class=\"c1 c6\"><span class=\"c18 c9\">L&#8203;&#8203;&#8203;&zwnj;&#8203;aoreet dolore magna aliquam erat volutpat.</span></li></ul><h1 class=\"c10\" id=\"h.tuxh7mwdaxox\"><span class=\"c11\">AWARDS</span></h1><p class=\"c16\"><span class=\"c12\">Lorem ipsum</span><span>&nbsp;</span><span class=\"c12\">dolor sit</span><span class=\"c9 c18\">&nbsp;amet Consectetuer adipiscing elit, Sed diam nonummy</span></p><p class=\"c1\"><span class=\"c12\">Nibh euismod tincidunt</span><span class=\"c18 c9\">&nbsp;ut laoreet dolore magna aliquam erat volutpat.</span></p><p class=\"c1\"><span class=\"c12\">Lorem ipsum dolor sit</span><span class=\"c18 c9\">&nbsp;amet Consectetuer adipiscing elit, Sed diam nonummy</span></p><p class=\"c1\"><span class=\"c12\">Nibh euismod tincidunt</span><span class=\"c18 c9\">&nbsp;ut laoreet dolore magna aliquam erat volutpat.</span></p><h1 class=\"c10\" id=\"h.cxxkes25b26\"><span>LANGUAGES</span></h1><p class=\"c16\"><span class=\"c18 c9\">Lorem ipsum, Dolor sit amet, Consectetuer</span></p></td></tr></tbody></table><p class=\"c1 c14\"><span class=\"c18 c9\"></span></p></body></html>";
    ui->textEdit->setHtml(content);
    ui->textEdit->setReadOnly(true);
}

AboutDialog::~AboutDialog()
{
    delete ui;
}

void AboutDialog::on_textEdit_textChanged()
{
    qDebug() << "changed";
}