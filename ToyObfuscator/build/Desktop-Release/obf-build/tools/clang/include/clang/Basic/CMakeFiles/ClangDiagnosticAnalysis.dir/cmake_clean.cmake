file(REMOVE_RECURSE
  "AttrHasAttributeImpl.inc"
  "AttrHasAttributeImpl.inc.tmp"
  "AttrList.inc"
  "AttrList.inc.tmp"
  "CMakeFiles/ClangDiagnosticAnalysis"
  "DiagnosticASTKinds.inc"
  "DiagnosticASTKinds.inc.tmp"
  "DiagnosticAnalysisKinds.inc"
  "DiagnosticAnalysisKinds.inc.tmp"
  "DiagnosticCommentKinds.inc"
  "DiagnosticCommentKinds.inc.tmp"
  "DiagnosticCommonKinds.inc"
  "DiagnosticCommonKinds.inc.tmp"
  "DiagnosticDriverKinds.inc"
  "DiagnosticDriverKinds.inc.tmp"
  "DiagnosticFrontendKinds.inc"
  "DiagnosticFrontendKinds.inc.tmp"
  "DiagnosticGroups.inc"
  "DiagnosticGroups.inc.tmp"
  "DiagnosticIndexName.inc"
  "DiagnosticIndexName.inc.tmp"
  "DiagnosticLexKinds.inc"
  "DiagnosticLexKinds.inc.tmp"
  "DiagnosticParseKinds.inc"
  "DiagnosticParseKinds.inc.tmp"
  "DiagnosticSemaKinds.inc"
  "DiagnosticSemaKinds.inc.tmp"
  "DiagnosticSerializationKinds.inc"
  "DiagnosticSerializationKinds.inc.tmp"
  "arm_neon.inc"
  "arm_neon.inc.tmp"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/ClangDiagnosticAnalysis.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
