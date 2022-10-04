#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/ObjectStorage.h>
#include <Il2CppModLoader/app/types/ObjectStorage_TempAssemblyComparer.h>
#include <Il2CppModLoader/app/types/SByteStorage.h>
#include <Il2CppModLoader/app/types/SqlBinaryStorage.h>
#include <Il2CppModLoader/app/types/SqlBinary__Array.h>
#include <Il2CppModLoader/app/types/SqlByteStorage.h>
#include <Il2CppModLoader/app/types/SqlByte__Array.h>
#include <Il2CppModLoader/app/types/SqlBytesStorage.h>
#include <Il2CppModLoader/app/types/SqlBytes__Array.h>
#include <Il2CppModLoader/app/types/SqlCharsStorage.h>
#include <Il2CppModLoader/app/types/SqlChars__Array.h>
#include <Il2CppModLoader/app/types/SqlDateTimeStorage.h>
#include <Il2CppModLoader/app/types/SqlDateTime__Array.h>
#include <Il2CppModLoader/app/types/SqlDecimalStorage.h>
#include <Il2CppModLoader/app/types/SqlDecimal__Array.h>
#include <Il2CppModLoader/app/types/SqlDoubleStorage.h>
#include <Il2CppModLoader/app/types/SqlDouble__Array.h>
#include <Il2CppModLoader/app/types/SqlGuidStorage.h>
#include <Il2CppModLoader/app/types/SqlGuid__Array.h>
#include <Il2CppModLoader/app/types/SqlInt16Storage.h>
#include <Il2CppModLoader/app/types/SqlInt16__Array.h>
#include <Il2CppModLoader/app/types/SqlInt32Storage.h>
#include <Il2CppModLoader/app/types/SqlInt32__Array.h>
#include <Il2CppModLoader/app/types/SqlInt64Storage.h>
#include <Il2CppModLoader/app/types/SqlInt64__Array.h>
#include <Il2CppModLoader/app/types/SqlMoneyStorage.h>
#include <Il2CppModLoader/app/types/SqlMoney__Array.h>
#include <Il2CppModLoader/app/types/SqlSingleStorage.h>
#include <Il2CppModLoader/app/types/SqlSingle__Array.h>
#include <Il2CppModLoader/app/types/SqlStringStorage.h>
#include <Il2CppModLoader/app/types/SqlString__Array.h>
#include <Il2CppModLoader/app/types/SqlBooleanStorage.h>
#include <Il2CppModLoader/app/types/SqlBoolean__Array.h>
#include <Il2CppModLoader/app/types/SingleStorage.h>
#include <Il2CppModLoader/app/types/SqlUdtStorage.h>
#include <Il2CppModLoader/app/types/StringStorage.h>
#include <Il2CppModLoader/app/types/TimeSpanStorage.h>
#include <Il2CppModLoader/app/types/TimeSpan__Array.h>
#include <Il2CppModLoader/app/types/UInt16Storage.h>
#include <Il2CppModLoader/app/types/UInt32Storage.h>
#include <Il2CppModLoader/app/types/UInt64Storage.h>
#include <Il2CppModLoader/app/types/HttpHeaders.h>
#include <Il2CppModLoader/app/types/HttpContentHeaders.h>
#include <Il2CppModLoader/app/types/HeaderInfo_1__Array.h>
#include <Il2CppModLoader/app/types/HttpMethod.h>
#include <Il2CppModLoader/app/types/HttpRequestException.h>
#include <Il2CppModLoader/app/types/HttpRequestHeaders.h>
#include <Il2CppModLoader/app/types/AuthenticationHeaderValue.h>
#include <Il2CppModLoader/app/types/Lexer.h>
#include <Il2CppModLoader/app/types/Token_Type__Enum.h>
#include <Il2CppModLoader/app/types/Token.h>
#include <Il2CppModLoader/app/types/CacheControlHeaderValue.h>
#include <Il2CppModLoader/app/types/NameValueHeaderValue.h>
#include <Il2CppModLoader/app/types/ContentDispositionHeaderValue.h>
#include <Il2CppModLoader/app/types/ContentRangeHeaderValue.h>
#include <Il2CppModLoader/app/types/EntityTagHeaderValue.h>
#include <Il2CppModLoader/app/types/HttpHeaders_GetEnumerator_d_19.h>
#include <Il2CppModLoader/app/types/MediaTypeHeaderValue.h>
#include <Il2CppModLoader/app/types/MediaTypeWithQualityHeaderValue.h>
#include <Il2CppModLoader/app/types/NameValueWithParametersHeaderValue.h>
#include <Il2CppModLoader/app/types/Parser_DateTime_c.h>
#include <Il2CppModLoader/app/types/Parser_MD5_c.h>
#include <Il2CppModLoader/app/types/ProductHeaderValue.h>
#include <Il2CppModLoader/app/types/ProductInfoHeaderValue.h>
#include <Il2CppModLoader/app/types/RangeConditionHeaderValue.h>
#include <Il2CppModLoader/app/types/RangeHeaderValue.h>
#include <Il2CppModLoader/app/types/RangeItemHeaderValue.h>
#include <Il2CppModLoader/app/types/RetryConditionHeaderValue.h>
#include <Il2CppModLoader/app/types/StringWithQualityHeaderValue.h>
#include <Il2CppModLoader/app/types/TransferCodingHeaderValue.h>
#include <Il2CppModLoader/app/types/TransferCodingWithQualityHeaderValue.h>
#include <Il2CppModLoader/app/types/ViaHeaderValue.h>
#include <Il2CppModLoader/app/types/WarningHeaderValue.h>
#include <Il2CppModLoader/app/types/XName.h>
#include <Il2CppModLoader/app/types/XNamespace.h>
#include <Il2CppModLoader/app/types/XObject.h>
#include <Il2CppModLoader/app/types/XNode.h>
#include <Il2CppModLoader/app/types/XContainer.h>
#include <Il2CppModLoader/app/types/XText.h>
#include <Il2CppModLoader/app/types/XElement.h>
#include <Il2CppModLoader/app/types/XAttribute.h>
#include <Il2CppModLoader/app/types/XObjectChangeEventArgs.h>
#include <Il2CppModLoader/app/types/SaveOptions__Enum.h>
#include <Il2CppModLoader/app/types/BaseUriAnnotation.h>
#include <Il2CppModLoader/app/types/LineInfoAnnotation.h>
#include <Il2CppModLoader/app/types/LineInfoEndElementAnnotation.h>
#include <Il2CppModLoader/app/types/XObjectChangeAnnotation.h>
#include <Il2CppModLoader/app/types/XCData.h>
#include <Il2CppModLoader/app/types/XContainer_Nodes_d_18.h>
#include <Il2CppModLoader/app/types/XContainer_GetDescendants_d_39.h>
#include <Il2CppModLoader/app/types/XContainer_GetElements_d_40.h>
#include <Il2CppModLoader/app/types/XStreamingElement.h>
#include <Il2CppModLoader/app/types/XElement_GetAttributes_d_105.h>
#include <Il2CppModLoader/app/types/NamespaceResolver_NamespaceDeclaration.h>
#include <Il2CppModLoader/app/types/XDocument.h>
#include <Il2CppModLoader/app/types/XDeclaration.h>
#include <Il2CppModLoader/app/types/XComment.h>
#include <Il2CppModLoader/app/types/XProcessingInstruction.h>
#include <Il2CppModLoader/app/types/XDocumentType.h>
#include <Il2CppModLoader/app/types/XElementAttributePropertyDescriptor.h>

