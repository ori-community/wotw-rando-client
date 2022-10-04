#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/IDtdAttributeListInfo.h>
#include <Il2CppModLoader/app/types/IDtdEntityInfo.h>
#include <Il2CppModLoader/app/types/XmlSchema.h>
#include <Il2CppModLoader/app/types/XmlSchemaCompilationSettings.h>
#include <Il2CppModLoader/app/types/XmlSqlBinaryReader_QName.h>
#include <Il2CppModLoader/app/types/XmlSqlBinaryReader.h>
#include <Il2CppModLoader/app/types/ReadState__Enum_1__Array.h>
#include <Il2CppModLoader/app/types/XmlSqlBinaryReader_QName__Array.h>
#include <Il2CppModLoader/app/types/XmlSqlBinaryReader_NamespaceDecl.h>
#include <Il2CppModLoader/app/types/XmlSqlBinaryReader_ElemInfo__Array.h>
#include <Il2CppModLoader/app/types/XmlSqlBinaryReader_AttrInfo__Array.h>
#include <Il2CppModLoader/app/types/XmlSqlBinaryReader_NestedBinXml.h>
#include <Il2CppModLoader/app/types/SecureStringHasher.h>
#include <Il2CppModLoader/app/types/SecureStringHasher_HashCodeOfStringDelegate.h>
#include <Il2CppModLoader/app/types/IDtdInfo.h>
#include <Il2CppModLoader/app/types/ByteStack.h>
#include <Il2CppModLoader/app/types/TernaryTreeReadOnly.h>
#include <Il2CppModLoader/app/types/XmlNodeChangedEventArgs.h>
#include <Il2CppModLoader/app/types/XmlElement.h>
#include <Il2CppModLoader/app/types/XmlAttribute__Array.h>
#include <Il2CppModLoader/app/types/XmlSchemaSimpleTypeContent.h>
#include <Il2CppModLoader/app/types/XmlName__Array.h>
#include <Il2CppModLoader/app/types/EmptyEnumerator.h>
#include <Il2CppModLoader/app/types/XmlDocumentType.h>
#include <Il2CppModLoader/app/types/XmlDeclaration.h>
#include <Il2CppModLoader/app/types/XmlComment.h>
#include <Il2CppModLoader/app/types/XmlDocumentFragment.h>
#include <Il2CppModLoader/app/types/XmlEntityReference.h>
#include <Il2CppModLoader/app/types/XmlProcessingInstruction.h>
#include <Il2CppModLoader/app/types/XmlText.h>
#include <Il2CppModLoader/app/types/XmlSignificantWhitespace.h>
#include <Il2CppModLoader/app/types/XmlWhitespace.h>
#include <Il2CppModLoader/app/types/XmlTextReader.h>
#include <Il2CppModLoader/app/types/XmlTextReaderImpl.h>
#include <Il2CppModLoader/app/types/XmlTextReaderImpl_LaterInitParam.h>
#include <Il2CppModLoader/app/types/XmlParserContext.h>
#include <Il2CppModLoader/app/types/XmlTextReaderImpl_NodeData.h>
#include <Il2CppModLoader/app/types/XmlTextReaderImpl_NodeData__Array.h>
#include <Il2CppModLoader/app/types/XmlTextReaderImpl_XmlContext.h>
#include <Il2CppModLoader/app/types/XmlTextReaderImpl_ParsingState__Array.h>
#include <Il2CppModLoader/app/types/IValidationEventHandling.h>
#include <Il2CppModLoader/app/types/XmlTextReaderImpl_OnDefaultAttributeUseDelegate.h>
#include <Il2CppModLoader/app/types/CSharpCodeProvider.h>
#include <Il2CppModLoader/app/types/AstNode.h>
#include <Il2CppModLoader/app/types/Axis_AxisType__Enum.h>
#include <Il2CppModLoader/app/types/XPathNodeType__Enum.h>
#include <Il2CppModLoader/app/types/Axis.h>
#include <Il2CppModLoader/app/types/Filter.h>
#include <Il2CppModLoader/app/types/Function.h>
#include <Il2CppModLoader/app/types/XPathResultType__Enum__Array.h>
#include <Il2CppModLoader/app/types/Group_1.h>
#include <Il2CppModLoader/app/types/Operand.h>
#include <Il2CppModLoader/app/types/Operator.h>
#include <Il2CppModLoader/app/types/Operator_Op__Enum__Array.h>
#include <Il2CppModLoader/app/types/Root.h>
#include <Il2CppModLoader/app/types/Variable.h>
#include <Il2CppModLoader/app/types/XPathParser.h>
#include <Il2CppModLoader/app/types/XPathScanner.h>
#include <Il2CppModLoader/app/types/XPathParser_ParamInfo.h>
#include <Il2CppModLoader/app/types/XPathItem.h>
#include <Il2CppModLoader/app/types/XPathNavigator.h>
#include <Il2CppModLoader/app/types/XPathDocumentNavigator.h>
#include <Il2CppModLoader/app/types/XPathNavigatorKeyComparer.h>
#include <Il2CppModLoader/app/types/XPathNodeInfoAtom.h>
#include <Il2CppModLoader/app/types/XmlTextWriterBase64Encoder.h>
#include <Il2CppModLoader/app/types/XmlTextEncoder.h>
#include <Il2CppModLoader/app/types/BinXmlSqlDecimal.h>
#include <Il2CppModLoader/app/types/BitStack.h>
#include <Il2CppModLoader/app/types/XmlWriterSettings.h>
#include <Il2CppModLoader/app/types/HtmlEncodedRawTextWriterIndent.h>
#include <Il2CppModLoader/app/types/XmlUtf8RawTextWriter.h>
#include <Il2CppModLoader/app/types/HtmlUtf8RawTextWriter.h>
#include <Il2CppModLoader/app/types/HtmlUtf8RawTextWriterIndent.h>
#include <Il2CppModLoader/app/types/IncrementalReadDummyDecoder.h>
#include <Il2CppModLoader/app/types/QueryOutputWriter.h>
#include <Il2CppModLoader/app/types/TextEncodedRawTextWriter.h>
#include <Il2CppModLoader/app/types/TextUtf8RawTextWriter.h>
#include <Il2CppModLoader/app/types/ValidatingReaderNodeData.h>
#include <Il2CppModLoader/app/types/AttributePSVIInfo.h>
#include <Il2CppModLoader/app/types/XmlSchemaInfo.h>
#include <Il2CppModLoader/app/types/IXmlLineInfo.h>
#include <Il2CppModLoader/app/types/XmlAsyncCheckReader.h>
#include <Il2CppModLoader/app/types/XmlAsyncCheckReaderWithNS.h>
#include <Il2CppModLoader/app/types/XmlAsyncCheckReaderWithLineInfo.h>
#include <Il2CppModLoader/app/types/XmlAsyncCheckReaderWithLineInfoNS.h>
#include <Il2CppModLoader/app/types/XmlAsyncCheckReaderWithLineInfoNSSchema.h>
#include <Il2CppModLoader/app/types/XmlAsyncCheckWriter.h>
#include <Il2CppModLoader/app/types/XmlAutoDetectWriter.h>
#include <Il2CppModLoader/app/types/XmlEventCache.h>
#include <Il2CppModLoader/app/types/XmlEventCache_XmlEvent__Array.h>
#include <Il2CppModLoader/app/types/XmlEncodedRawTextWriterIndent.h>
#include <Il2CppModLoader/app/types/XmlTextWriter.h>
#include <Il2CppModLoader/app/types/XmlTextWriter_TagInfo__Array.h>
#include <Il2CppModLoader/app/types/XmlTextWriter_State__Enum__Array.h>
#include <Il2CppModLoader/app/types/XmlTextWriter_Namespace__Array.h>
#include <Il2CppModLoader/app/types/XmlReader_XmlReaderDebuggerDisplayProxy.h>
#include <Il2CppModLoader/app/types/XmlValidatingReaderImpl.h>
#include <Il2CppModLoader/app/types/BaseValidator.h>
#include <Il2CppModLoader/app/types/XmlSchemaCollection.h>
#include <Il2CppModLoader/app/types/PositionInfo.h>

