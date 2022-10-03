#include <Il2CppModLoader/app/types/ASCIIEncoding.h>
#include <Il2CppModLoader/app/types/AppDomain.h>
#include <Il2CppModLoader/app/types/AppDomainSetup.h>
#include <Il2CppModLoader/app/types/AssemblyLoadEventArgs.h>
#include <Il2CppModLoader/app/types/AssemblyLoadEventHandler.h>
#include <Il2CppModLoader/app/types/CADArgHolder.h>
#include <Il2CppModLoader/app/types/CADMethodCallMessage.h>
#include <Il2CppModLoader/app/types/CADMethodReturnMessage.h>
#include <Il2CppModLoader/app/types/ClientActivatedIdentity.h>
#include <Il2CppModLoader/app/types/ClientIdentity.h>
#include <Il2CppModLoader/app/types/CodePageDataItem.h>
#include <Il2CppModLoader/app/types/Console_InternalCancelHandler.h>
#include <Il2CppModLoader/app/types/Console_WindowsConsole_WindowsCancelHandler.h>
#include <Il2CppModLoader/app/types/Context.h>
#include <Il2CppModLoader/app/types/ContextCallbackObject.h>
#include <Il2CppModLoader/app/types/CultureAwareComparer.h>
#include <Il2CppModLoader/app/types/CustomAttributeData.h>
#include <Il2CppModLoader/app/types/CustomAttributeData_LazyCAttrData.h>
#include <Il2CppModLoader/app/types/DecoderFallback.h>
#include <Il2CppModLoader/app/types/DecoderNLS.h>
#include <Il2CppModLoader/app/types/DelegateSerializationHolder_DelegateEntry.h>
#include <Il2CppModLoader/app/types/DynamicPropertyCollection.h>
#include <Il2CppModLoader/app/types/EncoderFallback.h>
#include <Il2CppModLoader/app/types/EncoderNLS.h>
#include <Il2CppModLoader/app/types/Encoding.h>
#include <Il2CppModLoader/app/types/GCHandle.h>
#include <Il2CppModLoader/app/types/IContextProperty__Array.h>
#include <Il2CppModLoader/app/types/Identity.h>
#include <Il2CppModLoader/app/types/IndexOutOfRangeException.h>
#include <Il2CppModLoader/app/types/InsufficientExecutionStackException.h>
#include <Il2CppModLoader/app/types/InternalDecoderBestFitFallback.h>
#include <Il2CppModLoader/app/types/InternalDecoderBestFitFallbackBuffer.h>
#include <Il2CppModLoader/app/types/InternalEncoderBestFitFallback.h>
#include <Il2CppModLoader/app/types/InternalEncoderBestFitFallbackBuffer.h>
#include <Il2CppModLoader/app/types/InvalidCastException.h>
#include <Il2CppModLoader/app/types/InvalidOperationException.h>
#include <Il2CppModLoader/app/types/InvalidProgramException.h>
#include <Il2CppModLoader/app/types/InvalidTimeZoneException.h>
#include <Il2CppModLoader/app/types/Lease.h>
#include <Il2CppModLoader/app/types/LeaseState__Enum.h>
#include <Il2CppModLoader/app/types/Lease_RenewalDelegate.h>
#include <Il2CppModLoader/app/types/MethodAccessException.h>
#include <Il2CppModLoader/app/types/MidpointRounding__Enum.h>
#include <Il2CppModLoader/app/types/Missing.h>
#include <Il2CppModLoader/app/types/MissingFieldException.h>
#include <Il2CppModLoader/app/types/MissingMemberException.h>
#include <Il2CppModLoader/app/types/MissingMethodException.h>
#include <Il2CppModLoader/app/types/MonoCustomAttrs_AttributeInfo.h>
#include <Il2CppModLoader/app/types/MulticastNotSupportedException.h>
#include <Il2CppModLoader/app/types/NonSerializedAttribute.h>
#include <Il2CppModLoader/app/types/NotImplementedException.h>
#include <Il2CppModLoader/app/types/NotSupportedException.h>
#include <Il2CppModLoader/app/types/NullConsoleDriver.h>
#include <Il2CppModLoader/app/types/NullReferenceException.h>
#include <Il2CppModLoader/app/types/NumberFormatter.h>
#include <Il2CppModLoader/app/types/Number_NumberBuffer.h>
#include <Il2CppModLoader/app/types/ObjectDisposedException.h>
#include <Il2CppModLoader/app/types/OperatingSystem.h>
#include <Il2CppModLoader/app/types/OperationCanceledException.h>
#include <Il2CppModLoader/app/types/OrdinalComparer.h>
#include <Il2CppModLoader/app/types/OutOfMemoryException.h>
#include <Il2CppModLoader/app/types/OverflowException.h>
#include <Il2CppModLoader/app/types/ParamsArray.h>
#include <Il2CppModLoader/app/types/PlatformID__Enum.h>
#include <Il2CppModLoader/app/types/PlatformNotSupportedException.h>
#include <Il2CppModLoader/app/types/Queue.h>
#include <Il2CppModLoader/app/types/Random.h>
#include <Il2CppModLoader/app/types/RankException.h>
#include <Il2CppModLoader/app/types/ReflectionOnlyType.h>
#include <Il2CppModLoader/app/types/ResolveEventArgs.h>
#include <Il2CppModLoader/app/types/ResolveEventHandler.h>
#include <Il2CppModLoader/app/types/RuntimeAssembly.h>
#include <Il2CppModLoader/app/types/RuntimeConstructorInfo__Array.h>
#include <Il2CppModLoader/app/types/RuntimeEventInfo__Array.h>
#include <Il2CppModLoader/app/types/RuntimeFieldInfo__Array.h>
#include <Il2CppModLoader/app/types/RuntimeMethodInfo__Array.h>
#include <Il2CppModLoader/app/types/RuntimePropertyInfo__Array.h>
#include <Il2CppModLoader/app/types/RuntimeType__Array.h>
#include <Il2CppModLoader/app/types/SerializableAttribute.h>
#include <Il2CppModLoader/app/types/ServerIdentity.h>
#include <Il2CppModLoader/app/types/SharedStatics.h>
#include <Il2CppModLoader/app/types/StackOverflowException.h>
#include <Il2CppModLoader/app/types/StreamWriter.h>
#include <Il2CppModLoader/app/types/StringComparer.h>
#include <Il2CppModLoader/app/types/StringSplitOptions__Enum.h>
#include <Il2CppModLoader/app/types/TextWriter.h>
#include <Il2CppModLoader/app/types/TimeType.h>
#include <Il2CppModLoader/app/types/TimeZoneInfo.h>
#include <Il2CppModLoader/app/types/TimeZoneInfo_AdjustmentRule.h>
#include <Il2CppModLoader/app/types/TimeZoneInfo_AdjustmentRule__Array.h>
#include <Il2CppModLoader/app/types/TimeZoneInfo_TransitionTime.h>
#include <Il2CppModLoader/app/types/TimeZoneInfo_c.h>
#include <Il2CppModLoader/app/types/TimeZoneNotFoundException.h>
#include <Il2CppModLoader/app/types/TimeoutException.h>
#include <Il2CppModLoader/app/types/Tokenizer_StringMaker.h>
#include <Il2CppModLoader/app/types/TypeInitializationException.h>
#include <Il2CppModLoader/app/types/UIntPtr.h>
#include <Il2CppModLoader/app/types/UnauthorizedAccessException.h>
#include <Il2CppModLoader/app/types/UnhandledExceptionEventHandler.h>
#include <Il2CppModLoader/app/types/WeakReference.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IndexOutOfRangeException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IndexOutOfRangeException__Class** type_info = (::app::IndexOutOfRangeException__Class**)(modloader::win::memory::resolve_rva(0x0477D428));
    }
    namespace InsufficientExecutionStackException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InsufficientExecutionStackException__Class** type_info = (::app::InsufficientExecutionStackException__Class**)(modloader::win::memory::resolve_rva(0x04756868));
    }
    namespace InvalidCastException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InvalidCastException__Class** type_info = (::app::InvalidCastException__Class**)(modloader::win::memory::resolve_rva(0x0478C848));
    }
    namespace InvalidOperationException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InvalidOperationException__Class** type_info = (::app::InvalidOperationException__Class**)(modloader::win::memory::resolve_rva(0x04707278));
    }
    namespace InvalidProgramException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InvalidProgramException__Class** type_info = (::app::InvalidProgramException__Class**)(modloader::win::memory::resolve_rva(0x04787088));
    }
    namespace InvalidTimeZoneException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InvalidTimeZoneException__Class** type_info = (::app::InvalidTimeZoneException__Class**)(modloader::win::memory::resolve_rva(0x04760518));
    }
    namespace MidpointRounding__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MidpointRounding__Enum__Class** type_info = (::app::MidpointRounding__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476C780));
    }
    namespace MethodAccessException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MethodAccessException__Class** type_info = (::app::MethodAccessException__Class**)(modloader::win::memory::resolve_rva(0x04796358));
    }
    namespace MissingMemberException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MissingMemberException__Class** type_info = (::app::MissingMemberException__Class**)(modloader::win::memory::resolve_rva(0x04713258));
    }
    namespace MissingFieldException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MissingFieldException__Class** type_info = (::app::MissingFieldException__Class**)(modloader::win::memory::resolve_rva(0x0476BEB8));
    }
    namespace MissingMethodException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MissingMethodException__Class** type_info = (::app::MissingMethodException__Class**)(modloader::win::memory::resolve_rva(0x0475E250));
    }
    namespace MulticastNotSupportedException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MulticastNotSupportedException__Class** type_info = (::app::MulticastNotSupportedException__Class**)(modloader::win::memory::resolve_rva(0x04750AA0));
    }
    namespace NonSerializedAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NonSerializedAttribute__Class** type_info = (::app::NonSerializedAttribute__Class**)(modloader::win::memory::resolve_rva(0x0472CDF8));
    }
    namespace NotImplementedException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotImplementedException__Class** type_info = (::app::NotImplementedException__Class**)(modloader::win::memory::resolve_rva(0x0471CEF8));
    }
    namespace NotSupportedException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NotSupportedException__Class** type_info = (::app::NotSupportedException__Class**)(modloader::win::memory::resolve_rva(0x047603B0));
    }
    namespace NullReferenceException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NullReferenceException__Class** type_info = (::app::NullReferenceException__Class**)(modloader::win::memory::resolve_rva(0x04757C20));
    }
    namespace Number_NumberBuffer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Number_NumberBuffer__Class** type_info = (::app::Number_NumberBuffer__Class**)(modloader::win::memory::resolve_rva(0x04746EA8));
    }
    namespace ObjectDisposedException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectDisposedException__Class** type_info = (::app::ObjectDisposedException__Class**)(modloader::win::memory::resolve_rva(0x047110A0));
    }
    namespace OperationCanceledException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OperationCanceledException__Class** type_info = (::app::OperationCanceledException__Class**)(modloader::win::memory::resolve_rva(0x0475A7B0));
    }
    namespace OutOfMemoryException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OutOfMemoryException__Class** type_info = (::app::OutOfMemoryException__Class**)(modloader::win::memory::resolve_rva(0x0470EB60));
    }
    namespace OverflowException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OverflowException__Class** type_info = (::app::OverflowException__Class**)(modloader::win::memory::resolve_rva(0x0477B5D8));
    }
    namespace ParamsArray {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ParamsArray__Class** type_info = (::app::ParamsArray__Class**)(modloader::win::memory::resolve_rva(0x04711CE0));
    }
    namespace PlatformNotSupportedException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlatformNotSupportedException__Class** type_info = (::app::PlatformNotSupportedException__Class**)(modloader::win::memory::resolve_rva(0x04773080));
    }
    namespace Random {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Random__Class** type_info = (::app::Random__Class**)(modloader::win::memory::resolve_rva(0x0476B6C0));
    }
    namespace RankException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RankException__Class** type_info = (::app::RankException__Class**)(modloader::win::memory::resolve_rva(0x0475C458));
    }
    namespace RuntimeType__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeType__Array__Class** type_info = (::app::RuntimeType__Array__Class**)(modloader::win::memory::resolve_rva(0x0472C900));
    }
    namespace RuntimeAssembly {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeAssembly__Class** type_info = (::app::RuntimeAssembly__Class**)(modloader::win::memory::resolve_rva(0x047261A8));
    }
    namespace RuntimeMethodInfo__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeMethodInfo__Array__Class** type_info = (::app::RuntimeMethodInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x047238D0));
    }
    namespace RuntimeConstructorInfo__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeConstructorInfo__Array__Class** type_info = (::app::RuntimeConstructorInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04786640));
    }
    namespace RuntimePropertyInfo__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimePropertyInfo__Array__Class** type_info = (::app::RuntimePropertyInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0476EE20));
    }
    namespace RuntimeFieldInfo__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeFieldInfo__Array__Class** type_info = (::app::RuntimeFieldInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x047432B0));
    }
    namespace RuntimeEventInfo__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeEventInfo__Array__Class** type_info = (::app::RuntimeEventInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0476B2A0));
    }
    namespace ReflectionOnlyType {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionOnlyType__Class** type_info = (::app::ReflectionOnlyType__Class**)(modloader::win::memory::resolve_rva(0x0475C0D8));
    }
    namespace SerializableAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SerializableAttribute__Class** type_info = (::app::SerializableAttribute__Class**)(modloader::win::memory::resolve_rva(0x0470DB30));
    }
    namespace SharedStatics {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SharedStatics__Class** type_info = (::app::SharedStatics__Class**)(modloader::win::memory::resolve_rva(0x04783B00));
    }
    namespace Tokenizer_StringMaker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Tokenizer_StringMaker__Class** type_info = (::app::Tokenizer_StringMaker__Class**)(modloader::win::memory::resolve_rva(0x04717100));
    }
    namespace StackOverflowException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StackOverflowException__Class** type_info = (::app::StackOverflowException__Class**)(modloader::win::memory::resolve_rva(0x0476EBB8));
    }
    namespace StringSplitOptions__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StringSplitOptions__Enum__Class** type_info = (::app::StringSplitOptions__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471BCE0));
    }
    namespace Encoding {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Encoding__Class** type_info = (::app::Encoding__Class**)(modloader::win::memory::resolve_rva(0x047831A8));
    }
    namespace CodePageDataItem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CodePageDataItem__Class** type_info = (::app::CodePageDataItem__Class**)(modloader::win::memory::resolve_rva(0x04783C40));
    }
    namespace EncoderFallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EncoderFallback__Class** type_info = (::app::EncoderFallback__Class**)(modloader::win::memory::resolve_rva(0x0475AB60));
    }
    namespace InternalEncoderBestFitFallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InternalEncoderBestFitFallback__Class** type_info = (::app::InternalEncoderBestFitFallback__Class**)(modloader::win::memory::resolve_rva(0x04707218));
    }
    namespace EncoderNLS {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EncoderNLS__Class** type_info = (::app::EncoderNLS__Class**)(modloader::win::memory::resolve_rva(0x0470F378));
    }
    namespace InternalEncoderBestFitFallbackBuffer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InternalEncoderBestFitFallbackBuffer__Class** type_info = (::app::InternalEncoderBestFitFallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x0477AAC8));
    }
    namespace DecoderFallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DecoderFallback__Class** type_info = (::app::DecoderFallback__Class**)(modloader::win::memory::resolve_rva(0x0478DDA8));
    }
    namespace InternalDecoderBestFitFallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InternalDecoderBestFitFallback__Class** type_info = (::app::InternalDecoderBestFitFallback__Class**)(modloader::win::memory::resolve_rva(0x04735EB8));
    }
    namespace InternalDecoderBestFitFallbackBuffer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InternalDecoderBestFitFallbackBuffer__Class** type_info = (::app::InternalDecoderBestFitFallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x04733330));
    }
    namespace ASCIIEncoding {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ASCIIEncoding__Class** type_info = (::app::ASCIIEncoding__Class**)(modloader::win::memory::resolve_rva(0x04767970));
    }
    namespace DecoderNLS {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DecoderNLS__Class** type_info = (::app::DecoderNLS__Class**)(modloader::win::memory::resolve_rva(0x04783B08));
    }
    namespace StringComparer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StringComparer__Class** type_info = (::app::StringComparer__Class**)(modloader::win::memory::resolve_rva(0x04735610));
    }
    namespace CultureAwareComparer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CultureAwareComparer__Class** type_info = (::app::CultureAwareComparer__Class**)(modloader::win::memory::resolve_rva(0x047193D0));
    }
    namespace OrdinalComparer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OrdinalComparer__Class** type_info = (::app::OrdinalComparer__Class**)(modloader::win::memory::resolve_rva(0x04732678));
    }
    namespace TimeoutException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimeoutException__Class** type_info = (::app::TimeoutException__Class**)(modloader::win::memory::resolve_rva(0x0479A1F0));
    }
    namespace TimeZoneInfo_TransitionTime {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimeZoneInfo_TransitionTime__Class** type_info = (::app::TimeZoneInfo_TransitionTime__Class**)(modloader::win::memory::resolve_rva(0x04781958));
    }
    namespace TimeZoneInfo_AdjustmentRule {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimeZoneInfo_AdjustmentRule__Class** type_info = (::app::TimeZoneInfo_AdjustmentRule__Class**)(modloader::win::memory::resolve_rva(0x04783EE0));
    }
    namespace TimeZoneInfo_AdjustmentRule__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimeZoneInfo_AdjustmentRule__Array__Class** type_info = (::app::TimeZoneInfo_AdjustmentRule__Array__Class**)(modloader::win::memory::resolve_rva(0x04754508));
    }
    namespace TimeZoneInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimeZoneInfo__Class** type_info = (::app::TimeZoneInfo__Class**)(modloader::win::memory::resolve_rva(0x04741EC0));
    }
    namespace TimeType {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimeType__Class** type_info = (::app::TimeType__Class**)(modloader::win::memory::resolve_rva(0x04748690));
    }
    namespace TimeZoneInfo_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimeZoneInfo_c__Class** type_info = (::app::TimeZoneInfo_c__Class**)(modloader::win::memory::resolve_rva(0x04728590));
    }
    namespace TimeZoneNotFoundException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimeZoneNotFoundException__Class** type_info = (::app::TimeZoneNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x0472C3D0));
    }
    namespace TypeInitializationException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TypeInitializationException__Class** type_info = (::app::TypeInitializationException__Class**)(modloader::win::memory::resolve_rva(0x047847B0));
    }
    namespace UnauthorizedAccessException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnauthorizedAccessException__Class** type_info = (::app::UnauthorizedAccessException__Class**)(modloader::win::memory::resolve_rva(0x04733DE8));
    }
    namespace UnhandledExceptionEventHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnhandledExceptionEventHandler__Class** type_info = (::app::UnhandledExceptionEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0473D400));
    }
    namespace Missing {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Missing__Class** type_info = (::app::Missing__Class**)(modloader::win::memory::resolve_rva(0x04708798));
    }
    namespace AppDomain {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AppDomain__Class** type_info = (::app::AppDomain__Class**)(modloader::win::memory::resolve_rva(0x047410D8));
    }
    namespace AssemblyLoadEventHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AssemblyLoadEventHandler__Class** type_info = (::app::AssemblyLoadEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04787280));
    }
    namespace AssemblyLoadEventArgs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AssemblyLoadEventArgs__Class** type_info = (::app::AssemblyLoadEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04778C90));
    }
    namespace ResolveEventHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ResolveEventHandler__Class** type_info = (::app::ResolveEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0478F5B8));
    }
    namespace ResolveEventArgs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ResolveEventArgs__Class** type_info = (::app::ResolveEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04785A60));
    }
    namespace AppDomainSetup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AppDomainSetup__Class** type_info = (::app::AppDomainSetup__Class**)(modloader::win::memory::resolve_rva(0x04795D88));
    }
    namespace UIntPtr {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UIntPtr__Class** type_info = (::app::UIntPtr__Class**)(modloader::win::memory::resolve_rva(0x0475C1C8));
    }
    namespace Context {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Context__Class** type_info = (::app::Context__Class**)(modloader::win::memory::resolve_rva(0x047499D0));
    }
    namespace IContextProperty__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IContextProperty__Array__Class** type_info = (::app::IContextProperty__Array__Class**)(modloader::win::memory::resolve_rva(0x04728E98));
    }
    namespace DynamicPropertyCollection {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicPropertyCollection__Class** type_info = (::app::DynamicPropertyCollection__Class**)(modloader::win::memory::resolve_rva(0x04766B28));
    }
    namespace ContextCallbackObject {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ContextCallbackObject__Class** type_info = (::app::ContextCallbackObject__Class**)(modloader::win::memory::resolve_rva(0x0471BDE0));
    }
    namespace CADMethodCallMessage {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CADMethodCallMessage__Class** type_info = (::app::CADMethodCallMessage__Class**)(modloader::win::memory::resolve_rva(0x0475F090));
    }
    namespace CADArgHolder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CADArgHolder__Class** type_info = (::app::CADArgHolder__Class**)(modloader::win::memory::resolve_rva(0x0472BD98));
    }
    namespace CADMethodReturnMessage {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CADMethodReturnMessage__Class** type_info = (::app::CADMethodReturnMessage__Class**)(modloader::win::memory::resolve_rva(0x04709B20));
    }
    namespace PlatformID__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlatformID__Enum__Class** type_info = (::app::PlatformID__Enum__Class**)(modloader::win::memory::resolve_rva(0x04734B68));
    }
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
    namespace ClientActivatedIdentity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ClientActivatedIdentity__Class** type_info = (::app::ClientActivatedIdentity__Class**)(modloader::win::memory::resolve_rva(0x04707DF8));
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
} // namespace app::classes::types
