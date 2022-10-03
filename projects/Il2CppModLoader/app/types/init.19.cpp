#include <Il2CppModLoader/app/types/AllElementsContentValidator.h>
#include <Il2CppModLoader/app/types/AutoValidator.h>
#include <Il2CppModLoader/app/types/AxisElement.h>
#include <Il2CppModLoader/app/types/AxisStack.h>
#include <Il2CppModLoader/app/types/ChameleonKey.h>
#include <Il2CppModLoader/app/types/ChoiceNode.h>
#include <Il2CppModLoader/app/types/ClassMap.h>
#include <Il2CppModLoader/app/types/DfaContentValidator.h>
#include <Il2CppModLoader/app/types/DoubleLinkAxis.h>
#include <Il2CppModLoader/app/types/EnumMap.h>
#include <Il2CppModLoader/app/types/EnumMap_EnumMapMember.h>
#include <Il2CppModLoader/app/types/EnumMap_EnumMapMember__Array.h>
#include <Il2CppModLoader/app/types/ForwardAxis.h>
#include <Il2CppModLoader/app/types/KSStruct.h>
#include <Il2CppModLoader/app/types/KeySequence.h>
#include <Il2CppModLoader/app/types/LeafRangeNode.h>
#include <Il2CppModLoader/app/types/ListMap.h>
#include <Il2CppModLoader/app/types/LocatedActiveAxis.h>
#include <Il2CppModLoader/app/types/LocatedActiveAxis__Array.h>
#include <Il2CppModLoader/app/types/NamespaceListNode.h>
#include <Il2CppModLoader/app/types/NfaContentValidator.h>
#include <Il2CppModLoader/app/types/PlusNode.h>
#include <Il2CppModLoader/app/types/Position.h>
#include <Il2CppModLoader/app/types/QmarkNode.h>
#include <Il2CppModLoader/app/types/RangeContentValidator.h>
#include <Il2CppModLoader/app/types/ReflectionHelper.h>
#include <Il2CppModLoader/app/types/StarNode.h>
#include <Il2CppModLoader/app/types/TypeData.h>
#include <Il2CppModLoader/app/types/TypeMember.h>
#include <Il2CppModLoader/app/types/TypedObject.h>
#include <Il2CppModLoader/app/types/TypedObject_DecimalStruct.h>
#include <Il2CppModLoader/app/types/TypedObject__Array.h>
#include <Il2CppModLoader/app/types/UnreferencedObjectEventArgs.h>
#include <Il2CppModLoader/app/types/UpaException.h>
#include <Il2CppModLoader/app/types/XPathException.h>
#include <Il2CppModLoader/app/types/XPathNavigator_DebuggerDisplayProxy.h>
#include <Il2CppModLoader/app/types/XmlAnyAttributeAttribute.h>
#include <Il2CppModLoader/app/types/XmlAnyElementAttribute.h>
#include <Il2CppModLoader/app/types/XmlAnyElementAttributes.h>
#include <Il2CppModLoader/app/types/XmlArrayAttribute.h>
#include <Il2CppModLoader/app/types/XmlArrayItemAttribute.h>
#include <Il2CppModLoader/app/types/XmlArrayItemAttributes.h>
#include <Il2CppModLoader/app/types/XmlAttributeAttribute.h>
#include <Il2CppModLoader/app/types/XmlAttributeEventArgs.h>
#include <Il2CppModLoader/app/types/XmlAttributeOverrides.h>
#include <Il2CppModLoader/app/types/XmlAttributes.h>
#include <Il2CppModLoader/app/types/XmlChoiceIdentifierAttribute.h>
#include <Il2CppModLoader/app/types/XmlElementAttribute.h>
#include <Il2CppModLoader/app/types/XmlElementAttributes.h>
#include <Il2CppModLoader/app/types/XmlElementEventArgs.h>
#include <Il2CppModLoader/app/types/XmlEnumAttribute.h>
#include <Il2CppModLoader/app/types/XmlIgnoreAttribute.h>
#include <Il2CppModLoader/app/types/XmlMembersMapping.h>
#include <Il2CppModLoader/app/types/XmlNamespaceDeclarationsAttribute.h>
#include <Il2CppModLoader/app/types/XmlNodeEventArgs.h>
#include <Il2CppModLoader/app/types/XmlReflectionImporter.h>
#include <Il2CppModLoader/app/types/XmlReflectionImporter_c.h>
#include <Il2CppModLoader/app/types/XmlReflectionMember.h>
#include <Il2CppModLoader/app/types/XmlRootAttribute.h>
#include <Il2CppModLoader/app/types/XmlSchemaComplexContent.h>
#include <Il2CppModLoader/app/types/XmlSchemaComplexType.h>
#include <Il2CppModLoader/app/types/XmlSchemaFacet.h>
#include <Il2CppModLoader/app/types/XmlSchemaIdentityConstraint.h>
#include <Il2CppModLoader/app/types/XmlSchemaPatternFacet.h>
#include <Il2CppModLoader/app/types/XmlSchemaProviderAttribute.h>
#include <Il2CppModLoader/app/types/XmlSchemaXPath.h>
#include <Il2CppModLoader/app/types/XmlSerializableMapping.h>
#include <Il2CppModLoader/app/types/XmlSerializationCollectionFixupCallback.h>
#include <Il2CppModLoader/app/types/XmlSerializationFixupCallback.h>
#include <Il2CppModLoader/app/types/XmlSerializationReadCallback.h>
#include <Il2CppModLoader/app/types/XmlSerializationReaderInterpreter.h>
#include <Il2CppModLoader/app/types/XmlSerializationReaderInterpreter_FixupCallbackInfo.h>
#include <Il2CppModLoader/app/types/XmlSerializationReaderInterpreter_ReaderCallbackInfo.h>
#include <Il2CppModLoader/app/types/XmlSerializationReader_CollectionFixup.h>
#include <Il2CppModLoader/app/types/XmlSerializationReader_CollectionItemFixup.h>
#include <Il2CppModLoader/app/types/XmlSerializationReader_Fixup.h>
#include <Il2CppModLoader/app/types/XmlSerializationReader_WriteCallbackInfo.h>
#include <Il2CppModLoader/app/types/XmlSerializationWriteCallback.h>
#include <Il2CppModLoader/app/types/XmlSerializationWriter.h>
#include <Il2CppModLoader/app/types/XmlSerializationWriterInterpreter.h>
#include <Il2CppModLoader/app/types/XmlSerializationWriterInterpreter_CallbackInfo.h>
#include <Il2CppModLoader/app/types/XmlSerializationWriter_WriteCallbackInfo.h>
#include <Il2CppModLoader/app/types/XmlSerializer.h>
#include <Il2CppModLoader/app/types/XmlSerializerFactory.h>
#include <Il2CppModLoader/app/types/XmlTextAttribute.h>
#include <Il2CppModLoader/app/types/XmlTypeAttribute.h>
#include <Il2CppModLoader/app/types/XmlTypeMapElementInfo.h>
#include <Il2CppModLoader/app/types/XmlTypeMapElementInfoList.h>
#include <Il2CppModLoader/app/types/XmlTypeMapMember.h>
#include <Il2CppModLoader/app/types/XmlTypeMapMemberAnyAttribute.h>
#include <Il2CppModLoader/app/types/XmlTypeMapMemberAnyElement.h>
#include <Il2CppModLoader/app/types/XmlTypeMapMemberAttribute.h>
#include <Il2CppModLoader/app/types/XmlTypeMapMemberAttribute__Array.h>
#include <Il2CppModLoader/app/types/XmlTypeMapMemberElement.h>
#include <Il2CppModLoader/app/types/XmlTypeMapMemberExpandable.h>
#include <Il2CppModLoader/app/types/XmlTypeMapMemberFlatList.h>
#include <Il2CppModLoader/app/types/XmlTypeMapMemberList.h>
#include <Il2CppModLoader/app/types/XmlTypeMapMemberNamespaces.h>
#include <Il2CppModLoader/app/types/XmlTypeMapping.h>
#include <Il2CppModLoader/app/types/XmlTypeSerializationSource.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XPathException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XPathException__Class** type_info = (::app::XPathException__Class**)(modloader::win::memory::resolve_rva(0x04758110));
    }
    namespace XPathNavigator_DebuggerDisplayProxy {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XPathNavigator_DebuggerDisplayProxy__Class** type_info = (::app::XPathNavigator_DebuggerDisplayProxy__Class**)(modloader::win::memory::resolve_rva(0x04744B08));
    }
    namespace XmlAttributeEventArgs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlAttributeEventArgs__Class** type_info = (::app::XmlAttributeEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04709920));
    }
    namespace XmlElementEventArgs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlElementEventArgs__Class** type_info = (::app::XmlElementEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04765740));
    }
    namespace XmlNodeEventArgs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlNodeEventArgs__Class** type_info = (::app::XmlNodeEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04792F48));
    }
    namespace UnreferencedObjectEventArgs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnreferencedObjectEventArgs__Class** type_info = (::app::UnreferencedObjectEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04714588));
    }
    namespace ReflectionHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionHelper__Class** type_info = (::app::ReflectionHelper__Class**)(modloader::win::memory::resolve_rva(0x04748670));
    }
    namespace XmlTypeMapping {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTypeMapping__Class** type_info = (::app::XmlTypeMapping__Class**)(modloader::win::memory::resolve_rva(0x04738680));
    }
    namespace TypeData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TypeData__Class** type_info = (::app::TypeData__Class**)(modloader::win::memory::resolve_rva(0x04769FD8));
    }
    namespace XmlSchemaFacet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaFacet__Class** type_info = (::app::XmlSchemaFacet__Class**)(modloader::win::memory::resolve_rva(0x0474EC70));
    }
    namespace XmlSchemaPatternFacet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaPatternFacet__Class** type_info = (::app::XmlSchemaPatternFacet__Class**)(modloader::win::memory::resolve_rva(0x047587B0));
    }
    namespace XmlTypeSerializationSource {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTypeSerializationSource__Class** type_info = (::app::XmlTypeSerializationSource__Class**)(modloader::win::memory::resolve_rva(0x047601E0));
    }
    namespace XmlRootAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlRootAttribute__Class** type_info = (::app::XmlRootAttribute__Class**)(modloader::win::memory::resolve_rva(0x0475AE50));
    }
    namespace XmlAttributeOverrides {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlAttributeOverrides__Class** type_info = (::app::XmlAttributeOverrides__Class**)(modloader::win::memory::resolve_rva(0x047328F0));
    }
    namespace TypeMember {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TypeMember__Class** type_info = (::app::TypeMember__Class**)(modloader::win::memory::resolve_rva(0x04742728));
    }
    namespace XmlAnyAttributeAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlAnyAttributeAttribute__Class** type_info = (::app::XmlAnyAttributeAttribute__Class**)(modloader::win::memory::resolve_rva(0x0470EB78));
    }
    namespace XmlAnyElementAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlAnyElementAttribute__Class** type_info = (::app::XmlAnyElementAttribute__Class**)(modloader::win::memory::resolve_rva(0x04727C70));
    }
    namespace XmlAnyElementAttributes {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlAnyElementAttributes__Class** type_info = (::app::XmlAnyElementAttributes__Class**)(modloader::win::memory::resolve_rva(0x04789318));
    }
    namespace XmlArrayAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlArrayAttribute__Class** type_info = (::app::XmlArrayAttribute__Class**)(modloader::win::memory::resolve_rva(0x0475C788));
    }
    namespace XmlArrayItemAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlArrayItemAttribute__Class** type_info = (::app::XmlArrayItemAttribute__Class**)(modloader::win::memory::resolve_rva(0x0474A7D8));
    }
    namespace XmlArrayItemAttributes {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlArrayItemAttributes__Class** type_info = (::app::XmlArrayItemAttributes__Class**)(modloader::win::memory::resolve_rva(0x04783990));
    }
    namespace XmlAttributeAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlAttributeAttribute__Class** type_info = (::app::XmlAttributeAttribute__Class**)(modloader::win::memory::resolve_rva(0x0478C698));
    }
    namespace XmlAttributes {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlAttributes__Class** type_info = (::app::XmlAttributes__Class**)(modloader::win::memory::resolve_rva(0x04726FF8));
    }
    namespace XmlChoiceIdentifierAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlChoiceIdentifierAttribute__Class** type_info = (::app::XmlChoiceIdentifierAttribute__Class**)(modloader::win::memory::resolve_rva(0x047194E0));
    }
    namespace XmlElementAttributes {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlElementAttributes__Class** type_info = (::app::XmlElementAttributes__Class**)(modloader::win::memory::resolve_rva(0x04747418));
    }
    namespace XmlEnumAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlEnumAttribute__Class** type_info = (::app::XmlEnumAttribute__Class**)(modloader::win::memory::resolve_rva(0x0473DC60));
    }
    namespace XmlTextAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTextAttribute__Class** type_info = (::app::XmlTextAttribute__Class**)(modloader::win::memory::resolve_rva(0x047163C8));
    }
    namespace XmlTypeAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTypeAttribute__Class** type_info = (::app::XmlTypeAttribute__Class**)(modloader::win::memory::resolve_rva(0x0475D980));
    }
    namespace XmlElementAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlElementAttribute__Class** type_info = (::app::XmlElementAttribute__Class**)(modloader::win::memory::resolve_rva(0x0475B0D0));
    }
    namespace XmlIgnoreAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlIgnoreAttribute__Class** type_info = (::app::XmlIgnoreAttribute__Class**)(modloader::win::memory::resolve_rva(0x04787F40));
    }
    namespace XmlMembersMapping {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlMembersMapping__Class** type_info = (::app::XmlMembersMapping__Class**)(modloader::win::memory::resolve_rva(0x0475E2E0));
    }
    namespace XmlNamespaceDeclarationsAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlNamespaceDeclarationsAttribute__Class** type_info = (::app::XmlNamespaceDeclarationsAttribute__Class**)(modloader::win::memory::resolve_rva(0x04703CB0));
    }
    namespace XmlReflectionImporter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlReflectionImporter__Class** type_info = (::app::XmlReflectionImporter__Class**)(modloader::win::memory::resolve_rva(0x04702488));
    }
    namespace XmlReflectionMember {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlReflectionMember__Class** type_info = (::app::XmlReflectionMember__Class**)(modloader::win::memory::resolve_rva(0x0470E878));
    }
    namespace XmlTypeMapMember {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTypeMapMember__Class** type_info = (::app::XmlTypeMapMember__Class**)(modloader::win::memory::resolve_rva(0x0476FF98));
    }
    namespace XmlTypeMapElementInfoList {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTypeMapElementInfoList__Class** type_info = (::app::XmlTypeMapElementInfoList__Class**)(modloader::win::memory::resolve_rva(0x047570F0));
    }
    namespace XmlTypeMapMemberElement {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTypeMapMemberElement__Class** type_info = (::app::XmlTypeMapMemberElement__Class**)(modloader::win::memory::resolve_rva(0x0474F7D0));
    }
    namespace XmlReflectionImporter_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlReflectionImporter_c__Class** type_info = (::app::XmlReflectionImporter_c__Class**)(modloader::win::memory::resolve_rva(0x04784120));
    }
    namespace XmlSchemaProviderAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaProviderAttribute__Class** type_info = (::app::XmlSchemaProviderAttribute__Class**)(modloader::win::memory::resolve_rva(0x047555D8));
    }
    namespace XmlSerializationCollectionFixupCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSerializationCollectionFixupCallback__Class** type_info = (::app::XmlSerializationCollectionFixupCallback__Class**)(modloader::win::memory::resolve_rva(0x0472FA80));
    }
    namespace XmlSerializationFixupCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSerializationFixupCallback__Class** type_info = (::app::XmlSerializationFixupCallback__Class**)(modloader::win::memory::resolve_rva(0x04759238));
    }
    namespace XmlSerializationReadCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSerializationReadCallback__Class** type_info = (::app::XmlSerializationReadCallback__Class**)(modloader::win::memory::resolve_rva(0x0474CC38));
    }
    namespace XmlSerializer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSerializer__Class** type_info = (::app::XmlSerializer__Class**)(modloader::win::memory::resolve_rva(0x0470CFD0));
    }
    namespace XmlSerializationWriter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSerializationWriter__Class** type_info = (::app::XmlSerializationWriter__Class**)(modloader::win::memory::resolve_rva(0x04795F58));
    }
    namespace XmlSerializationWriterInterpreter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSerializationWriterInterpreter__Class** type_info = (::app::XmlSerializationWriterInterpreter__Class**)(modloader::win::memory::resolve_rva(0x047535B0));
    }
    namespace XmlSerializationReaderInterpreter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSerializationReaderInterpreter__Class** type_info = (::app::XmlSerializationReaderInterpreter__Class**)(modloader::win::memory::resolve_rva(0x047363E0));
    }
    namespace XmlSerializationReader_CollectionFixup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSerializationReader_CollectionFixup__Class** type_info = (::app::XmlSerializationReader_CollectionFixup__Class**)(modloader::win::memory::resolve_rva(0x04712010));
    }
    namespace XmlSerializationReader_Fixup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSerializationReader_Fixup__Class** type_info = (::app::XmlSerializationReader_Fixup__Class**)(modloader::win::memory::resolve_rva(0x04708448));
    }
    namespace XmlSerializationReader_CollectionItemFixup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSerializationReader_CollectionItemFixup__Class** type_info = (::app::XmlSerializationReader_CollectionItemFixup__Class**)(modloader::win::memory::resolve_rva(0x0477D008));
    }
    namespace XmlSerializationReader_WriteCallbackInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSerializationReader_WriteCallbackInfo__Class** type_info = (::app::XmlSerializationReader_WriteCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x047751C0));
    }
    namespace ClassMap {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ClassMap__Class** type_info = (::app::ClassMap__Class**)(modloader::win::memory::resolve_rva(0x04704B68));
    }
    namespace XmlTypeMapMemberAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTypeMapMemberAttribute__Class** type_info = (::app::XmlTypeMapMemberAttribute__Class**)(modloader::win::memory::resolve_rva(0x04715878));
    }
    namespace XmlTypeMapMemberAttribute__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTypeMapMemberAttribute__Array__Class** type_info = (::app::XmlTypeMapMemberAttribute__Array__Class**)(modloader::win::memory::resolve_rva(0x047044B8));
    }
    namespace XmlTypeMapMemberExpandable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTypeMapMemberExpandable__Class** type_info = (::app::XmlTypeMapMemberExpandable__Class**)(modloader::win::memory::resolve_rva(0x047170A0));
    }
    namespace XmlTypeMapMemberAnyElement {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTypeMapMemberAnyElement__Class** type_info = (::app::XmlTypeMapMemberAnyElement__Class**)(modloader::win::memory::resolve_rva(0x04756E08));
    }
    namespace XmlTypeMapMemberAnyAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTypeMapMemberAnyAttribute__Class** type_info = (::app::XmlTypeMapMemberAnyAttribute__Class**)(modloader::win::memory::resolve_rva(0x04701710));
    }
    namespace XmlTypeMapMemberNamespaces {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTypeMapMemberNamespaces__Class** type_info = (::app::XmlTypeMapMemberNamespaces__Class**)(modloader::win::memory::resolve_rva(0x04752988));
    }
    namespace XmlTypeMapElementInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTypeMapElementInfo__Class** type_info = (::app::XmlTypeMapElementInfo__Class**)(modloader::win::memory::resolve_rva(0x04781898));
    }
    namespace XmlSerializationReaderInterpreter_FixupCallbackInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSerializationReaderInterpreter_FixupCallbackInfo__Class** type_info = (::app::XmlSerializationReaderInterpreter_FixupCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x047248F0));
    }
    namespace XmlSerializationReaderInterpreter_ReaderCallbackInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSerializationReaderInterpreter_ReaderCallbackInfo__Class** type_info = (::app::XmlSerializationReaderInterpreter_ReaderCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x047409A8));
    }
    namespace XmlSerializationWriteCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSerializationWriteCallback__Class** type_info = (::app::XmlSerializationWriteCallback__Class**)(modloader::win::memory::resolve_rva(0x047815A8));
    }
    namespace XmlSerializationWriter_WriteCallbackInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSerializationWriter_WriteCallbackInfo__Class** type_info = (::app::XmlSerializationWriter_WriteCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x0471C338));
    }
    namespace ListMap {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ListMap__Class** type_info = (::app::ListMap__Class**)(modloader::win::memory::resolve_rva(0x047528D8));
    }
    namespace XmlSerializationWriterInterpreter_CallbackInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSerializationWriterInterpreter_CallbackInfo__Class** type_info = (::app::XmlSerializationWriterInterpreter_CallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x04785910));
    }
    namespace XmlSerializerFactory {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSerializerFactory__Class** type_info = (::app::XmlSerializerFactory__Class**)(modloader::win::memory::resolve_rva(0x04756DF8));
    }
    namespace XmlTypeMapMemberList {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTypeMapMemberList__Class** type_info = (::app::XmlTypeMapMemberList__Class**)(modloader::win::memory::resolve_rva(0x047364B8));
    }
    namespace XmlTypeMapMemberFlatList {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlTypeMapMemberFlatList__Class** type_info = (::app::XmlTypeMapMemberFlatList__Class**)(modloader::win::memory::resolve_rva(0x0474AC80));
    }
    namespace XmlSerializableMapping {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSerializableMapping__Class** type_info = (::app::XmlSerializableMapping__Class**)(modloader::win::memory::resolve_rva(0x04726B50));
    }
    namespace XmlSchemaComplexType {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaComplexType__Class** type_info = (::app::XmlSchemaComplexType__Class**)(modloader::win::memory::resolve_rva(0x0473F4B0));
    }
    namespace XmlSchemaComplexContent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaComplexContent__Class** type_info = (::app::XmlSchemaComplexContent__Class**)(modloader::win::memory::resolve_rva(0x0473DE00));
    }
    namespace EnumMap {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnumMap__Class** type_info = (::app::EnumMap__Class**)(modloader::win::memory::resolve_rva(0x0476E398));
    }
    namespace EnumMap_EnumMapMember {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnumMap_EnumMapMember__Class** type_info = (::app::EnumMap_EnumMapMember__Class**)(modloader::win::memory::resolve_rva(0x04742E50));
    }
    namespace EnumMap_EnumMapMember__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnumMap_EnumMapMember__Array__Class** type_info = (::app::EnumMap_EnumMapMember__Array__Class**)(modloader::win::memory::resolve_rva(0x04798878));
    }
    namespace AxisElement {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AxisElement__Class** type_info = (::app::AxisElement__Class**)(modloader::win::memory::resolve_rva(0x04780718));
    }
    namespace DoubleLinkAxis {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DoubleLinkAxis__Class** type_info = (::app::DoubleLinkAxis__Class**)(modloader::win::memory::resolve_rva(0x04757068));
    }
    namespace ForwardAxis {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ForwardAxis__Class** type_info = (::app::ForwardAxis__Class**)(modloader::win::memory::resolve_rva(0x04793FC0));
    }
    namespace AxisStack {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AxisStack__Class** type_info = (::app::AxisStack__Class**)(modloader::win::memory::resolve_rva(0x04707148));
    }
    namespace AutoValidator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AutoValidator__Class** type_info = (::app::AutoValidator__Class**)(modloader::win::memory::resolve_rva(0x04717500));
    }
    namespace ChameleonKey {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ChameleonKey__Class** type_info = (::app::ChameleonKey__Class**)(modloader::win::memory::resolve_rva(0x047830E8));
    }
    namespace XmlSchemaIdentityConstraint {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaIdentityConstraint__Class** type_info = (::app::XmlSchemaIdentityConstraint__Class**)(modloader::win::memory::resolve_rva(0x047312D8));
    }
    namespace XmlSchemaXPath {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSchemaXPath__Class** type_info = (::app::XmlSchemaXPath__Class**)(modloader::win::memory::resolve_rva(0x0476B408));
    }
    namespace LocatedActiveAxis {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LocatedActiveAxis__Class** type_info = (::app::LocatedActiveAxis__Class**)(modloader::win::memory::resolve_rva(0x04714AD0));
    }
    namespace KeySequence {
        IL2CPP_MODLOADER_DLLEXPORT ::app::KeySequence__Class** type_info = (::app::KeySequence__Class**)(modloader::win::memory::resolve_rva(0x04785288));
    }
    namespace TypedObject {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TypedObject__Class** type_info = (::app::TypedObject__Class**)(modloader::win::memory::resolve_rva(0x0477E908));
    }
    namespace TypedObject_DecimalStruct {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TypedObject_DecimalStruct__Class** type_info = (::app::TypedObject_DecimalStruct__Class**)(modloader::win::memory::resolve_rva(0x04750268));
    }
    namespace TypedObject__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TypedObject__Array__Class** type_info = (::app::TypedObject__Array__Class**)(modloader::win::memory::resolve_rva(0x0477CCB0));
    }
    namespace KSStruct {
        IL2CPP_MODLOADER_DLLEXPORT ::app::KSStruct__Class** type_info = (::app::KSStruct__Class**)(modloader::win::memory::resolve_rva(0x04767640));
    }
    namespace LocatedActiveAxis__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LocatedActiveAxis__Array__Class** type_info = (::app::LocatedActiveAxis__Array__Class**)(modloader::win::memory::resolve_rva(0x04759BA8));
    }
    namespace UpaException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UpaException__Class** type_info = (::app::UpaException__Class**)(modloader::win::memory::resolve_rva(0x047575B0));
    }
    namespace Position {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Position__Class** type_info = (::app::Position__Class**)(modloader::win::memory::resolve_rva(0x04754DF8));
    }
    namespace NamespaceListNode {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NamespaceListNode__Class** type_info = (::app::NamespaceListNode__Class**)(modloader::win::memory::resolve_rva(0x047158E8));
    }
    namespace ChoiceNode {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ChoiceNode__Class** type_info = (::app::ChoiceNode__Class**)(modloader::win::memory::resolve_rva(0x04761288));
    }
    namespace PlusNode {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlusNode__Class** type_info = (::app::PlusNode__Class**)(modloader::win::memory::resolve_rva(0x047314B8));
    }
    namespace QmarkNode {
        IL2CPP_MODLOADER_DLLEXPORT ::app::QmarkNode__Class** type_info = (::app::QmarkNode__Class**)(modloader::win::memory::resolve_rva(0x0473AD58));
    }
    namespace StarNode {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StarNode__Class** type_info = (::app::StarNode__Class**)(modloader::win::memory::resolve_rva(0x04790DD8));
    }
    namespace LeafRangeNode {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeafRangeNode__Class** type_info = (::app::LeafRangeNode__Class**)(modloader::win::memory::resolve_rva(0x04791C80));
    }
    namespace DfaContentValidator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DfaContentValidator__Class** type_info = (::app::DfaContentValidator__Class**)(modloader::win::memory::resolve_rva(0x0476A838));
    }
    namespace NfaContentValidator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NfaContentValidator__Class** type_info = (::app::NfaContentValidator__Class**)(modloader::win::memory::resolve_rva(0x04764860));
    }
    namespace RangeContentValidator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RangeContentValidator__Class** type_info = (::app::RangeContentValidator__Class**)(modloader::win::memory::resolve_rva(0x04770790));
    }
    namespace AllElementsContentValidator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AllElementsContentValidator__Class** type_info = (::app::AllElementsContentValidator__Class**)(modloader::win::memory::resolve_rva(0x04728DD8));
    }
} // namespace app::classes::types