namespace app::classes::types {
    namespace IDtdAttributeListInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::IDtdAttributeListInfo__Class** type_info = (::app::IDtdAttributeListInfo__Class**)(modloader::win::memory::resolve_rva(0x0473F4D0)); }
    namespace IDtdEntityInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::IDtdEntityInfo__Class** type_info = (::app::IDtdEntityInfo__Class**)(modloader::win::memory::resolve_rva(0x0470E098)); }
    namespace XmlSchema { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchema__Class** type_info = (::app::XmlSchema__Class**)(modloader::win::memory::resolve_rva(0x04755C60)); }
    namespace XmlSchemaCompilationSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaCompilationSettings__Class** type_info = (::app::XmlSchemaCompilationSettings__Class**)(modloader::win::memory::resolve_rva(0x0476B820)); }
    namespace XmlSqlBinaryReader_QName { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSqlBinaryReader_QName__Class** type_info = (::app::XmlSqlBinaryReader_QName__Class**)(modloader::win::memory::resolve_rva(0x0474B948)); }
    namespace XmlSqlBinaryReader { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSqlBinaryReader__Class** type_info = (::app::XmlSqlBinaryReader__Class**)(modloader::win::memory::resolve_rva(0x04755798)); }
    namespace ReadState__Enum_1__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::ReadState__Enum_1__Array__Class** type_info = (::app::ReadState__Enum_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04763620)); }
    namespace XmlSqlBinaryReader_QName__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSqlBinaryReader_QName__Array__Class** type_info = (::app::XmlSqlBinaryReader_QName__Array__Class**)(modloader::win::memory::resolve_rva(0x047879F0)); }
    namespace XmlSqlBinaryReader_NamespaceDecl { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSqlBinaryReader_NamespaceDecl__Class** type_info = (::app::XmlSqlBinaryReader_NamespaceDecl__Class**)(modloader::win::memory::resolve_rva(0x047412D0)); }
    namespace XmlSqlBinaryReader_ElemInfo__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSqlBinaryReader_ElemInfo__Array__Class** type_info = (::app::XmlSqlBinaryReader_ElemInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0471DB48)); }
    namespace XmlSqlBinaryReader_AttrInfo__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSqlBinaryReader_AttrInfo__Array__Class** type_info = (::app::XmlSqlBinaryReader_AttrInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04790428)); }
    namespace XmlSqlBinaryReader_NestedBinXml { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSqlBinaryReader_NestedBinXml__Class** type_info = (::app::XmlSqlBinaryReader_NestedBinXml__Class**)(modloader::win::memory::resolve_rva(0x0476E390)); }
    namespace SecureStringHasher { IL2CPP_MODLOADER_DLLEXPORT ::app::SecureStringHasher__Class** type_info = (::app::SecureStringHasher__Class**)(modloader::win::memory::resolve_rva(0x0476D3C8)); }
    namespace SecureStringHasher_HashCodeOfStringDelegate { IL2CPP_MODLOADER_DLLEXPORT ::app::SecureStringHasher_HashCodeOfStringDelegate__Class** type_info = (::app::SecureStringHasher_HashCodeOfStringDelegate__Class**)(modloader::win::memory::resolve_rva(0x0471E1F0)); }
    namespace IDtdInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::IDtdInfo__Class** type_info = (::app::IDtdInfo__Class**)(modloader::win::memory::resolve_rva(0x047991B0)); }
    namespace ByteStack { IL2CPP_MODLOADER_DLLEXPORT ::app::ByteStack__Class** type_info = (::app::ByteStack__Class**)(modloader::win::memory::resolve_rva(0x0477E348)); }
    namespace TernaryTreeReadOnly { IL2CPP_MODLOADER_DLLEXPORT ::app::TernaryTreeReadOnly__Class** type_info = (::app::TernaryTreeReadOnly__Class**)(modloader::win::memory::resolve_rva(0x047438F0)); }
    namespace XmlNodeChangedEventArgs { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlNodeChangedEventArgs__Class** type_info = (::app::XmlNodeChangedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x047166F0)); }
    namespace XmlElement { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlElement__Class** type_info = (::app::XmlElement__Class**)(modloader::win::memory::resolve_rva(0x04721088)); }
    namespace XmlAttribute__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlAttribute__Array__Class** type_info = (::app::XmlAttribute__Array__Class**)(modloader::win::memory::resolve_rva(0x04790B70)); }
    namespace XmlSchemaSimpleTypeContent { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaSimpleTypeContent__Class** type_info = (::app::XmlSchemaSimpleTypeContent__Class**)(modloader::win::memory::resolve_rva(0x04772D40)); }
    namespace XmlName__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlName__Array__Class** type_info = (::app::XmlName__Array__Class**)(modloader::win::memory::resolve_rva(0x04771D10)); }
    namespace EmptyEnumerator { IL2CPP_MODLOADER_DLLEXPORT ::app::EmptyEnumerator__Class** type_info = (::app::EmptyEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0472E118)); }
    namespace XmlDocumentType { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlDocumentType__Class** type_info = (::app::XmlDocumentType__Class**)(modloader::win::memory::resolve_rva(0x04759590)); }
    namespace XmlDeclaration { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlDeclaration__Class** type_info = (::app::XmlDeclaration__Class**)(modloader::win::memory::resolve_rva(0x0472B770)); }
    namespace XmlComment { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlComment__Class** type_info = (::app::XmlComment__Class**)(modloader::win::memory::resolve_rva(0x047486E8)); }
    namespace XmlDocumentFragment { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlDocumentFragment__Class** type_info = (::app::XmlDocumentFragment__Class**)(modloader::win::memory::resolve_rva(0x0478F840)); }
    namespace XmlEntityReference { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlEntityReference__Class** type_info = (::app::XmlEntityReference__Class**)(modloader::win::memory::resolve_rva(0x04799928)); }
    namespace XmlProcessingInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlProcessingInstruction__Class** type_info = (::app::XmlProcessingInstruction__Class**)(modloader::win::memory::resolve_rva(0x0470FE58)); }
    namespace XmlText { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlText__Class** type_info = (::app::XmlText__Class**)(modloader::win::memory::resolve_rva(0x0473B100)); }
    namespace XmlSignificantWhitespace { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSignificantWhitespace__Class** type_info = (::app::XmlSignificantWhitespace__Class**)(modloader::win::memory::resolve_rva(0x0476AC38)); }
    namespace XmlWhitespace { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlWhitespace__Class** type_info = (::app::XmlWhitespace__Class**)(modloader::win::memory::resolve_rva(0x04767058)); }
    namespace XmlTextReader { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTextReader__Class** type_info = (::app::XmlTextReader__Class**)(modloader::win::memory::resolve_rva(0x047249E8)); }
    namespace XmlTextReaderImpl { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTextReaderImpl__Class** type_info = (::app::XmlTextReaderImpl__Class**)(modloader::win::memory::resolve_rva(0x04759D28)); }
    namespace XmlTextReaderImpl_LaterInitParam { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTextReaderImpl_LaterInitParam__Class** type_info = (::app::XmlTextReaderImpl_LaterInitParam__Class**)(modloader::win::memory::resolve_rva(0x0473A6D0)); }
    namespace XmlParserContext { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlParserContext__Class** type_info = (::app::XmlParserContext__Class**)(modloader::win::memory::resolve_rva(0x0473F030)); }
    namespace XmlTextReaderImpl_NodeData { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTextReaderImpl_NodeData__Class** type_info = (::app::XmlTextReaderImpl_NodeData__Class**)(modloader::win::memory::resolve_rva(0x04724230)); }
    namespace XmlTextReaderImpl_NodeData__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTextReaderImpl_NodeData__Array__Class** type_info = (::app::XmlTextReaderImpl_NodeData__Array__Class**)(modloader::win::memory::resolve_rva(0x0472A4F0)); }
    namespace XmlTextReaderImpl_XmlContext { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTextReaderImpl_XmlContext__Class** type_info = (::app::XmlTextReaderImpl_XmlContext__Class**)(modloader::win::memory::resolve_rva(0x04768A60)); }
    namespace XmlTextReaderImpl_ParsingState__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTextReaderImpl_ParsingState__Array__Class** type_info = (::app::XmlTextReaderImpl_ParsingState__Array__Class**)(modloader::win::memory::resolve_rva(0x04714B18)); }
    namespace IValidationEventHandling { IL2CPP_MODLOADER_DLLEXPORT ::app::IValidationEventHandling__Class** type_info = (::app::IValidationEventHandling__Class**)(modloader::win::memory::resolve_rva(0x04750518)); }
    namespace XmlTextReaderImpl_OnDefaultAttributeUseDelegate { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate__Class** type_info = (::app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate__Class**)(modloader::win::memory::resolve_rva(0x047015E8)); }
    namespace CSharpCodeProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::CSharpCodeProvider__Class** type_info = (::app::CSharpCodeProvider__Class**)(modloader::win::memory::resolve_rva(0x04794C40)); }
    namespace AstNode { IL2CPP_MODLOADER_DLLEXPORT ::app::AstNode__Class** type_info = (::app::AstNode__Class**)(modloader::win::memory::resolve_rva(0x0471DC48)); }
    namespace Axis_AxisType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::Axis_AxisType__Enum__Class** type_info = (::app::Axis_AxisType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04744908)); }
    namespace XPathNodeType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::XPathNodeType__Enum__Class** type_info = (::app::XPathNodeType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047708D0)); }
    namespace Axis { IL2CPP_MODLOADER_DLLEXPORT ::app::Axis__Class** type_info = (::app::Axis__Class**)(modloader::win::memory::resolve_rva(0x04776FA0)); }
    namespace Filter { IL2CPP_MODLOADER_DLLEXPORT ::app::Filter__Class** type_info = (::app::Filter__Class**)(modloader::win::memory::resolve_rva(0x04751248)); }
    namespace Function { IL2CPP_MODLOADER_DLLEXPORT ::app::Function__Class** type_info = (::app::Function__Class**)(modloader::win::memory::resolve_rva(0x04733030)); }
    namespace XPathResultType__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::XPathResultType__Enum__Array__Class** type_info = (::app::XPathResultType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04703818)); }
    namespace Group_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::Group_1__Class** type_info = (::app::Group_1__Class**)(modloader::win::memory::resolve_rva(0x047328E8)); }
    namespace Operand { IL2CPP_MODLOADER_DLLEXPORT ::app::Operand__Class** type_info = (::app::Operand__Class**)(modloader::win::memory::resolve_rva(0x0476AF68)); }
    namespace Operator { IL2CPP_MODLOADER_DLLEXPORT ::app::Operator__Class** type_info = (::app::Operator__Class**)(modloader::win::memory::resolve_rva(0x0477D0D8)); }
    namespace Operator_Op__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Operator_Op__Enum__Array__Class** type_info = (::app::Operator_Op__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04702190)); }
    namespace Root { IL2CPP_MODLOADER_DLLEXPORT ::app::Root__Class** type_info = (::app::Root__Class**)(modloader::win::memory::resolve_rva(0x0471A940)); }
    namespace Variable { IL2CPP_MODLOADER_DLLEXPORT ::app::Variable__Class** type_info = (::app::Variable__Class**)(modloader::win::memory::resolve_rva(0x04753108)); }
    namespace XPathParser { IL2CPP_MODLOADER_DLLEXPORT ::app::XPathParser__Class** type_info = (::app::XPathParser__Class**)(modloader::win::memory::resolve_rva(0x04736CC0)); }
    namespace XPathScanner { IL2CPP_MODLOADER_DLLEXPORT ::app::XPathScanner__Class** type_info = (::app::XPathScanner__Class**)(modloader::win::memory::resolve_rva(0x04783AD0)); }
    namespace XPathParser_ParamInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::XPathParser_ParamInfo__Class** type_info = (::app::XPathParser_ParamInfo__Class**)(modloader::win::memory::resolve_rva(0x04757F68)); }
    namespace XPathItem { IL2CPP_MODLOADER_DLLEXPORT ::app::XPathItem__Class** type_info = (::app::XPathItem__Class**)(modloader::win::memory::resolve_rva(0x04708618)); }
    namespace XPathNavigator { IL2CPP_MODLOADER_DLLEXPORT ::app::XPathNavigator__Class** type_info = (::app::XPathNavigator__Class**)(modloader::win::memory::resolve_rva(0x04734C68)); }
    namespace XPathDocumentNavigator { IL2CPP_MODLOADER_DLLEXPORT ::app::XPathDocumentNavigator__Class** type_info = (::app::XPathDocumentNavigator__Class**)(modloader::win::memory::resolve_rva(0x0476DE90)); }
    namespace XPathNavigatorKeyComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::XPathNavigatorKeyComparer__Class** type_info = (::app::XPathNavigatorKeyComparer__Class**)(modloader::win::memory::resolve_rva(0x047160A0)); }
    namespace XPathNodeInfoAtom { IL2CPP_MODLOADER_DLLEXPORT ::app::XPathNodeInfoAtom__Class** type_info = (::app::XPathNodeInfoAtom__Class**)(modloader::win::memory::resolve_rva(0x047221C0)); }
    namespace XmlTextWriterBase64Encoder { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTextWriterBase64Encoder__Class** type_info = (::app::XmlTextWriterBase64Encoder__Class**)(modloader::win::memory::resolve_rva(0x04700940)); }
    namespace XmlTextEncoder { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTextEncoder__Class** type_info = (::app::XmlTextEncoder__Class**)(modloader::win::memory::resolve_rva(0x04763228)); }
    namespace BinXmlSqlDecimal { IL2CPP_MODLOADER_DLLEXPORT ::app::BinXmlSqlDecimal__Class** type_info = (::app::BinXmlSqlDecimal__Class**)(modloader::win::memory::resolve_rva(0x04717358)); }
    namespace BitStack { IL2CPP_MODLOADER_DLLEXPORT ::app::BitStack__Class** type_info = (::app::BitStack__Class**)(modloader::win::memory::resolve_rva(0x0473FB90)); }
    namespace XmlWriterSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlWriterSettings__Class** type_info = (::app::XmlWriterSettings__Class**)(modloader::win::memory::resolve_rva(0x04740F80)); }
    namespace HtmlEncodedRawTextWriterIndent { IL2CPP_MODLOADER_DLLEXPORT ::app::HtmlEncodedRawTextWriterIndent__Class** type_info = (::app::HtmlEncodedRawTextWriterIndent__Class**)(modloader::win::memory::resolve_rva(0x0471E608)); }
    namespace XmlUtf8RawTextWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlUtf8RawTextWriter__Class** type_info = (::app::XmlUtf8RawTextWriter__Class**)(modloader::win::memory::resolve_rva(0x0478E3F0)); }
    namespace HtmlUtf8RawTextWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::HtmlUtf8RawTextWriter__Class** type_info = (::app::HtmlUtf8RawTextWriter__Class**)(modloader::win::memory::resolve_rva(0x04728E30)); }
    namespace HtmlUtf8RawTextWriterIndent { IL2CPP_MODLOADER_DLLEXPORT ::app::HtmlUtf8RawTextWriterIndent__Class** type_info = (::app::HtmlUtf8RawTextWriterIndent__Class**)(modloader::win::memory::resolve_rva(0x0475C340)); }
    namespace IncrementalReadDummyDecoder { IL2CPP_MODLOADER_DLLEXPORT ::app::IncrementalReadDummyDecoder__Class** type_info = (::app::IncrementalReadDummyDecoder__Class**)(modloader::win::memory::resolve_rva(0x0478E820)); }
    namespace QueryOutputWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::QueryOutputWriter__Class** type_info = (::app::QueryOutputWriter__Class**)(modloader::win::memory::resolve_rva(0x0472CAF8)); }
    namespace TextEncodedRawTextWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::TextEncodedRawTextWriter__Class** type_info = (::app::TextEncodedRawTextWriter__Class**)(modloader::win::memory::resolve_rva(0x04719260)); }
    namespace TextUtf8RawTextWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::TextUtf8RawTextWriter__Class** type_info = (::app::TextUtf8RawTextWriter__Class**)(modloader::win::memory::resolve_rva(0x04704428)); }
    namespace ValidatingReaderNodeData { IL2CPP_MODLOADER_DLLEXPORT ::app::ValidatingReaderNodeData__Class** type_info = (::app::ValidatingReaderNodeData__Class**)(modloader::win::memory::resolve_rva(0x0476DF70)); }
    namespace AttributePSVIInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::AttributePSVIInfo__Class** type_info = (::app::AttributePSVIInfo__Class**)(modloader::win::memory::resolve_rva(0x047766C0)); }
    namespace XmlSchemaInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaInfo__Class** type_info = (::app::XmlSchemaInfo__Class**)(modloader::win::memory::resolve_rva(0x047418D0)); }
    namespace IXmlLineInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::IXmlLineInfo__Class** type_info = (::app::IXmlLineInfo__Class**)(modloader::win::memory::resolve_rva(0x0476E5C0)); }
    namespace XmlAsyncCheckReader { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlAsyncCheckReader__Class** type_info = (::app::XmlAsyncCheckReader__Class**)(modloader::win::memory::resolve_rva(0x047035E0)); }
    namespace XmlAsyncCheckReaderWithNS { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlAsyncCheckReaderWithNS__Class** type_info = (::app::XmlAsyncCheckReaderWithNS__Class**)(modloader::win::memory::resolve_rva(0x04731910)); }
    namespace XmlAsyncCheckReaderWithLineInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlAsyncCheckReaderWithLineInfo__Class** type_info = (::app::XmlAsyncCheckReaderWithLineInfo__Class**)(modloader::win::memory::resolve_rva(0x047010C0)); }
    namespace XmlAsyncCheckReaderWithLineInfoNS { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlAsyncCheckReaderWithLineInfoNS__Class** type_info = (::app::XmlAsyncCheckReaderWithLineInfoNS__Class**)(modloader::win::memory::resolve_rva(0x0476AFD8)); }
    namespace XmlAsyncCheckReaderWithLineInfoNSSchema { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlAsyncCheckReaderWithLineInfoNSSchema__Class** type_info = (::app::XmlAsyncCheckReaderWithLineInfoNSSchema__Class**)(modloader::win::memory::resolve_rva(0x04760D18)); }
    namespace XmlAsyncCheckWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlAsyncCheckWriter__Class** type_info = (::app::XmlAsyncCheckWriter__Class**)(modloader::win::memory::resolve_rva(0x0472B048)); }
    namespace XmlAutoDetectWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlAutoDetectWriter__Class** type_info = (::app::XmlAutoDetectWriter__Class**)(modloader::win::memory::resolve_rva(0x04781DB8)); }
    namespace XmlEventCache { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlEventCache__Class** type_info = (::app::XmlEventCache__Class**)(modloader::win::memory::resolve_rva(0x04745A48)); }
    namespace XmlEventCache_XmlEvent__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlEventCache_XmlEvent__Array__Class** type_info = (::app::XmlEventCache_XmlEvent__Array__Class**)(modloader::win::memory::resolve_rva(0x0478C780)); }
    namespace XmlEncodedRawTextWriterIndent { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlEncodedRawTextWriterIndent__Class** type_info = (::app::XmlEncodedRawTextWriterIndent__Class**)(modloader::win::memory::resolve_rva(0x04771110)); }
    namespace XmlTextWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTextWriter__Class** type_info = (::app::XmlTextWriter__Class**)(modloader::win::memory::resolve_rva(0x0477C980)); }
    namespace XmlTextWriter_TagInfo__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTextWriter_TagInfo__Array__Class** type_info = (::app::XmlTextWriter_TagInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04763A38)); }
    namespace XmlTextWriter_State__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTextWriter_State__Enum__Array__Class** type_info = (::app::XmlTextWriter_State__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x047101C0)); }
    namespace XmlTextWriter_Namespace__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTextWriter_Namespace__Array__Class** type_info = (::app::XmlTextWriter_Namespace__Array__Class**)(modloader::win::memory::resolve_rva(0x047750F8)); }
    namespace XmlReader_XmlReaderDebuggerDisplayProxy { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlReader_XmlReaderDebuggerDisplayProxy__Class** type_info = (::app::XmlReader_XmlReaderDebuggerDisplayProxy__Class**)(modloader::win::memory::resolve_rva(0x04767DD0)); }
    namespace XmlValidatingReaderImpl { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlValidatingReaderImpl__Class** type_info = (::app::XmlValidatingReaderImpl__Class**)(modloader::win::memory::resolve_rva(0x047787B0)); }
    namespace BaseValidator { IL2CPP_MODLOADER_DLLEXPORT ::app::BaseValidator__Class** type_info = (::app::BaseValidator__Class**)(modloader::win::memory::resolve_rva(0x047099C0)); }
    namespace XmlSchemaCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaCollection__Class** type_info = (::app::XmlSchemaCollection__Class**)(modloader::win::memory::resolve_rva(0x04734258)); }
    namespace PositionInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::PositionInfo__Class** type_info = (::app::PositionInfo__Class**)(modloader::win::memory::resolve_rva(0x04790F70)); }
}
