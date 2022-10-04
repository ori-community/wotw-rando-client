#include <Il2CppModLoader/app/types/AmbiguousMatchException.h>
#include <Il2CppModLoader/app/types/ArraySpec.h>
#include <Il2CppModLoader/app/types/BinaryFormatter.h>
#include <Il2CppModLoader/app/types/BinaryReader.h>
#include <Il2CppModLoader/app/types/ByteMatcher.h>
#include <Il2CppModLoader/app/types/CStreamWriter.h>
#include <Il2CppModLoader/app/types/ClientActivatedIdentity.h>
#include <Il2CppModLoader/app/types/ClientIdentity.h>
#include <Il2CppModLoader/app/types/Console_InternalCancelHandler.h>
#include <Il2CppModLoader/app/types/Console_WindowsConsole_WindowsCancelHandler.h>
#include <Il2CppModLoader/app/types/CustomAttributeData.h>
#include <Il2CppModLoader/app/types/CustomAttributeData_LazyCAttrData.h>
#include <Il2CppModLoader/app/types/DecoderExceptionFallback.h>
#include <Il2CppModLoader/app/types/DecoderExceptionFallbackBuffer.h>
#include <Il2CppModLoader/app/types/DecoderFallbackException.h>
#include <Il2CppModLoader/app/types/DecoderReplacementFallback.h>
#include <Il2CppModLoader/app/types/DecoderReplacementFallbackBuffer.h>
#include <Il2CppModLoader/app/types/DefaultSerializationBinder.h>
#include <Il2CppModLoader/app/types/DelegateSerializationHolder_DelegateEntry.h>
#include <Il2CppModLoader/app/types/DictionaryEntry.h>
#include <Il2CppModLoader/app/types/EncoderExceptionFallback.h>
#include <Il2CppModLoader/app/types/EncoderExceptionFallbackBuffer.h>
#include <Il2CppModLoader/app/types/EncoderFallbackException.h>
#include <Il2CppModLoader/app/types/EncoderReplacementFallback.h>
#include <Il2CppModLoader/app/types/EncoderReplacementFallbackBuffer.h>
#include <Il2CppModLoader/app/types/EncodingProvider.h>
#include <Il2CppModLoader/app/types/Encoding_DefaultDecoder.h>
#include <Il2CppModLoader/app/types/Encoding_DefaultEncoder.h>
#include <Il2CppModLoader/app/types/Encoding_EncodingByteBuffer.h>
#include <Il2CppModLoader/app/types/Encoding_EncodingCharBuffer.h>
#include <Il2CppModLoader/app/types/FastResourceComparer.h>
#include <Il2CppModLoader/app/types/FileBasedResourceGroveler.h>
#include <Il2CppModLoader/app/types/GCHandle.h>
#include <Il2CppModLoader/app/types/IConsoleDriver.h>
#include <Il2CppModLoader/app/types/ICustomAttributeProvider.h>
#include <Il2CppModLoader/app/types/ILease.h>
#include <Il2CppModLoader/app/types/IMessage.h>
#include <Il2CppModLoader/app/types/IResourceGroveler.h>
#include <Il2CppModLoader/app/types/IResourceReader.h>
#include <Il2CppModLoader/app/types/ISponsor.h>
#include <Il2CppModLoader/app/types/ISurrogateSelector.h>
#include <Il2CppModLoader/app/types/Identity.h>
#include <Il2CppModLoader/app/types/Latin1Encoding.h>
#include <Il2CppModLoader/app/types/Lease.h>
#include <Il2CppModLoader/app/types/LeaseState__Enum.h>
#include <Il2CppModLoader/app/types/Lease_RenewalDelegate.h>
#include <Il2CppModLoader/app/types/ManifestBasedResourceGroveler.h>
#include <Il2CppModLoader/app/types/MissingManifestResourceException.h>
#include <Il2CppModLoader/app/types/MissingSatelliteAssemblyException.h>
#include <Il2CppModLoader/app/types/ModifierSpec.h>
#include <Il2CppModLoader/app/types/MonoCustomAttrs_AttributeInfo.h>
#include <Il2CppModLoader/app/types/NullConsoleDriver.h>
#include <Il2CppModLoader/app/types/NumberFormatter.h>
#include <Il2CppModLoader/app/types/NumberFormatter_CustomInfo.h>
#include <Il2CppModLoader/app/types/OperatingSystem.h>
#include <Il2CppModLoader/app/types/ParameterizedStrings_FormatParam__Array.h>
#include <Il2CppModLoader/app/types/ParameterizedStrings_LowLevelStack.h>
#include <Il2CppModLoader/app/types/PointerSpec.h>
#include <Il2CppModLoader/app/types/Queue.h>
#include <Il2CppModLoader/app/types/ResourceFallbackManager.h>
#include <Il2CppModLoader/app/types/ResourceFallbackManager_GetEnumerator_d_5.h>
#include <Il2CppModLoader/app/types/ResourceManager.h>
#include <Il2CppModLoader/app/types/ResourceManager_CultureNameResourceSetPair.h>
#include <Il2CppModLoader/app/types/ResourceManager_ResourceManagerMediator.h>
#include <Il2CppModLoader/app/types/ResourceReader.h>
#include <Il2CppModLoader/app/types/ResourceReader_ResourceEnumerator.h>
#include <Il2CppModLoader/app/types/ResourceSet.h>
#include <Il2CppModLoader/app/types/ResourceTypeCode__Enum.h>
#include <Il2CppModLoader/app/types/RuntimeResourceSet.h>
#include <Il2CppModLoader/app/types/SByte__Array.h>
#include <Il2CppModLoader/app/types/SatelliteContractVersionAttribute.h>
#include <Il2CppModLoader/app/types/ServerIdentity.h>
#include <Il2CppModLoader/app/types/StreamReader.h>
#include <Il2CppModLoader/app/types/StreamWriter.h>
#include <Il2CppModLoader/app/types/TermInfoDriver.h>
#include <Il2CppModLoader/app/types/TermInfoReader.h>
#include <Il2CppModLoader/app/types/TermInfoStrings__Enum.h>
#include <Il2CppModLoader/app/types/TextWriter.h>
#include <Il2CppModLoader/app/types/Thread.h>
#include <Il2CppModLoader/app/types/ThreadState__Enum.h>
#include <Il2CppModLoader/app/types/TimeZone.h>
#include <Il2CppModLoader/app/types/TypeIdentifier.h>
#include <Il2CppModLoader/app/types/TypeIdentifiers_Display.h>
#include <Il2CppModLoader/app/types/TypeInformation.h>
#include <Il2CppModLoader/app/types/TypeName.h>
#include <Il2CppModLoader/app/types/TypeSpec.h>
#include <Il2CppModLoader/app/types/UTF32Encoding.h>
#include <Il2CppModLoader/app/types/UTF32Encoding_UTF32Decoder.h>
#include <Il2CppModLoader/app/types/UTF7Encoding.h>
#include <Il2CppModLoader/app/types/UTF7Encoding_Decoder.h>
#include <Il2CppModLoader/app/types/UTF7Encoding_DecoderUTF7Fallback.h>
#include <Il2CppModLoader/app/types/UTF7Encoding_DecoderUTF7FallbackBuffer.h>
#include <Il2CppModLoader/app/types/UTF7Encoding_Encoder.h>
#include <Il2CppModLoader/app/types/UTF8Encoding.h>
#include <Il2CppModLoader/app/types/UTF8Encoding_UTF8Decoder.h>
#include <Il2CppModLoader/app/types/UTF8Encoding_UTF8Encoder.h>
#include <Il2CppModLoader/app/types/UnicodeEncoding.h>
#include <Il2CppModLoader/app/types/UnicodeEncoding_Decoder.h>
#include <Il2CppModLoader/app/types/WeakReference.h>
#include <Il2CppModLoader/app/types/WindowsConsoleDriver.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OperatingSystem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OperatingSystem__Class** type_info = (::app::OperatingSystem__Class**)(modloader::win::memory::resolve_rva(0x04732ED0));
    }
    namespace TextWriter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TextWriter__Class** type_info = (::app::TextWriter__Class**)(modloader::win::memory::resolve_rva(0x04721A48));
    }
    namespace StreamWriter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StreamWriter__Class** type_info = (::app::StreamWriter__Class**)(modloader::win::memory::resolve_rva(0x04726F38));
    }
    namespace Console_WindowsConsole_WindowsCancelHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Console_WindowsConsole_WindowsCancelHandler__Class** type_info = (::app::Console_WindowsConsole_WindowsCancelHandler__Class**)(modloader::win::memory::resolve_rva(0x0477E220));
    }
    namespace Console_InternalCancelHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Console_InternalCancelHandler__Class** type_info = (::app::Console_InternalCancelHandler__Class**)(modloader::win::memory::resolve_rva(0x04728230));
    }
    namespace IConsoleDriver {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IConsoleDriver__Class** type_info = (::app::IConsoleDriver__Class**)(modloader::win::memory::resolve_rva(0x047502D0));
    }
    namespace DelegateSerializationHolder_DelegateEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DelegateSerializationHolder_DelegateEntry__Class** type_info = (::app::DelegateSerializationHolder_DelegateEntry__Class**)(modloader::win::memory::resolve_rva(0x04708670));
    }
    namespace Identity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Identity__Class** type_info = (::app::Identity__Class**)(modloader::win::memory::resolve_rva(0x04727B00));
    }
    namespace ServerIdentity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ServerIdentity__Class** type_info = (::app::ServerIdentity__Class**)(modloader::win::memory::resolve_rva(0x04727848));
    }
    namespace ClientIdentity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ClientIdentity__Class** type_info = (::app::ClientIdentity__Class**)(modloader::win::memory::resolve_rva(0x0475B150));
    }
    namespace GCHandle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GCHandle__Class** type_info = (::app::GCHandle__Class**)(modloader::win::memory::resolve_rva(0x04721A18));
    }
    namespace WeakReference {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WeakReference__Class** type_info = (::app::WeakReference__Class**)(modloader::win::memory::resolve_rva(0x04711228));
    }
    namespace LeaseState__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeaseState__Enum__Class** type_info = (::app::LeaseState__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471FDD0));
    }
    namespace Lease {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Lease__Class** type_info = (::app::Lease__Class**)(modloader::win::memory::resolve_rva(0x047157D0));
    }
    namespace Queue {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Queue__Class** type_info = (::app::Queue__Class**)(modloader::win::memory::resolve_rva(0x04787718));
    }
    namespace Lease_RenewalDelegate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Lease_RenewalDelegate__Class** type_info = (::app::Lease_RenewalDelegate__Class**)(modloader::win::memory::resolve_rva(0x04776E68));
    }
    namespace ILease {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ILease__Class** type_info = (::app::ILease__Class**)(modloader::win::memory::resolve_rva(0x0470D670));
    }
    namespace ISponsor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ISponsor__Class** type_info = (::app::ISponsor__Class**)(modloader::win::memory::resolve_rva(0x04747F80));
    }
    namespace ClientActivatedIdentity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ClientActivatedIdentity__Class** type_info = (::app::ClientActivatedIdentity__Class**)(modloader::win::memory::resolve_rva(0x04707DF8));
    }
    namespace IMessage {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IMessage__Class** type_info = (::app::IMessage__Class**)(modloader::win::memory::resolve_rva(0x0476B180));
    }
    namespace ICustomAttributeProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ICustomAttributeProvider__Class** type_info = (::app::ICustomAttributeProvider__Class**)(modloader::win::memory::resolve_rva(0x0470F310));
    }
    namespace CustomAttributeData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CustomAttributeData__Class** type_info = (::app::CustomAttributeData__Class**)(modloader::win::memory::resolve_rva(0x04791628));
    }
    namespace CustomAttributeData_LazyCAttrData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CustomAttributeData_LazyCAttrData__Class** type_info = (::app::CustomAttributeData_LazyCAttrData__Class**)(modloader::win::memory::resolve_rva(0x04758DD8));
    }
    namespace MonoCustomAttrs_AttributeInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MonoCustomAttrs_AttributeInfo__Class** type_info = (::app::MonoCustomAttrs_AttributeInfo__Class**)(modloader::win::memory::resolve_rva(0x0476E808));
    }
    namespace NullConsoleDriver {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NullConsoleDriver__Class** type_info = (::app::NullConsoleDriver__Class**)(modloader::win::memory::resolve_rva(0x0475CB98));
    }
    namespace NumberFormatter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NumberFormatter__Class** type_info = (::app::NumberFormatter__Class**)(modloader::win::memory::resolve_rva(0x04729C38));
    }
    namespace Thread {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Thread__Class** type_info = (::app::Thread__Class**)(modloader::win::memory::resolve_rva(0x04730070));
    }
    namespace ThreadState__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ThreadState__Enum__Class** type_info = (::app::ThreadState__Enum__Class**)(modloader::win::memory::resolve_rva(0x047480F0));
    }
    namespace NumberFormatter_CustomInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NumberFormatter_CustomInfo__Class** type_info = (::app::NumberFormatter_CustomInfo__Class**)(modloader::win::memory::resolve_rva(0x047349C0));
    }
    namespace TermInfoDriver {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TermInfoDriver__Class** type_info = (::app::TermInfoDriver__Class**)(modloader::win::memory::resolve_rva(0x04758F30));
    }
    namespace TermInfoReader {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TermInfoReader__Class** type_info = (::app::TermInfoReader__Class**)(modloader::win::memory::resolve_rva(0x04722EB8));
    }
    namespace StreamReader {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StreamReader__Class** type_info = (::app::StreamReader__Class**)(modloader::win::memory::resolve_rva(0x04763F40));
    }
    namespace CStreamWriter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CStreamWriter__Class** type_info = (::app::CStreamWriter__Class**)(modloader::win::memory::resolve_rva(0x047345B8));
    }
    namespace ByteMatcher {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ByteMatcher__Class** type_info = (::app::ByteMatcher__Class**)(modloader::win::memory::resolve_rva(0x04769A40));
    }
    namespace TermInfoStrings__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TermInfoStrings__Enum__Class** type_info = (::app::TermInfoStrings__Enum__Class**)(modloader::win::memory::resolve_rva(0x04787780));
    }
    namespace ParameterizedStrings_FormatParam__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ParameterizedStrings_FormatParam__Array__Class** type_info = (::app::ParameterizedStrings_FormatParam__Array__Class**)(modloader::win::memory::resolve_rva(0x04713B10));
    }
    namespace ParameterizedStrings_LowLevelStack {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ParameterizedStrings_LowLevelStack__Class** type_info = (::app::ParameterizedStrings_LowLevelStack__Class**)(modloader::win::memory::resolve_rva(0x04735BC0));
    }
    namespace TimeZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimeZone__Class** type_info = (::app::TimeZone__Class**)(modloader::win::memory::resolve_rva(0x04746EC8));
    }
    namespace TypeName {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TypeName__Class** type_info = (::app::TypeName__Class**)(modloader::win::memory::resolve_rva(0x0478E7C0));
    }
    namespace TypeIdentifiers_Display {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TypeIdentifiers_Display__Class** type_info = (::app::TypeIdentifiers_Display__Class**)(modloader::win::memory::resolve_rva(0x0475FD78));
    }
    namespace TypeIdentifier {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TypeIdentifier__Class** type_info = (::app::TypeIdentifier__Class**)(modloader::win::memory::resolve_rva(0x0474A6A0));
    }
    namespace ArraySpec {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ArraySpec__Class** type_info = (::app::ArraySpec__Class**)(modloader::win::memory::resolve_rva(0x047982F8));
    }
    namespace PointerSpec {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PointerSpec__Class** type_info = (::app::PointerSpec__Class**)(modloader::win::memory::resolve_rva(0x04712750));
    }
    namespace TypeSpec {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TypeSpec__Class** type_info = (::app::TypeSpec__Class**)(modloader::win::memory::resolve_rva(0x047281A8));
    }
    namespace ModifierSpec {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ModifierSpec__Class** type_info = (::app::ModifierSpec__Class**)(modloader::win::memory::resolve_rva(0x04799308));
    }
    namespace WindowsConsoleDriver {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WindowsConsoleDriver__Class** type_info = (::app::WindowsConsoleDriver__Class**)(modloader::win::memory::resolve_rva(0x0475B628));
    }
    namespace DecoderExceptionFallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DecoderExceptionFallback__Class** type_info = (::app::DecoderExceptionFallback__Class**)(modloader::win::memory::resolve_rva(0x047538F0));
    }
    namespace DecoderExceptionFallbackBuffer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DecoderExceptionFallbackBuffer__Class** type_info = (::app::DecoderExceptionFallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x04729630));
    }
    namespace DecoderFallbackException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DecoderFallbackException__Class** type_info = (::app::DecoderFallbackException__Class**)(modloader::win::memory::resolve_rva(0x04770318));
    }
    namespace DecoderReplacementFallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DecoderReplacementFallback__Class** type_info = (::app::DecoderReplacementFallback__Class**)(modloader::win::memory::resolve_rva(0x047891B0));
    }
    namespace DecoderReplacementFallbackBuffer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DecoderReplacementFallbackBuffer__Class** type_info = (::app::DecoderReplacementFallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x04715DC0));
    }
    namespace EncoderExceptionFallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EncoderExceptionFallback__Class** type_info = (::app::EncoderExceptionFallback__Class**)(modloader::win::memory::resolve_rva(0x0477A900));
    }
    namespace EncoderExceptionFallbackBuffer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EncoderExceptionFallbackBuffer__Class** type_info = (::app::EncoderExceptionFallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x04725E90));
    }
    namespace EncoderFallbackException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EncoderFallbackException__Class** type_info = (::app::EncoderFallbackException__Class**)(modloader::win::memory::resolve_rva(0x0478EFD8));
    }
    namespace EncoderReplacementFallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EncoderReplacementFallback__Class** type_info = (::app::EncoderReplacementFallback__Class**)(modloader::win::memory::resolve_rva(0x04774708));
    }
    namespace EncoderReplacementFallbackBuffer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EncoderReplacementFallbackBuffer__Class** type_info = (::app::EncoderReplacementFallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x04715508));
    }
    namespace Encoding_DefaultEncoder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Encoding_DefaultEncoder__Class** type_info = (::app::Encoding_DefaultEncoder__Class**)(modloader::win::memory::resolve_rva(0x04735CB0));
    }
    namespace Encoding_DefaultDecoder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Encoding_DefaultDecoder__Class** type_info = (::app::Encoding_DefaultDecoder__Class**)(modloader::win::memory::resolve_rva(0x04794B08));
    }
    namespace Encoding_EncodingCharBuffer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Encoding_EncodingCharBuffer__Class** type_info = (::app::Encoding_EncodingCharBuffer__Class**)(modloader::win::memory::resolve_rva(0x047501B8));
    }
    namespace Encoding_EncodingByteBuffer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Encoding_EncodingByteBuffer__Class** type_info = (::app::Encoding_EncodingByteBuffer__Class**)(modloader::win::memory::resolve_rva(0x04744D08));
    }
    namespace Latin1Encoding {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Latin1Encoding__Class** type_info = (::app::Latin1Encoding__Class**)(modloader::win::memory::resolve_rva(0x0474E8C8));
    }
    namespace EncodingProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EncodingProvider__Class** type_info = (::app::EncodingProvider__Class**)(modloader::win::memory::resolve_rva(0x047237B0));
    }
    namespace UnicodeEncoding {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnicodeEncoding__Class** type_info = (::app::UnicodeEncoding__Class**)(modloader::win::memory::resolve_rva(0x0475D3C0));
    }
    namespace UnicodeEncoding_Decoder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnicodeEncoding_Decoder__Class** type_info = (::app::UnicodeEncoding_Decoder__Class**)(modloader::win::memory::resolve_rva(0x047801C8));
    }
    namespace UTF32Encoding {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UTF32Encoding__Class** type_info = (::app::UTF32Encoding__Class**)(modloader::win::memory::resolve_rva(0x04788858));
    }
    namespace UTF32Encoding_UTF32Decoder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UTF32Encoding_UTF32Decoder__Class** type_info = (::app::UTF32Encoding_UTF32Decoder__Class**)(modloader::win::memory::resolve_rva(0x0478C198));
    }
    namespace UTF7Encoding {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UTF7Encoding__Class** type_info = (::app::UTF7Encoding__Class**)(modloader::win::memory::resolve_rva(0x047560F0));
    }
    namespace SByte__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SByte__Array__Class** type_info = (::app::SByte__Array__Class**)(modloader::win::memory::resolve_rva(0x047705B0));
    }
    namespace UTF7Encoding_Decoder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UTF7Encoding_Decoder__Class** type_info = (::app::UTF7Encoding_Decoder__Class**)(modloader::win::memory::resolve_rva(0x0478D600));
    }
    namespace UTF7Encoding_Encoder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UTF7Encoding_Encoder__Class** type_info = (::app::UTF7Encoding_Encoder__Class**)(modloader::win::memory::resolve_rva(0x04742058));
    }
    namespace UTF7Encoding_DecoderUTF7Fallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UTF7Encoding_DecoderUTF7Fallback__Class** type_info = (::app::UTF7Encoding_DecoderUTF7Fallback__Class**)(modloader::win::memory::resolve_rva(0x0475BF08));
    }
    namespace UTF7Encoding_DecoderUTF7FallbackBuffer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UTF7Encoding_DecoderUTF7FallbackBuffer__Class** type_info = (::app::UTF7Encoding_DecoderUTF7FallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x047811D8));
    }
    namespace UTF8Encoding {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UTF8Encoding__Class** type_info = (::app::UTF8Encoding__Class**)(modloader::win::memory::resolve_rva(0x04735160));
    }
    namespace UTF8Encoding_UTF8Encoder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UTF8Encoding_UTF8Encoder__Class** type_info = (::app::UTF8Encoding_UTF8Encoder__Class**)(modloader::win::memory::resolve_rva(0x047048A8));
    }
    namespace UTF8Encoding_UTF8Decoder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UTF8Encoding_UTF8Decoder__Class** type_info = (::app::UTF8Encoding_UTF8Decoder__Class**)(modloader::win::memory::resolve_rva(0x04754F50));
    }
    namespace FastResourceComparer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FastResourceComparer__Class** type_info = (::app::FastResourceComparer__Class**)(modloader::win::memory::resolve_rva(0x04724C50));
    }
    namespace FileBasedResourceGroveler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FileBasedResourceGroveler__Class** type_info = (::app::FileBasedResourceGroveler__Class**)(modloader::win::memory::resolve_rva(0x04760478));
    }
    namespace ResourceManager_ResourceManagerMediator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ResourceManager_ResourceManagerMediator__Class** type_info = (::app::ResourceManager_ResourceManagerMediator__Class**)(modloader::win::memory::resolve_rva(0x04750420));
    }
    namespace ResourceManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ResourceManager__Class** type_info = (::app::ResourceManager__Class**)(modloader::win::memory::resolve_rva(0x047439E8));
    }
    namespace ResourceSet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ResourceSet__Class** type_info = (::app::ResourceSet__Class**)(modloader::win::memory::resolve_rva(0x047684C8));
    }
    namespace IResourceReader {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IResourceReader__Class** type_info = (::app::IResourceReader__Class**)(modloader::win::memory::resolve_rva(0x04794D98));
    }
    namespace ResourceManager_CultureNameResourceSetPair {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ResourceManager_CultureNameResourceSetPair__Class** type_info = (::app::ResourceManager_CultureNameResourceSetPair__Class**)(modloader::win::memory::resolve_rva(0x04771A00));
    }
    namespace IResourceGroveler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IResourceGroveler__Class** type_info = (::app::IResourceGroveler__Class**)(modloader::win::memory::resolve_rva(0x0470FD10));
    }
    namespace ManifestBasedResourceGroveler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ManifestBasedResourceGroveler__Class** type_info = (::app::ManifestBasedResourceGroveler__Class**)(modloader::win::memory::resolve_rva(0x0470A400));
    }
    namespace MissingManifestResourceException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MissingManifestResourceException__Class** type_info = (::app::MissingManifestResourceException__Class**)(modloader::win::memory::resolve_rva(0x04730338));
    }
    namespace MissingSatelliteAssemblyException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MissingSatelliteAssemblyException__Class** type_info = (::app::MissingSatelliteAssemblyException__Class**)(modloader::win::memory::resolve_rva(0x04716828));
    }
    namespace ResourceFallbackManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ResourceFallbackManager__Class** type_info = (::app::ResourceFallbackManager__Class**)(modloader::win::memory::resolve_rva(0x047624A0));
    }
    namespace ResourceFallbackManager_GetEnumerator_d_5 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ResourceFallbackManager_GetEnumerator_d_5__Class** type_info = (::app::ResourceFallbackManager_GetEnumerator_d_5__Class**)(modloader::win::memory::resolve_rva(0x04701A50));
    }
    namespace ResourceTypeCode__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ResourceTypeCode__Enum__Class** type_info = (::app::ResourceTypeCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x047345F8));
    }
    namespace ResourceReader {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ResourceReader__Class** type_info = (::app::ResourceReader__Class**)(modloader::win::memory::resolve_rva(0x047240A0));
    }
    namespace BinaryReader {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryReader__Class** type_info = (::app::BinaryReader__Class**)(modloader::win::memory::resolve_rva(0x0476A6C8));
    }
    namespace BinaryFormatter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryFormatter__Class** type_info = (::app::BinaryFormatter__Class**)(modloader::win::memory::resolve_rva(0x0477A2D0));
    }
    namespace ISurrogateSelector {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ISurrogateSelector__Class** type_info = (::app::ISurrogateSelector__Class**)(modloader::win::memory::resolve_rva(0x0472E058));
    }
    namespace DefaultSerializationBinder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultSerializationBinder__Class** type_info = (::app::DefaultSerializationBinder__Class**)(modloader::win::memory::resolve_rva(0x04780E60));
    }
    namespace TypeInformation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TypeInformation__Class** type_info = (::app::TypeInformation__Class**)(modloader::win::memory::resolve_rva(0x047404F8));
    }
    namespace ResourceReader_ResourceEnumerator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ResourceReader_ResourceEnumerator__Class** type_info = (::app::ResourceReader_ResourceEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04799800));
    }
    namespace DictionaryEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DictionaryEntry__Class** type_info = (::app::DictionaryEntry__Class**)(modloader::win::memory::resolve_rva(0x04728BA0));
    }
    namespace RuntimeResourceSet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeResourceSet__Class** type_info = (::app::RuntimeResourceSet__Class**)(modloader::win::memory::resolve_rva(0x04764260));
    }
    namespace SatelliteContractVersionAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SatelliteContractVersionAttribute__Class** type_info = (::app::SatelliteContractVersionAttribute__Class**)(modloader::win::memory::resolve_rva(0x0476DE48));
    }
    namespace AmbiguousMatchException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AmbiguousMatchException__Class** type_info = (::app::AmbiguousMatchException__Class**)(modloader::win::memory::resolve_rva(0x0473F350));
    }
} // namespace app::classes::types
