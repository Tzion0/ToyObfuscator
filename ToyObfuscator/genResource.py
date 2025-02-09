import os

folder = "obf-build"
qrc_file = "Resources.qrc"

with open(qrc_file, "w") as f:
    f.write("<!DOCTYPE RCC>\n")
    f.write("<RCC version=\"1.0\">\n")
    f.write("    <qresource prefix=\"/\">\n")
    f.write("        <file>images/logo.png</file>\n")
    f.write("        <file>images/logo.jpg</file>\n")
    # for root, _, files in os.walk(folder):
    #     for file in files:
    #         path = os.path.join(root, file)
    #         f.write(f"        <file>{path}</file>\n")
    f.write("    </qresource>\n")
    f.write("</RCC>\n")