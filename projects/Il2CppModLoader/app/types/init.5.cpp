#include <Il2CppModLoader/app/types/AmbiguousMatchException.h>
#include <Il2CppModLoader/app/types/ArraySpec.h>
#include <Il2CppModLoader/app/types/Assembly_UnmanagedMemoryStreamForModule.h>
#include <Il2CppModLoader/app/types/BinaryFormatter.h>
#include <Il2CppModLoader/app/types/BinaryReader.h>
#include <Il2CppModLoader/app/types/BinaryWriter.h>
#include <Il2CppModLoader/app/types/ByteMatcher.h>
#include <Il2CppModLoader/app/types/CStreamWriter.h>
#include <Il2CppModLoader/app/types/CustomAttributeFormatException.h>
#include <Il2CppModLoader/app/types/CustomAttributeNamedArgument.h>
#include <Il2CppModLoader/app/types/CustomAttributeTypedArgument.h>
#include <Il2CppModLoader/app/types/DecoderExceptionFallback.h>
#include <Il2CppModLoader/app/types/DecoderExceptionFallbackBuffer.h>
#include <Il2CppModLoader/app/types/DecoderFallbackException.h>
#include <Il2CppModLoader/app/types/DecoderReplacementFallback.h>
#include <Il2CppModLoader/app/types/DecoderReplacementFallbackBuffer.h>
#include <Il2CppModLoader/app/types/DefaultMemberAttribute.h>
#include <Il2CppModLoader/app/types/DefaultSerializationBinder.h>
#include <Il2CppModLoader/app/types/DictionaryEntry.h>
#include <Il2CppModLoader/app/types/DirectoryInfo.h>
#include <Il2CppModLoader/app/types/DirectoryNotFoundException.h>
#include <Il2CppModLoader/app/types/Directory_SearchData.h>
#include <Il2CppModLoader/app/types/DriveNotFoundException.h>
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
#include <Il2CppModLoader/app/types/EndOfStreamException.h>
#include <Il2CppModLoader/app/types/FastResourceComparer.h>
#include <Il2CppModLoader/app/types/FileBasedResourceGroveler.h>
#include <Il2CppModLoader/app/types/FileInfo.h>
#include <Il2CppModLoader/app/types/FileLoadException.h>
#include <Il2CppModLoader/app/types/FileNotFoundException.h>
#include <Il2CppModLoader/app/types/FileStream.h>
#include <Il2CppModLoader/app/types/InvalidFilterCriteriaException.h>
#include <Il2CppModLoader/app/types/Label.h>
#include <Il2CppModLoader/app/types/Latin1Encoding.h>
#include <Il2CppModLoader/app/types/ManifestBasedResourceGroveler.h>
#include <Il2CppModLoader/app/types/MemoryStream.h>
#include <Il2CppModLoader/app/types/MissingManifestResourceException.h>
#include <Il2CppModLoader/app/types/MissingSatelliteAssemblyException.h>
#include <Il2CppModLoader/app/types/MonoParameterInfo.h>
#include <Il2CppModLoader/app/types/NumberFormatter_CustomInfo.h>
#include <Il2CppModLoader/app/types/OpCode.h>
#include <Il2CppModLoader/app/types/ParameterizedStrings_FormatParam__Array.h>
#include <Il2CppModLoader/app/types/ParameterizedStrings_LowLevelStack.h>
#include <Il2CppModLoader/app/types/PathTooLongException.h>
#include <Il2CppModLoader/app/types/PinnedBufferMemoryStream.h>
#include <Il2CppModLoader/app/types/PointerSpec.h>
#include <Il2CppModLoader/app/types/Pointer_1.h>
#include <Il2CppModLoader/app/types/ReflectionTypeLoadException.h>
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
#include <Il2CppModLoader/app/types/SearchOption__Enum.h>
#include <Il2CppModLoader/app/types/SearchResult.h>
#include <Il2CppModLoader/app/types/StreamReader.h>
#include <Il2CppModLoader/app/types/Stream_NullStream.h>
#include <Il2CppModLoader/app/types/Stream_SynchronousAsyncResult.h>
#include <Il2CppModLoader/app/types/StringResultHandler.h>
#include <Il2CppModLoader/app/types/TargetException.h>
#include <Il2CppModLoader/app/types/TargetInvocationException.h>
#include <Il2CppModLoader/app/types/TargetParameterCountException.h>
#include <Il2CppModLoader/app/types/TermInfoDriver.h>
#include <Il2CppModLoader/app/types/TermInfoReader.h>
#include <Il2CppModLoader/app/types/TermInfoStrings__Enum.h>
#include <Il2CppModLoader/app/types/Thread.h>
#include <Il2CppModLoader/app/types/ThreadState__Enum.h>
#include <Il2CppModLoader/app/types/TimeZone.h>
#include <Il2CppModLoader/app/types/TypeIdentifiers_Display.h>
#include <Il2CppModLoader/app/types/TypeInformation.h>
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
#include <Il2CppModLoader/app/types/WindowsConsoleDriver.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
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
    namespace TypeIdentifiers_Display {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TypeIdentifiers_Display__Class** type_info = (::app::TypeIdentifiers_Display__Class**)(modloader::win::memory::resolve_rva(0x0475FD78));
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
    namespace ResourceManager_CultureNameResourceSetPair {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ResourceManager_CultureNameResourceSetPair__Class** type_info = (::app::ResourceManager_CultureNameResourceSetPair__Class**)(modloader::win::memory::resolve_rva(0x04771A00));
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
    namespace DefaultMemberAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultMemberAttribute__Class** type_info = (::app::DefaultMemberAttribute__Class**)(modloader::win::memory::resolve_rva(0x0473C608));
    }
    namespace InvalidFilterCriteriaException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InvalidFilterCriteriaException__Class** type_info = (::app::InvalidFilterCriteriaException__Class**)(modloader::win::memory::resolve_rva(0x04750080));
    }
    namespace Pointer_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Pointer_1__Class** type_info = (::app::Pointer_1__Class**)(modloader::win::memory::resolve_rva(0x04749140));
    }
    namespace ReflectionTypeLoadException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionTypeLoadException__Class** type_info = (::app::ReflectionTypeLoadException__Class**)(modloader::win::memory::resolve_rva(0x047851D8));
    }
    namespace TargetException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TargetException__Class** type_info = (::app::TargetException__Class**)(modloader::win::memory::resolve_rva(0x04758D10));
    }
    namespace TargetInvocationException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TargetInvocationException__Class** type_info = (::app::TargetInvocationException__Class**)(modloader::win::memory::resolve_rva(0x04735E28));
    }
    namespace TargetParameterCountException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TargetParameterCountException__Class** type_info = (::app::TargetParameterCountException__Class**)(modloader::win::memory::resolve_rva(0x04715BB8));
    }
    namespace Assembly_UnmanagedMemoryStreamForModule {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Assembly_UnmanagedMemoryStreamForModule__Class** type_info = (::app::Assembly_UnmanagedMemoryStreamForModule__Class**)(modloader::win::memory::resolve_rva(0x04709C98));
    }
    namespace CustomAttributeFormatException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CustomAttributeFormatException__Class** type_info = (::app::CustomAttributeFormatException__Class**)(modloader::win::memory::resolve_rva(0x04787068));
    }
    namespace CustomAttributeTypedArgument {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CustomAttributeTypedArgument__Class** type_info = (::app::CustomAttributeTypedArgument__Class**)(modloader::win::memory::resolve_rva(0x04766388));
    }
    namespace CustomAttributeNamedArgument {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CustomAttributeNamedArgument__Class** type_info = (::app::CustomAttributeNamedArgument__Class**)(modloader::win::memory::resolve_rva(0x0478BC40));
    }
    namespace MonoParameterInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MonoParameterInfo__Class** type_info = (::app::MonoParameterInfo__Class**)(modloader::win::memory::resolve_rva(0x04784B10));
    }
    namespace Label {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Label__Class** type_info = (::app::Label__Class**)(modloader::win::memory::resolve_rva(0x0477F998));
    }
    namespace OpCode {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OpCode__Class** type_info = (::app::OpCode__Class**)(modloader::win::memory::resolve_rva(0x047764D8));
    }
    namespace BinaryWriter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryWriter__Class** type_info = (::app::BinaryWriter__Class**)(modloader::win::memory::resolve_rva(0x047357D0));
    }
    namespace SearchOption__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SearchOption__Enum__Class** type_info = (::app::SearchOption__Enum__Class**)(modloader::win::memory::resolve_rva(0x04713CF0));
    }
    namespace DirectoryInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DirectoryInfo__Class** type_info = (::app::DirectoryInfo__Class**)(modloader::win::memory::resolve_rva(0x04719C88));
    }
    namespace FileInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FileInfo__Class** type_info = (::app::FileInfo__Class**)(modloader::win::memory::resolve_rva(0x04795B60));
    }
    namespace Directory_SearchData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Directory_SearchData__Class** type_info = (::app::Directory_SearchData__Class**)(modloader::win::memory::resolve_rva(0x0477AE98));
    }
    namespace DirectoryNotFoundException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DirectoryNotFoundException__Class** type_info = (::app::DirectoryNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x04773F98));
    }
    namespace DriveNotFoundException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DriveNotFoundException__Class** type_info = (::app::DriveNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x0478BB88));
    }
    namespace EndOfStreamException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EndOfStreamException__Class** type_info = (::app::EndOfStreamException__Class**)(modloader::win::memory::resolve_rva(0x04731350));
    }
    namespace FileStream {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FileStream__Class** type_info = (::app::FileStream__Class**)(modloader::win::memory::resolve_rva(0x0476EBC0));
    }
    namespace FileLoadException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FileLoadException__Class** type_info = (::app::FileLoadException__Class**)(modloader::win::memory::resolve_rva(0x04718730));
    }
    namespace FileNotFoundException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FileNotFoundException__Class** type_info = (::app::FileNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x04713D80));
    }
    namespace StringResultHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StringResultHandler__Class** type_info = (::app::StringResultHandler__Class**)(modloader::win::memory::resolve_rva(0x04751DE0));
    }
    namespace SearchResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SearchResult__Class** type_info = (::app::SearchResult__Class**)(modloader::win::memory::resolve_rva(0x0474A8E8));
    }
    namespace MemoryStream {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MemoryStream__Class** type_info = (::app::MemoryStream__Class**)(modloader::win::memory::resolve_rva(0x0474A648));
    }
    namespace PathTooLongException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PathTooLongException__Class** type_info = (::app::PathTooLongException__Class**)(modloader::win::memory::resolve_rva(0x04764DE8));
    }
    namespace PinnedBufferMemoryStream {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PinnedBufferMemoryStream__Class** type_info = (::app::PinnedBufferMemoryStream__Class**)(modloader::win::memory::resolve_rva(0x0475F920));
    }
    namespace Stream_NullStream {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Stream_NullStream__Class** type_info = (::app::Stream_NullStream__Class**)(modloader::win::memory::resolve_rva(0x04705120));
    }
    namespace Stream_SynchronousAsyncResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Stream_SynchronousAsyncResult__Class** type_info = (::app::Stream_SynchronousAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04788540));
    }
} // namespace app::classes::types
