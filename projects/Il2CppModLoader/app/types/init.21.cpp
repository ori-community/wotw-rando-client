#include <Il2CppModLoader/app/types/BinaryFacetsChecker.h>
#include <Il2CppModLoader/app/types/Compiler.h>
#include <Il2CppModLoader/app/types/Datatype_ENTITY.h>
#include <Il2CppModLoader/app/types/Datatype_ENUMERATION.h>
#include <Il2CppModLoader/app/types/Datatype_ID.h>
#include <Il2CppModLoader/app/types/Datatype_IDREF.h>
#include <Il2CppModLoader/app/types/Datatype_NCName.h>
#include <Il2CppModLoader/app/types/Datatype_NMTOKEN.h>
#include <Il2CppModLoader/app/types/Datatype_NOTATION.h>
#include <Il2CppModLoader/app/types/Datatype_Name.h>
#include <Il2CppModLoader/app/types/Datatype_QName.h>
#include <Il2CppModLoader/app/types/Datatype_QNameXdr.h>
#include <Il2CppModLoader/app/types/Datatype_anyURI.h>
#include <Il2CppModLoader/app/types/Datatype_base64Binary.h>
#include <Il2CppModLoader/app/types/Datatype_byte.h>
#include <Il2CppModLoader/app/types/Datatype_char.h>
#include <Il2CppModLoader/app/types/Datatype_date.h>
#include <Il2CppModLoader/app/types/Datatype_dateTime.h>
#include <Il2CppModLoader/app/types/Datatype_dateTimeBase.h>
#include <Il2CppModLoader/app/types/Datatype_dateTimeNoTimeZone.h>
#include <Il2CppModLoader/app/types/Datatype_dateTimeTimeZone.h>
#include <Il2CppModLoader/app/types/Datatype_day.h>
#include <Il2CppModLoader/app/types/Datatype_doubleXdr.h>
#include <Il2CppModLoader/app/types/Datatype_fixed.h>
#include <Il2CppModLoader/app/types/Datatype_floatXdr.h>
#include <Il2CppModLoader/app/types/Datatype_hexBinary.h>
#include <Il2CppModLoader/app/types/Datatype_int.h>
#include <Il2CppModLoader/app/types/Datatype_integer.h>
#include <Il2CppModLoader/app/types/Datatype_language.h>
#include <Il2CppModLoader/app/types/Datatype_long.h>
#include <Il2CppModLoader/app/types/Datatype_month.h>
#include <Il2CppModLoader/app/types/Datatype_monthDay.h>
#include <Il2CppModLoader/app/types/Datatype_negativeInteger.h>
#include <Il2CppModLoader/app/types/Datatype_nonNegativeInteger.h>
#include <Il2CppModLoader/app/types/Datatype_nonPositiveInteger.h>
#include <Il2CppModLoader/app/types/Datatype_normalizedString.h>
#include <Il2CppModLoader/app/types/Datatype_normalizedStringV1Compat.h>
#include <Il2CppModLoader/app/types/Datatype_positiveInteger.h>
#include <Il2CppModLoader/app/types/Datatype_short.h>
#include <Il2CppModLoader/app/types/Datatype_time.h>
#include <Il2CppModLoader/app/types/Datatype_timeNoTimeZone.h>
#include <Il2CppModLoader/app/types/Datatype_timeTimeZone.h>
#include <Il2CppModLoader/app/types/Datatype_token.h>
#include <Il2CppModLoader/app/types/Datatype_tokenV1Compat.h>
#include <Il2CppModLoader/app/types/Datatype_unsignedByte.h>
#include <Il2CppModLoader/app/types/Datatype_unsignedInt.h>
#include <Il2CppModLoader/app/types/Datatype_unsignedLong.h>
#include <Il2CppModLoader/app/types/Datatype_unsignedShort.h>
#include <Il2CppModLoader/app/types/Datatype_uuid.h>
#include <Il2CppModLoader/app/types/Datatype_year.h>
#include <Il2CppModLoader/app/types/Datatype_yearMonth.h>
#include <Il2CppModLoader/app/types/DateTimeFacetsChecker.h>
#include <Il2CppModLoader/app/types/DtdValidator.h>
#include <Il2CppModLoader/app/types/DtdValidator_NamespaceManager.h>
#include <Il2CppModLoader/app/types/DurationFacetsChecker.h>
#include <Il2CppModLoader/app/types/FacetsChecker_FacetsCompiler.h>
#include <Il2CppModLoader/app/types/FacetsChecker_FacetsCompiler_Map__Array.h>
#include <Il2CppModLoader/app/types/ListFacetsChecker.h>
#include <Il2CppModLoader/app/types/MiscFacetsChecker.h>
#include <Il2CppModLoader/app/types/NamespaceListV1Compat.h>
#include <Il2CppModLoader/app/types/Numeric10FacetsChecker.h>
#include <Il2CppModLoader/app/types/Numeric2FacetsChecker.h>
#include <Il2CppModLoader/app/types/Preprocessor.h>
#include <Il2CppModLoader/app/types/QNameFacetsChecker.h>
#include <Il2CppModLoader/app/types/RedefineEntry.h>
#include <Il2CppModLoader/app/types/SchemaCollectionCompiler.h>
#include <Il2CppModLoader/app/types/SchemaCollectionPreprocessor.h>
#include <Il2CppModLoader/app/types/SchemaNamespaceManager.h>
#include <Il2CppModLoader/app/types/StringFacetsChecker.h>
#include <Il2CppModLoader/app/types/UnionFacetsChecker.h>
#include <Il2CppModLoader/app/types/XdrValidator.h>
#include <Il2CppModLoader/app/types/XmlAtomicValue.h>
#include <Il2CppModLoader/app/types/XmlAtomicValue_NamespacePrefixForQName.h>
#include <Il2CppModLoader/app/types/XmlSchemaAll.h>
#include <Il2CppModLoader/app/types/XmlSchemaAny.h>
#include <Il2CppModLoader/app/types/XmlSchemaAppInfo.h>
#include <Il2CppModLoader/app/types/XmlSchemaAttributeGroup.h>
#include <Il2CppModLoader/app/types/XmlSchemaAttributeGroupRef.h>
#include <Il2CppModLoader/app/types/XmlSchemaChoice.h>
#include <Il2CppModLoader/app/types/XmlSchemaCollectionEnumerator.h>
#include <Il2CppModLoader/app/types/XmlSchemaCollectionNode.h>
#include <Il2CppModLoader/app/types/XmlSchemaComplexContentExtension.h>
#include <Il2CppModLoader/app/types/XmlSchemaComplexContentRestriction.h>
#include <Il2CppModLoader/app/types/XmlSchemaDocumentation.h>
#include <Il2CppModLoader/app/types/XmlSchemaExternal.h>
#include <Il2CppModLoader/app/types/XmlSchemaGroup.h>
#include <Il2CppModLoader/app/types/XmlSchemaGroupBase.h>
#include <Il2CppModLoader/app/types/XmlSchemaGroupRef.h>
#include <Il2CppModLoader/app/types/XmlSchemaInference.h>
#include <Il2CppModLoader/app/types/XmlSchemaInferenceException.h>
#include <Il2CppModLoader/app/types/XmlSchemaLengthFacet.h>
#include <Il2CppModLoader/app/types/XmlSchemaMaxLengthFacet.h>
#include <Il2CppModLoader/app/types/XmlSchemaMinLengthFacet.h>
#include <Il2CppModLoader/app/types/XmlSchemaNotation.h>
#include <Il2CppModLoader/app/types/XmlSchemaRedefine.h>
#include <Il2CppModLoader/app/types/XmlSchemaSequence.h>
#include <Il2CppModLoader/app/types/XmlSchemaSimpleContentExtension.h>
#include <Il2CppModLoader/app/types/XmlSchemaSimpleContentRestriction.h>
#include <Il2CppModLoader/app/types/XmlSchemaSubstitutionGroup.h>
#include <Il2CppModLoader/app/types/XmlSchemaSubstitutionGroupV1Compat.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_dateTimeBase {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_dateTimeBase__Class** type_info = (::app::Datatype_dateTimeBase__Class**)(modloader::win::memory::resolve_rva(0x0475F2F8));
    }
    namespace Datatype_dateTimeNoTimeZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_dateTimeNoTimeZone__Class** type_info = (::app::Datatype_dateTimeNoTimeZone__Class**)(modloader::win::memory::resolve_rva(0x04706BB0));
    }
    namespace Datatype_dateTimeTimeZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_dateTimeTimeZone__Class** type_info = (::app::Datatype_dateTimeTimeZone__Class**)(modloader::win::memory::resolve_rva(0x04728A88));
    }
    namespace Datatype_dateTime {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_dateTime__Class** type_info = (::app::Datatype_dateTime__Class**)(modloader::win::memory::resolve_rva(0x047892C8));
    }
    namespace Datatype_timeNoTimeZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_timeNoTimeZone__Class** type_info = (::app::Datatype_timeNoTimeZone__Class**)(modloader::win::memory::resolve_rva(0x047441B8));
    }
    namespace Datatype_timeTimeZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_timeTimeZone__Class** type_info = (::app::Datatype_timeTimeZone__Class**)(modloader::win::memory::resolve_rva(0x0471A9B8));
    }
    namespace Datatype_time {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_time__Class** type_info = (::app::Datatype_time__Class**)(modloader::win::memory::resolve_rva(0x0470A570));
    }
    namespace Datatype_date {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_date__Class** type_info = (::app::Datatype_date__Class**)(modloader::win::memory::resolve_rva(0x04738810));
    }
    namespace Datatype_yearMonth {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_yearMonth__Class** type_info = (::app::Datatype_yearMonth__Class**)(modloader::win::memory::resolve_rva(0x04786AE0));
    }
    namespace Datatype_year {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_year__Class** type_info = (::app::Datatype_year__Class**)(modloader::win::memory::resolve_rva(0x047652A0));
    }
    namespace Datatype_monthDay {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_monthDay__Class** type_info = (::app::Datatype_monthDay__Class**)(modloader::win::memory::resolve_rva(0x04729240));
    }
    namespace Datatype_day {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_day__Class** type_info = (::app::Datatype_day__Class**)(modloader::win::memory::resolve_rva(0x04703D18));
    }
    namespace Datatype_month {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_month__Class** type_info = (::app::Datatype_month__Class**)(modloader::win::memory::resolve_rva(0x0471E1E0));
    }
    namespace Datatype_hexBinary {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_hexBinary__Class** type_info = (::app::Datatype_hexBinary__Class**)(modloader::win::memory::resolve_rva(0x0473C990));
    }
    namespace Datatype_base64Binary {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_base64Binary__Class** type_info = (::app::Datatype_base64Binary__Class**)(modloader::win::memory::resolve_rva(0x04736CC8));
    }
    namespace Datatype_anyURI {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_anyURI__Class** type_info = (::app::Datatype_anyURI__Class**)(modloader::win::memory::resolve_rva(0x04722098));
    }
    namespace Datatype_QName {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_QName__Class** type_info = (::app::Datatype_QName__Class**)(modloader::win::memory::resolve_rva(0x04768D18));
    }
    namespace Datatype_normalizedString {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_normalizedString__Class** type_info = (::app::Datatype_normalizedString__Class**)(modloader::win::memory::resolve_rva(0x047606A0));
    }
    namespace Datatype_normalizedStringV1Compat {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_normalizedStringV1Compat__Class** type_info = (::app::Datatype_normalizedStringV1Compat__Class**)(modloader::win::memory::resolve_rva(0x04722EB0));
    }
    namespace Datatype_token {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_token__Class** type_info = (::app::Datatype_token__Class**)(modloader::win::memory::resolve_rva(0x0475CF78));
    }
    namespace Datatype_tokenV1Compat {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_tokenV1Compat__Class** type_info = (::app::Datatype_tokenV1Compat__Class**)(modloader::win::memory::resolve_rva(0x04735440));
    }
    namespace Datatype_language {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_language__Class** type_info = (::app::Datatype_language__Class**)(modloader::win::memory::resolve_rva(0x04719798));
    }
    namespace Datatype_NMTOKEN {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_NMTOKEN__Class** type_info = (::app::Datatype_NMTOKEN__Class**)(modloader::win::memory::resolve_rva(0x04727070));
    }
    namespace Datatype_Name {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_Name__Class** type_info = (::app::Datatype_Name__Class**)(modloader::win::memory::resolve_rva(0x04723408));
    }
    namespace Datatype_NCName {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_NCName__Class** type_info = (::app::Datatype_NCName__Class**)(modloader::win::memory::resolve_rva(0x04769770));
    }
    namespace Datatype_ID {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_ID__Class** type_info = (::app::Datatype_ID__Class**)(modloader::win::memory::resolve_rva(0x04751640));
    }
    namespace Datatype_IDREF {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_IDREF__Class** type_info = (::app::Datatype_IDREF__Class**)(modloader::win::memory::resolve_rva(0x047435C8));
    }
    namespace Datatype_ENTITY {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_ENTITY__Class** type_info = (::app::Datatype_ENTITY__Class**)(modloader::win::memory::resolve_rva(0x04759A60));
    }
    namespace Datatype_NOTATION {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_NOTATION__Class** type_info = (::app::Datatype_NOTATION__Class**)(modloader::win::memory::resolve_rva(0x0478F2A0));
    }
    namespace Datatype_integer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_integer__Class** type_info = (::app::Datatype_integer__Class**)(modloader::win::memory::resolve_rva(0x04781D60));
    }
    namespace Datatype_nonPositiveInteger {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_nonPositiveInteger__Class** type_info = (::app::Datatype_nonPositiveInteger__Class**)(modloader::win::memory::resolve_rva(0x0476D250));
    }
    namespace Datatype_negativeInteger {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_negativeInteger__Class** type_info = (::app::Datatype_negativeInteger__Class**)(modloader::win::memory::resolve_rva(0x0474FF70));
    }
    namespace Datatype_long {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_long__Class** type_info = (::app::Datatype_long__Class**)(modloader::win::memory::resolve_rva(0x0471E498));
    }
    namespace Datatype_int {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_int__Class** type_info = (::app::Datatype_int__Class**)(modloader::win::memory::resolve_rva(0x04765E38));
    }
    namespace Datatype_short {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_short__Class** type_info = (::app::Datatype_short__Class**)(modloader::win::memory::resolve_rva(0x04703690));
    }
    namespace Datatype_byte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_byte__Class** type_info = (::app::Datatype_byte__Class**)(modloader::win::memory::resolve_rva(0x04763790));
    }
    namespace Datatype_nonNegativeInteger {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_nonNegativeInteger__Class** type_info = (::app::Datatype_nonNegativeInteger__Class**)(modloader::win::memory::resolve_rva(0x04758DD0));
    }
    namespace Datatype_unsignedLong {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_unsignedLong__Class** type_info = (::app::Datatype_unsignedLong__Class**)(modloader::win::memory::resolve_rva(0x047921F0));
    }
    namespace Datatype_unsignedInt {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_unsignedInt__Class** type_info = (::app::Datatype_unsignedInt__Class**)(modloader::win::memory::resolve_rva(0x04745760));
    }
    namespace Datatype_unsignedShort {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_unsignedShort__Class** type_info = (::app::Datatype_unsignedShort__Class**)(modloader::win::memory::resolve_rva(0x04707878));
    }
    namespace Datatype_unsignedByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_unsignedByte__Class** type_info = (::app::Datatype_unsignedByte__Class**)(modloader::win::memory::resolve_rva(0x04747390));
    }
    namespace Datatype_positiveInteger {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_positiveInteger__Class** type_info = (::app::Datatype_positiveInteger__Class**)(modloader::win::memory::resolve_rva(0x0474BC20));
    }
    namespace Datatype_doubleXdr {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_doubleXdr__Class** type_info = (::app::Datatype_doubleXdr__Class**)(modloader::win::memory::resolve_rva(0x04761280));
    }
    namespace Datatype_floatXdr {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_floatXdr__Class** type_info = (::app::Datatype_floatXdr__Class**)(modloader::win::memory::resolve_rva(0x04745C00));
    }
    namespace Datatype_QNameXdr {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_QNameXdr__Class** type_info = (::app::Datatype_QNameXdr__Class**)(modloader::win::memory::resolve_rva(0x0478CC30));
    }
    namespace Datatype_ENUMERATION {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_ENUMERATION__Class** type_info = (::app::Datatype_ENUMERATION__Class**)(modloader::win::memory::resolve_rva(0x04711D18));
    }
    namespace Datatype_char {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_char__Class** type_info = (::app::Datatype_char__Class**)(modloader::win::memory::resolve_rva(0x0471E148));
    }
    namespace Datatype_fixed {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_fixed__Class** type_info = (::app::Datatype_fixed__Class**)(modloader::win::memory::resolve_rva(0x04759CC8));
    }
    namespace Datatype_uuid {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datatype_uuid__Class** type_info = (::app::Datatype_uuid__Class**)(modloader::win::memory::resolve_rva(0x04738420));
    }
    namespace DtdValidator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DtdValidator__Class** type_info = (::app::DtdValidator__Class**)(modloader::win::memory::resolve_rva(0x04730D50));
    }
    namespace DtdValidator_NamespaceManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DtdValidator_NamespaceManager__Class** type_info = (::app::DtdValidator_NamespaceManager__Class**)(modloader::win::memory::resolve_rva(0x04736240));
    }
    namespace FacetsChecker_FacetsCompiler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FacetsChecker_FacetsCompiler__Class** type_info = (::app::FacetsChecker_FacetsCompiler__Class**)(modloader::win::memory::resolve_rva(0x047436B0));
    }
    namespace FacetsChecker_FacetsCompiler_Map__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FacetsChecker_FacetsCompiler_Map__Array__Class** type_info = (::app::FacetsChecker_FacetsCompiler_Map__Array__Class**)(modloader::win::memory::resolve_rva(0x04754270));
    }
    namespace Numeric10FacetsChecker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Numeric10FacetsChecker__Class** type_info = (::app::Numeric10FacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x04719EE0));
    }
    namespace Numeric2FacetsChecker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Numeric2FacetsChecker__Class** type_info = (::app::Numeric2FacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x04752430));
    }
    namespace DurationFacetsChecker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DurationFacetsChecker__Class** type_info = (::app::DurationFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x0474CC78));
    }
    namespace DateTimeFacetsChecker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DateTimeFacetsChecker__Class** type_info = (::app::DateTimeFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x04756608));
    }
    namespace StringFacetsChecker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StringFacetsChecker__Class** type_info = (::app::StringFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x0473D308));
    }
    namespace QNameFacetsChecker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::QNameFacetsChecker__Class** type_info = (::app::QNameFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x047627E0));
    }
    namespace MiscFacetsChecker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MiscFacetsChecker__Class** type_info = (::app::MiscFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x0473E038));
    }
    namespace BinaryFacetsChecker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryFacetsChecker__Class** type_info = (::app::BinaryFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x04754900));
    }
    namespace ListFacetsChecker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ListFacetsChecker__Class** type_info = (::app::ListFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x04779598));
    }
    namespace UnionFacetsChecker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnionFacetsChecker__Class** type_info = (::app::UnionFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x04718478));
    }
    namespace XmlSchemaInference {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaInference__Class** type_info = (::app::XmlSchemaInference__Class**)(modloader::win::memory::resolve_rva(0x04714ED0));
    }
    namespace XmlSchemaSimpleContentExtension {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaSimpleContentExtension__Class** type_info = (::app::XmlSchemaSimpleContentExtension__Class**)(modloader::win::memory::resolve_rva(0x0473A338));
    }
    namespace XmlSchemaInferenceException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaInferenceException__Class** type_info = (::app::XmlSchemaInferenceException__Class**)(modloader::win::memory::resolve_rva(0x047816C0));
    }
    namespace NamespaceListV1Compat {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NamespaceListV1Compat__Class** type_info = (::app::NamespaceListV1Compat__Class**)(modloader::win::memory::resolve_rva(0x0473FC08));
    }
    namespace RedefineEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RedefineEntry__Class** type_info = (::app::RedefineEntry__Class**)(modloader::win::memory::resolve_rva(0x04709D98));
    }
    namespace XmlSchemaExternal {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaExternal__Class** type_info = (::app::XmlSchemaExternal__Class**)(modloader::win::memory::resolve_rva(0x047755B8));
    }
    namespace XmlSchemaRedefine {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaRedefine__Class** type_info = (::app::XmlSchemaRedefine__Class**)(modloader::win::memory::resolve_rva(0x047586E0));
    }
    namespace Preprocessor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Preprocessor__Class** type_info = (::app::Preprocessor__Class**)(modloader::win::memory::resolve_rva(0x047783D0));
    }
    namespace XmlSchemaGroup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaGroup__Class** type_info = (::app::XmlSchemaGroup__Class**)(modloader::win::memory::resolve_rva(0x047281B8));
    }
    namespace XmlSchemaGroupBase {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaGroupBase__Class** type_info = (::app::XmlSchemaGroupBase__Class**)(modloader::win::memory::resolve_rva(0x0473CF00));
    }
    namespace XmlSchemaAll {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaAll__Class** type_info = (::app::XmlSchemaAll__Class**)(modloader::win::memory::resolve_rva(0x04792B80));
    }
    namespace XmlSchemaAttributeGroup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaAttributeGroup__Class** type_info = (::app::XmlSchemaAttributeGroup__Class**)(modloader::win::memory::resolve_rva(0x04798D18));
    }
    namespace XmlSchemaNotation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaNotation__Class** type_info = (::app::XmlSchemaNotation__Class**)(modloader::win::memory::resolve_rva(0x04710CA0));
    }
    namespace SchemaCollectionCompiler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SchemaCollectionCompiler__Class** type_info = (::app::SchemaCollectionCompiler__Class**)(modloader::win::memory::resolve_rva(0x0474A4B8));
    }
    namespace XmlSchemaSubstitutionGroup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaSubstitutionGroup__Class** type_info = (::app::XmlSchemaSubstitutionGroup__Class**)(modloader::win::memory::resolve_rva(0x04722778));
    }
    namespace XmlSchemaSubstitutionGroupV1Compat {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaSubstitutionGroupV1Compat__Class** type_info = (::app::XmlSchemaSubstitutionGroupV1Compat__Class**)(modloader::win::memory::resolve_rva(0x04711840));
    }
    namespace XmlSchemaChoice {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaChoice__Class** type_info = (::app::XmlSchemaChoice__Class**)(modloader::win::memory::resolve_rva(0x04769DE8));
    }
    namespace XmlSchemaSimpleContentRestriction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaSimpleContentRestriction__Class** type_info = (::app::XmlSchemaSimpleContentRestriction__Class**)(modloader::win::memory::resolve_rva(0x0477A2C8));
    }
    namespace XmlSchemaComplexContentExtension {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaComplexContentExtension__Class** type_info = (::app::XmlSchemaComplexContentExtension__Class**)(modloader::win::memory::resolve_rva(0x04745380));
    }
    namespace XmlSchemaComplexContentRestriction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaComplexContentRestriction__Class** type_info = (::app::XmlSchemaComplexContentRestriction__Class**)(modloader::win::memory::resolve_rva(0x0475DDE0));
    }
    namespace XmlSchemaGroupRef {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaGroupRef__Class** type_info = (::app::XmlSchemaGroupRef__Class**)(modloader::win::memory::resolve_rva(0x0471B438));
    }
    namespace XmlSchemaSequence {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaSequence__Class** type_info = (::app::XmlSchemaSequence__Class**)(modloader::win::memory::resolve_rva(0x04759A68));
    }
    namespace XmlSchemaAny {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaAny__Class** type_info = (::app::XmlSchemaAny__Class**)(modloader::win::memory::resolve_rva(0x047368B8));
    }
    namespace SchemaCollectionPreprocessor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SchemaCollectionPreprocessor__Class** type_info = (::app::SchemaCollectionPreprocessor__Class**)(modloader::win::memory::resolve_rva(0x0477B308));
    }
    namespace SchemaNamespaceManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SchemaNamespaceManager__Class** type_info = (::app::SchemaNamespaceManager__Class**)(modloader::win::memory::resolve_rva(0x04704B60));
    }
    namespace Compiler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Compiler__Class** type_info = (::app::Compiler__Class**)(modloader::win::memory::resolve_rva(0x04783AF8));
    }
    namespace XdrValidator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XdrValidator__Class** type_info = (::app::XdrValidator__Class**)(modloader::win::memory::resolve_rva(0x0473BDF0));
    }
    namespace XmlAtomicValue {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlAtomicValue__Class** type_info = (::app::XmlAtomicValue__Class**)(modloader::win::memory::resolve_rva(0x0477E0B0));
    }
    namespace XmlAtomicValue_NamespacePrefixForQName {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlAtomicValue_NamespacePrefixForQName__Class** type_info = (::app::XmlAtomicValue_NamespacePrefixForQName__Class**)(modloader::win::memory::resolve_rva(0x0478D278));
    }
    namespace XmlSchemaAppInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaAppInfo__Class** type_info = (::app::XmlSchemaAppInfo__Class**)(modloader::win::memory::resolve_rva(0x04753228));
    }
    namespace XmlSchemaAttributeGroupRef {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaAttributeGroupRef__Class** type_info = (::app::XmlSchemaAttributeGroupRef__Class**)(modloader::win::memory::resolve_rva(0x047500D8));
    }
    namespace XmlSchemaCollectionEnumerator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaCollectionEnumerator__Class** type_info = (::app::XmlSchemaCollectionEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0478B500));
    }
    namespace XmlSchemaCollectionNode {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaCollectionNode__Class** type_info = (::app::XmlSchemaCollectionNode__Class**)(modloader::win::memory::resolve_rva(0x04708AC8));
    }
    namespace XmlSchemaDocumentation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaDocumentation__Class** type_info = (::app::XmlSchemaDocumentation__Class**)(modloader::win::memory::resolve_rva(0x0477DCF0));
    }
    namespace XmlSchemaLengthFacet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaLengthFacet__Class** type_info = (::app::XmlSchemaLengthFacet__Class**)(modloader::win::memory::resolve_rva(0x047323C0));
    }
    namespace XmlSchemaMinLengthFacet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaMinLengthFacet__Class** type_info = (::app::XmlSchemaMinLengthFacet__Class**)(modloader::win::memory::resolve_rva(0x04704898));
    }
    namespace XmlSchemaMaxLengthFacet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaMaxLengthFacet__Class** type_info = (::app::XmlSchemaMaxLengthFacet__Class**)(modloader::win::memory::resolve_rva(0x0477C278));
    }
} // namespace app::classes::types