namespace app::classes::types {
    namespace ObjectStorage { IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectStorage__Class** type_info = (::app::ObjectStorage__Class**)(modloader::win::memory::resolve_rva(0x0473DA78)); }
    namespace ObjectStorage_TempAssemblyComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectStorage_TempAssemblyComparer__Class** type_info = (::app::ObjectStorage_TempAssemblyComparer__Class**)(modloader::win::memory::resolve_rva(0x0476D9C0)); }
    namespace SByteStorage { IL2CPP_MODLOADER_DLLEXPORT ::app::SByteStorage__Class** type_info = (::app::SByteStorage__Class**)(modloader::win::memory::resolve_rva(0x04718580)); }
    namespace SqlBinaryStorage { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlBinaryStorage__Class** type_info = (::app::SqlBinaryStorage__Class**)(modloader::win::memory::resolve_rva(0x047393B8)); }
    namespace SqlBinary__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlBinary__Array__Class** type_info = (::app::SqlBinary__Array__Class**)(modloader::win::memory::resolve_rva(0x0475B788)); }
    namespace SqlByteStorage { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlByteStorage__Class** type_info = (::app::SqlByteStorage__Class**)(modloader::win::memory::resolve_rva(0x04779798)); }
    namespace SqlByte__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlByte__Array__Class** type_info = (::app::SqlByte__Array__Class**)(modloader::win::memory::resolve_rva(0x047241E0)); }
    namespace SqlBytesStorage { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlBytesStorage__Class** type_info = (::app::SqlBytesStorage__Class**)(modloader::win::memory::resolve_rva(0x047508F8)); }
    namespace SqlBytes__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlBytes__Array__Class** type_info = (::app::SqlBytes__Array__Class**)(modloader::win::memory::resolve_rva(0x04752EF0)); }
    namespace SqlCharsStorage { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlCharsStorage__Class** type_info = (::app::SqlCharsStorage__Class**)(modloader::win::memory::resolve_rva(0x04734758)); }
    namespace SqlChars__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlChars__Array__Class** type_info = (::app::SqlChars__Array__Class**)(modloader::win::memory::resolve_rva(0x04743248)); }
    namespace SqlDateTimeStorage { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlDateTimeStorage__Class** type_info = (::app::SqlDateTimeStorage__Class**)(modloader::win::memory::resolve_rva(0x04759CF8)); }
    namespace SqlDateTime__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlDateTime__Array__Class** type_info = (::app::SqlDateTime__Array__Class**)(modloader::win::memory::resolve_rva(0x047310E0)); }
    namespace SqlDecimalStorage { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlDecimalStorage__Class** type_info = (::app::SqlDecimalStorage__Class**)(modloader::win::memory::resolve_rva(0x047400A0)); }
    namespace SqlDecimal__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlDecimal__Array__Class** type_info = (::app::SqlDecimal__Array__Class**)(modloader::win::memory::resolve_rva(0x04742FC0)); }
    namespace SqlDoubleStorage { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlDoubleStorage__Class** type_info = (::app::SqlDoubleStorage__Class**)(modloader::win::memory::resolve_rva(0x0477FDD8)); }
    namespace SqlDouble__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlDouble__Array__Class** type_info = (::app::SqlDouble__Array__Class**)(modloader::win::memory::resolve_rva(0x04734468)); }
    namespace SqlGuidStorage { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlGuidStorage__Class** type_info = (::app::SqlGuidStorage__Class**)(modloader::win::memory::resolve_rva(0x0470DFC0)); }
    namespace SqlGuid__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlGuid__Array__Class** type_info = (::app::SqlGuid__Array__Class**)(modloader::win::memory::resolve_rva(0x0471DD80)); }
    namespace SqlInt16Storage { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlInt16Storage__Class** type_info = (::app::SqlInt16Storage__Class**)(modloader::win::memory::resolve_rva(0x0476DF60)); }
    namespace SqlInt16__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlInt16__Array__Class** type_info = (::app::SqlInt16__Array__Class**)(modloader::win::memory::resolve_rva(0x0470A058)); }
    namespace SqlInt32Storage { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlInt32Storage__Class** type_info = (::app::SqlInt32Storage__Class**)(modloader::win::memory::resolve_rva(0x04768FB0)); }
    namespace SqlInt32__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlInt32__Array__Class** type_info = (::app::SqlInt32__Array__Class**)(modloader::win::memory::resolve_rva(0x04728BA8)); }
    namespace SqlInt64Storage { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlInt64Storage__Class** type_info = (::app::SqlInt64Storage__Class**)(modloader::win::memory::resolve_rva(0x04729430)); }
    namespace SqlInt64__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlInt64__Array__Class** type_info = (::app::SqlInt64__Array__Class**)(modloader::win::memory::resolve_rva(0x047197A0)); }
    namespace SqlMoneyStorage { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlMoneyStorage__Class** type_info = (::app::SqlMoneyStorage__Class**)(modloader::win::memory::resolve_rva(0x0471D210)); }
    namespace SqlMoney__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlMoney__Array__Class** type_info = (::app::SqlMoney__Array__Class**)(modloader::win::memory::resolve_rva(0x0478FB30)); }
    namespace SqlSingleStorage { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlSingleStorage__Class** type_info = (::app::SqlSingleStorage__Class**)(modloader::win::memory::resolve_rva(0x047808E8)); }
    namespace SqlSingle__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlSingle__Array__Class** type_info = (::app::SqlSingle__Array__Class**)(modloader::win::memory::resolve_rva(0x04711240)); }
    namespace SqlStringStorage { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlStringStorage__Class** type_info = (::app::SqlStringStorage__Class**)(modloader::win::memory::resolve_rva(0x04725D10)); }
    namespace SqlString__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlString__Array__Class** type_info = (::app::SqlString__Array__Class**)(modloader::win::memory::resolve_rva(0x04743468)); }
    namespace SqlBooleanStorage { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlBooleanStorage__Class** type_info = (::app::SqlBooleanStorage__Class**)(modloader::win::memory::resolve_rva(0x04739B78)); }
    namespace SqlBoolean__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlBoolean__Array__Class** type_info = (::app::SqlBoolean__Array__Class**)(modloader::win::memory::resolve_rva(0x047147D8)); }
    namespace SingleStorage { IL2CPP_MODLOADER_DLLEXPORT ::app::SingleStorage__Class** type_info = (::app::SingleStorage__Class**)(modloader::win::memory::resolve_rva(0x04745378)); }
    namespace SqlUdtStorage { IL2CPP_MODLOADER_DLLEXPORT ::app::SqlUdtStorage__Class** type_info = (::app::SqlUdtStorage__Class**)(modloader::win::memory::resolve_rva(0x04753FA8)); }
    namespace StringStorage { IL2CPP_MODLOADER_DLLEXPORT ::app::StringStorage__Class** type_info = (::app::StringStorage__Class**)(modloader::win::memory::resolve_rva(0x047826C0)); }
    namespace TimeSpanStorage { IL2CPP_MODLOADER_DLLEXPORT ::app::TimeSpanStorage__Class** type_info = (::app::TimeSpanStorage__Class**)(modloader::win::memory::resolve_rva(0x04732570)); }
    namespace TimeSpan__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::TimeSpan__Array__Class** type_info = (::app::TimeSpan__Array__Class**)(modloader::win::memory::resolve_rva(0x04749F08)); }
    namespace UInt16Storage { IL2CPP_MODLOADER_DLLEXPORT ::app::UInt16Storage__Class** type_info = (::app::UInt16Storage__Class**)(modloader::win::memory::resolve_rva(0x04721F40)); }
    namespace UInt32Storage { IL2CPP_MODLOADER_DLLEXPORT ::app::UInt32Storage__Class** type_info = (::app::UInt32Storage__Class**)(modloader::win::memory::resolve_rva(0x0471A790)); }
    namespace UInt64Storage { IL2CPP_MODLOADER_DLLEXPORT ::app::UInt64Storage__Class** type_info = (::app::UInt64Storage__Class**)(modloader::win::memory::resolve_rva(0x0472AF98)); }
    namespace HttpHeaders { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpHeaders__Class** type_info = (::app::HttpHeaders__Class**)(modloader::win::memory::resolve_rva(0x047744F8)); }
    namespace HttpContentHeaders { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpContentHeaders__Class** type_info = (::app::HttpContentHeaders__Class**)(modloader::win::memory::resolve_rva(0x04793B68)); }
    namespace HeaderInfo_1__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::HeaderInfo_1__Array__Class** type_info = (::app::HeaderInfo_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04768660)); }
    namespace HttpMethod { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpMethod__Class** type_info = (::app::HttpMethod__Class**)(modloader::win::memory::resolve_rva(0x04726B58)); }
    namespace HttpRequestException { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpRequestException__Class** type_info = (::app::HttpRequestException__Class**)(modloader::win::memory::resolve_rva(0x04720810)); }
    namespace HttpRequestHeaders { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpRequestHeaders__Class** type_info = (::app::HttpRequestHeaders__Class**)(modloader::win::memory::resolve_rva(0x04731D48)); }
    namespace AuthenticationHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::AuthenticationHeaderValue__Class** type_info = (::app::AuthenticationHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x0475D010)); }
    namespace Lexer { IL2CPP_MODLOADER_DLLEXPORT ::app::Lexer__Class** type_info = (::app::Lexer__Class**)(modloader::win::memory::resolve_rva(0x04786AF8)); }
    namespace Token_Type__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::Token_Type__Enum__Class** type_info = (::app::Token_Type__Enum__Class**)(modloader::win::memory::resolve_rva(0x04717BD0)); }
    namespace Token { IL2CPP_MODLOADER_DLLEXPORT ::app::Token__Class** type_info = (::app::Token__Class**)(modloader::win::memory::resolve_rva(0x04704E30)); }
    namespace CacheControlHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::CacheControlHeaderValue__Class** type_info = (::app::CacheControlHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x047489B8)); }
    namespace NameValueHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::NameValueHeaderValue__Class** type_info = (::app::NameValueHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x04745388)); }
    namespace ContentDispositionHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::ContentDispositionHeaderValue__Class** type_info = (::app::ContentDispositionHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x047597D8)); }
    namespace ContentRangeHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::ContentRangeHeaderValue__Class** type_info = (::app::ContentRangeHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x047475F8)); }
    namespace EntityTagHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityTagHeaderValue__Class** type_info = (::app::EntityTagHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x04731918)); }
    namespace HttpHeaders_GetEnumerator_d_19 { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpHeaders_GetEnumerator_d_19__Class** type_info = (::app::HttpHeaders_GetEnumerator_d_19__Class**)(modloader::win::memory::resolve_rva(0x04748EA0)); }
    namespace MediaTypeHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::MediaTypeHeaderValue__Class** type_info = (::app::MediaTypeHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x0476AD10)); }
    namespace MediaTypeWithQualityHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::MediaTypeWithQualityHeaderValue__Class** type_info = (::app::MediaTypeWithQualityHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x04707658)); }
    namespace NameValueWithParametersHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::NameValueWithParametersHeaderValue__Class** type_info = (::app::NameValueWithParametersHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x0475AD98)); }
    namespace Parser_DateTime_c { IL2CPP_MODLOADER_DLLEXPORT ::app::Parser_DateTime_c__Class** type_info = (::app::Parser_DateTime_c__Class**)(modloader::win::memory::resolve_rva(0x04778CA0)); }
    namespace Parser_MD5_c { IL2CPP_MODLOADER_DLLEXPORT ::app::Parser_MD5_c__Class** type_info = (::app::Parser_MD5_c__Class**)(modloader::win::memory::resolve_rva(0x0475F430)); }
    namespace ProductHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::ProductHeaderValue__Class** type_info = (::app::ProductHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x0474E8E0)); }
    namespace ProductInfoHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::ProductInfoHeaderValue__Class** type_info = (::app::ProductInfoHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x047417F0)); }
    namespace RangeConditionHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::RangeConditionHeaderValue__Class** type_info = (::app::RangeConditionHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x04737220)); }
    namespace RangeHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::RangeHeaderValue__Class** type_info = (::app::RangeHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x04730EB0)); }
    namespace RangeItemHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::RangeItemHeaderValue__Class** type_info = (::app::RangeItemHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x0472A908)); }
    namespace RetryConditionHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::RetryConditionHeaderValue__Class** type_info = (::app::RetryConditionHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x0470B548)); }
    namespace StringWithQualityHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::StringWithQualityHeaderValue__Class** type_info = (::app::StringWithQualityHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x047810E0)); }
    namespace TransferCodingHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::TransferCodingHeaderValue__Class** type_info = (::app::TransferCodingHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x0476CB00)); }
    namespace TransferCodingWithQualityHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::TransferCodingWithQualityHeaderValue__Class** type_info = (::app::TransferCodingWithQualityHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x04706878)); }
    namespace ViaHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::ViaHeaderValue__Class** type_info = (::app::ViaHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x0474CDC8)); }
    namespace WarningHeaderValue { IL2CPP_MODLOADER_DLLEXPORT ::app::WarningHeaderValue__Class** type_info = (::app::WarningHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x047090C8)); }
    namespace XName { IL2CPP_MODLOADER_DLLEXPORT ::app::XName__Class** type_info = (::app::XName__Class**)(modloader::win::memory::resolve_rva(0x04775B78)); }
    namespace XNamespace { IL2CPP_MODLOADER_DLLEXPORT ::app::XNamespace__Class** type_info = (::app::XNamespace__Class**)(modloader::win::memory::resolve_rva(0x04725360)); }
    namespace XObject { IL2CPP_MODLOADER_DLLEXPORT ::app::XObject__Class** type_info = (::app::XObject__Class**)(modloader::win::memory::resolve_rva(0x0471C1D8)); }
    namespace XNode { IL2CPP_MODLOADER_DLLEXPORT ::app::XNode__Class** type_info = (::app::XNode__Class**)(modloader::win::memory::resolve_rva(0x0473A050)); }
    namespace XContainer { IL2CPP_MODLOADER_DLLEXPORT ::app::XContainer__Class** type_info = (::app::XContainer__Class**)(modloader::win::memory::resolve_rva(0x0476A7F8)); }
    namespace XText { IL2CPP_MODLOADER_DLLEXPORT ::app::XText__Class** type_info = (::app::XText__Class**)(modloader::win::memory::resolve_rva(0x047241B0)); }
    namespace XElement { IL2CPP_MODLOADER_DLLEXPORT ::app::XElement__Class** type_info = (::app::XElement__Class**)(modloader::win::memory::resolve_rva(0x0473D718)); }
    namespace XAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::XAttribute__Class** type_info = (::app::XAttribute__Class**)(modloader::win::memory::resolve_rva(0x04713338)); }
    namespace XObjectChangeEventArgs { IL2CPP_MODLOADER_DLLEXPORT ::app::XObjectChangeEventArgs__Class** type_info = (::app::XObjectChangeEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04754868)); }
    namespace SaveOptions__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::SaveOptions__Enum__Class** type_info = (::app::SaveOptions__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472EFD8)); }
    namespace BaseUriAnnotation { IL2CPP_MODLOADER_DLLEXPORT ::app::BaseUriAnnotation__Class** type_info = (::app::BaseUriAnnotation__Class**)(modloader::win::memory::resolve_rva(0x0478B4F0)); }
    namespace LineInfoAnnotation { IL2CPP_MODLOADER_DLLEXPORT ::app::LineInfoAnnotation__Class** type_info = (::app::LineInfoAnnotation__Class**)(modloader::win::memory::resolve_rva(0x04774ED8)); }
    namespace LineInfoEndElementAnnotation { IL2CPP_MODLOADER_DLLEXPORT ::app::LineInfoEndElementAnnotation__Class** type_info = (::app::LineInfoEndElementAnnotation__Class**)(modloader::win::memory::resolve_rva(0x04744C48)); }
    namespace XObjectChangeAnnotation { IL2CPP_MODLOADER_DLLEXPORT ::app::XObjectChangeAnnotation__Class** type_info = (::app::XObjectChangeAnnotation__Class**)(modloader::win::memory::resolve_rva(0x04761918)); }
    namespace XCData { IL2CPP_MODLOADER_DLLEXPORT ::app::XCData__Class** type_info = (::app::XCData__Class**)(modloader::win::memory::resolve_rva(0x047046D8)); }
    namespace XContainer_Nodes_d_18 { IL2CPP_MODLOADER_DLLEXPORT ::app::XContainer_Nodes_d_18__Class** type_info = (::app::XContainer_Nodes_d_18__Class**)(modloader::win::memory::resolve_rva(0x047547D8)); }
    namespace XContainer_GetDescendants_d_39 { IL2CPP_MODLOADER_DLLEXPORT ::app::XContainer_GetDescendants_d_39__Class** type_info = (::app::XContainer_GetDescendants_d_39__Class**)(modloader::win::memory::resolve_rva(0x047587A8)); }
    namespace XContainer_GetElements_d_40 { IL2CPP_MODLOADER_DLLEXPORT ::app::XContainer_GetElements_d_40__Class** type_info = (::app::XContainer_GetElements_d_40__Class**)(modloader::win::memory::resolve_rva(0x0470F928)); }
    namespace XStreamingElement { IL2CPP_MODLOADER_DLLEXPORT ::app::XStreamingElement__Class** type_info = (::app::XStreamingElement__Class**)(modloader::win::memory::resolve_rva(0x04781C90)); }
    namespace XElement_GetAttributes_d_105 { IL2CPP_MODLOADER_DLLEXPORT ::app::XElement_GetAttributes_d_105__Class** type_info = (::app::XElement_GetAttributes_d_105__Class**)(modloader::win::memory::resolve_rva(0x047851D0)); }
    namespace NamespaceResolver_NamespaceDeclaration { IL2CPP_MODLOADER_DLLEXPORT ::app::NamespaceResolver_NamespaceDeclaration__Class** type_info = (::app::NamespaceResolver_NamespaceDeclaration__Class**)(modloader::win::memory::resolve_rva(0x0478F918)); }
    namespace XDocument { IL2CPP_MODLOADER_DLLEXPORT ::app::XDocument__Class** type_info = (::app::XDocument__Class**)(modloader::win::memory::resolve_rva(0x0473DB40)); }
    namespace XDeclaration { IL2CPP_MODLOADER_DLLEXPORT ::app::XDeclaration__Class** type_info = (::app::XDeclaration__Class**)(modloader::win::memory::resolve_rva(0x047943C0)); }
    namespace XComment { IL2CPP_MODLOADER_DLLEXPORT ::app::XComment__Class** type_info = (::app::XComment__Class**)(modloader::win::memory::resolve_rva(0x0471FFB8)); }
    namespace XProcessingInstruction { IL2CPP_MODLOADER_DLLEXPORT ::app::XProcessingInstruction__Class** type_info = (::app::XProcessingInstruction__Class**)(modloader::win::memory::resolve_rva(0x04783E88)); }
    namespace XDocumentType { IL2CPP_MODLOADER_DLLEXPORT ::app::XDocumentType__Class** type_info = (::app::XDocumentType__Class**)(modloader::win::memory::resolve_rva(0x047056F8)); }
    namespace XElementAttributePropertyDescriptor { IL2CPP_MODLOADER_DLLEXPORT ::app::XElementAttributePropertyDescriptor__Class** type_info = (::app::XElementAttributePropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x047909C0)); }
}
