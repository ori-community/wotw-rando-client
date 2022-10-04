#include <Il2CppModLoader/app/types/Aes.h>
#include <Il2CppModLoader/app/types/AsymmetricSignatureDeformatter.h>
#include <Il2CppModLoader/app/types/AsymmetricSignatureFormatter.h>
#include <Il2CppModLoader/app/types/AsyncTaskMethodBuilder.h>
#include <Il2CppModLoader/app/types/AwaitTaskContinuation.h>
#include <Il2CppModLoader/app/types/AwaitTaskContinuation_c.h>
#include <Il2CppModLoader/app/types/Claim.h>
#include <Il2CppModLoader/app/types/ClaimsIdentity.h>
#include <Il2CppModLoader/app/types/ClaimsIdentity_get_Claims_d_51.h>
#include <Il2CppModLoader/app/types/ClaimsPrincipal.h>
#include <Il2CppModLoader/app/types/CodeAccessPermission.h>
#include <Il2CppModLoader/app/types/CompletionActionInvoker.h>
#include <Il2CppModLoader/app/types/ContinuationTaskFromTask.h>
#include <Il2CppModLoader/app/types/CryptoStream.h>
#include <Il2CppModLoader/app/types/CryptographicException.h>
#include <Il2CppModLoader/app/types/CryptographicUnexpectedOperationException.h>
#include <Il2CppModLoader/app/types/CspKeyContainerInfo.h>
#include <Il2CppModLoader/app/types/DES.h>
#include <Il2CppModLoader/app/types/DESCryptoServiceProvider.h>
#include <Il2CppModLoader/app/types/DSASignatureDeformatter.h>
#include <Il2CppModLoader/app/types/DSASignatureFormatter.h>
#include <Il2CppModLoader/app/types/Evidence_EvidenceEnumerator.h>
#include <Il2CppModLoader/app/types/GenericIdentity.h>
#include <Il2CppModLoader/app/types/GenericPrincipal.h>
#include <Il2CppModLoader/app/types/HMAC.h>
#include <Il2CppModLoader/app/types/HMACMD5.h>
#include <Il2CppModLoader/app/types/HMACRIPEMD160.h>
#include <Il2CppModLoader/app/types/HMACSHA1.h>
#include <Il2CppModLoader/app/types/HMACSHA256.h>
#include <Il2CppModLoader/app/types/HMACSHA384.h>
#include <Il2CppModLoader/app/types/HMACSHA512.h>
#include <Il2CppModLoader/app/types/IIdentity.h>
#include <Il2CppModLoader/app/types/IPermission.h>
#include <Il2CppModLoader/app/types/Int16__Array.h>
#include <Il2CppModLoader/app/types/KeyedHashAlgorithm.h>
#include <Il2CppModLoader/app/types/MACTripleDES.h>
#include <Il2CppModLoader/app/types/MD5.h>
#include <Il2CppModLoader/app/types/MD5CryptoServiceProvider.h>
#include <Il2CppModLoader/app/types/NamedPermissionSet.h>
#include <Il2CppModLoader/app/types/PKCS1MaskGenerationMethod.h>
#include <Il2CppModLoader/app/types/Parser.h>
#include <Il2CppModLoader/app/types/PermissionSet.h>
#include <Il2CppModLoader/app/types/PermissionState__Enum.h>
#include <Il2CppModLoader/app/types/RC2.h>
#include <Il2CppModLoader/app/types/RC2CryptoServiceProvider.h>
#include <Il2CppModLoader/app/types/RIPEMD160.h>
#include <Il2CppModLoader/app/types/RIPEMD160Managed.h>
#include <Il2CppModLoader/app/types/RSACryptoServiceProvider.h>
#include <Il2CppModLoader/app/types/RSAOAEPKeyExchangeDeformatter.h>
#include <Il2CppModLoader/app/types/RSAOAEPKeyExchangeFormatter.h>
#include <Il2CppModLoader/app/types/RSAPKCS1KeyExchangeDeformatter.h>
#include <Il2CppModLoader/app/types/RSAPKCS1KeyExchangeFormatter.h>
#include <Il2CppModLoader/app/types/RSAPKCS1SHA1SignatureDescription.h>
#include <Il2CppModLoader/app/types/RSAPKCS1SHA256SignatureDescription.h>
#include <Il2CppModLoader/app/types/ReflectionPermission.h>
#include <Il2CppModLoader/app/types/ReflectionPermissionFlag__Enum.h>
#include <Il2CppModLoader/app/types/Rijndael.h>
#include <Il2CppModLoader/app/types/RijndaelManaged.h>
#include <Il2CppModLoader/app/types/RijndaelManagedTransform.h>
#include <Il2CppModLoader/app/types/SHA1.h>
#include <Il2CppModLoader/app/types/SHA1Managed.h>
#include <Il2CppModLoader/app/types/SHA256.h>
#include <Il2CppModLoader/app/types/SHA256Managed.h>
#include <Il2CppModLoader/app/types/SHA384.h>
#include <Il2CppModLoader/app/types/SHA384Managed.h>
#include <Il2CppModLoader/app/types/SHA512.h>
#include <Il2CppModLoader/app/types/SHA512Managed.h>
#include <Il2CppModLoader/app/types/SecurityAction__Enum.h>
#include <Il2CppModLoader/app/types/SecurityDocument.h>
#include <Il2CppModLoader/app/types/SecurityElement_SecurityAttribute.h>
#include <Il2CppModLoader/app/types/SecurityException.h>
#include <Il2CppModLoader/app/types/SecurityPermission.h>
#include <Il2CppModLoader/app/types/SecurityPermissionFlag__Enum.h>
#include <Il2CppModLoader/app/types/SynchronizationContextAwaitTaskContinuation.h>
#include <Il2CppModLoader/app/types/SynchronizationContextAwaitTaskContinuation_c.h>
#include <Il2CppModLoader/app/types/TailStream.h>
#include <Il2CppModLoader/app/types/TaskCanceledException.h>
#include <Il2CppModLoader/app/types/TaskFactory_CompleteOnInvokePromise.h>
#include <Il2CppModLoader/app/types/TaskSchedulerAwaitTaskContinuation.h>
#include <Il2CppModLoader/app/types/TaskSchedulerAwaitTaskContinuation_c.h>
#include <Il2CppModLoader/app/types/TaskSchedulerException.h>
#include <Il2CppModLoader/app/types/TaskToApm_TaskWrapperAsyncResult.h>
#include <Il2CppModLoader/app/types/TaskToApm_c_DisplayClass3_0.h>
#include <Il2CppModLoader/app/types/Task_DelayPromise.h>
#include <Il2CppModLoader/app/types/Task_WhenAllPromise.h>
#include <Il2CppModLoader/app/types/Task_c.h>
#include <Il2CppModLoader/app/types/Task_c_DisplayClass178_0.h>
#include <Il2CppModLoader/app/types/ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7.h>
#include <Il2CppModLoader/app/types/Tokenizer.h>
#include <Il2CppModLoader/app/types/TokenizerShortBlock.h>
#include <Il2CppModLoader/app/types/TokenizerStream.h>
#include <Il2CppModLoader/app/types/TokenizerStringBlock.h>
#include <Il2CppModLoader/app/types/Tokenizer_ITokenReader.h>
#include <Il2CppModLoader/app/types/Tokenizer_StreamTokenReader.h>
#include <Il2CppModLoader/app/types/TripleDES.h>
#include <Il2CppModLoader/app/types/TripleDESCryptoServiceProvider.h>
#include <Il2CppModLoader/app/types/WindowsAccountType__Enum.h>
#include <Il2CppModLoader/app/types/WindowsIdentity.h>
#include <Il2CppModLoader/app/types/WindowsImpersonationContext.h>
#include <Il2CppModLoader/app/types/XmlSyntaxException.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Task_DelayPromise {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Task_DelayPromise__Class** type_info = (::app::Task_DelayPromise__Class**)(modloader::win::memory::resolve_rva(0x0473D810));
    }
    namespace Task_WhenAllPromise {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Task_WhenAllPromise__Class** type_info = (::app::Task_WhenAllPromise__Class**)(modloader::win::memory::resolve_rva(0x0477AE60));
    }
    namespace Task_c_DisplayClass178_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Task_c_DisplayClass178_0__Class** type_info = (::app::Task_c_DisplayClass178_0__Class**)(modloader::win::memory::resolve_rva(0x0470D0C0));
    }
    namespace Task_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Task_c__Class** type_info = (::app::Task_c__Class**)(modloader::win::memory::resolve_rva(0x0474C8E8));
    }
    namespace CompletionActionInvoker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CompletionActionInvoker__Class** type_info = (::app::CompletionActionInvoker__Class**)(modloader::win::memory::resolve_rva(0x04700ED8));
    }
    namespace TaskCanceledException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TaskCanceledException__Class** type_info = (::app::TaskCanceledException__Class**)(modloader::win::memory::resolve_rva(0x0477C078));
    }
    namespace ContinuationTaskFromTask {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ContinuationTaskFromTask__Class** type_info = (::app::ContinuationTaskFromTask__Class**)(modloader::win::memory::resolve_rva(0x0473BD00));
    }
    namespace AwaitTaskContinuation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AwaitTaskContinuation__Class** type_info = (::app::AwaitTaskContinuation__Class**)(modloader::win::memory::resolve_rva(0x0471CBE8));
    }
    namespace SynchronizationContextAwaitTaskContinuation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SynchronizationContextAwaitTaskContinuation__Class** type_info = (::app::SynchronizationContextAwaitTaskContinuation__Class**)(modloader::win::memory::resolve_rva(0x04749AF8));
    }
    namespace SynchronizationContextAwaitTaskContinuation_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SynchronizationContextAwaitTaskContinuation_c__Class** type_info = (::app::SynchronizationContextAwaitTaskContinuation_c__Class**)(modloader::win::memory::resolve_rva(0x0472BE50));
    }
    namespace TaskSchedulerAwaitTaskContinuation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TaskSchedulerAwaitTaskContinuation__Class** type_info = (::app::TaskSchedulerAwaitTaskContinuation__Class**)(modloader::win::memory::resolve_rva(0x0471C708));
    }
    namespace TaskSchedulerAwaitTaskContinuation_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TaskSchedulerAwaitTaskContinuation_c__Class** type_info = (::app::TaskSchedulerAwaitTaskContinuation_c__Class**)(modloader::win::memory::resolve_rva(0x04730718));
    }
    namespace AwaitTaskContinuation_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AwaitTaskContinuation_c__Class** type_info = (::app::AwaitTaskContinuation_c__Class**)(modloader::win::memory::resolve_rva(0x04747F70));
    }
    namespace TaskFactory_CompleteOnInvokePromise {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TaskFactory_CompleteOnInvokePromise__Class** type_info = (::app::TaskFactory_CompleteOnInvokePromise__Class**)(modloader::win::memory::resolve_rva(0x04750978));
    }
    namespace TaskSchedulerException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TaskSchedulerException__Class** type_info = (::app::TaskSchedulerException__Class**)(modloader::win::memory::resolve_rva(0x0473E228));
    }
    namespace TaskToApm_TaskWrapperAsyncResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TaskToApm_TaskWrapperAsyncResult__Class** type_info = (::app::TaskToApm_TaskWrapperAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04733CD8));
    }
    namespace TaskToApm_c_DisplayClass3_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TaskToApm_c_DisplayClass3_0__Class** type_info = (::app::TaskToApm_c_DisplayClass3_0__Class**)(modloader::win::memory::resolve_rva(0x047036E0));
    }
    namespace ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7__Class** type_info = (::app::ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7__Class**)(modloader::win::memory::resolve_rva(0x0478F250));
    }
    namespace SecurityDocument {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SecurityDocument__Class** type_info = (::app::SecurityDocument__Class**)(modloader::win::memory::resolve_rva(0x047636E0));
    }
    namespace CodeAccessPermission {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CodeAccessPermission__Class** type_info = (::app::CodeAccessPermission__Class**)(modloader::win::memory::resolve_rva(0x0477E740));
    }
    namespace IPermission {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IPermission__Class** type_info = (::app::IPermission__Class**)(modloader::win::memory::resolve_rva(0x04707CF0));
    }
    namespace ReflectionPermissionFlag__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionPermissionFlag__Enum__Class** type_info = (::app::ReflectionPermissionFlag__Enum__Class**)(modloader::win::memory::resolve_rva(0x04795150));
    }
    namespace ReflectionPermission {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionPermission__Class** type_info = (::app::ReflectionPermission__Class**)(modloader::win::memory::resolve_rva(0x047211B0));
    }
    namespace PermissionState__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PermissionState__Enum__Class** type_info = (::app::PermissionState__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473AA30));
    }
    namespace PermissionSet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PermissionSet__Class** type_info = (::app::PermissionSet__Class**)(modloader::win::memory::resolve_rva(0x04728F90));
    }
    namespace NamedPermissionSet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NamedPermissionSet__Class** type_info = (::app::NamedPermissionSet__Class**)(modloader::win::memory::resolve_rva(0x04775848));
    }
    namespace SecurityElement_SecurityAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SecurityElement_SecurityAttribute__Class** type_info = (::app::SecurityElement_SecurityAttribute__Class**)(modloader::win::memory::resolve_rva(0x04719E38));
    }
    namespace SecurityException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SecurityException__Class** type_info = (::app::SecurityException__Class**)(modloader::win::memory::resolve_rva(0x0477B4B0));
    }
    namespace XmlSyntaxException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlSyntaxException__Class** type_info = (::app::XmlSyntaxException__Class**)(modloader::win::memory::resolve_rva(0x04770078));
    }
    namespace Evidence_EvidenceEnumerator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Evidence_EvidenceEnumerator__Class** type_info = (::app::Evidence_EvidenceEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04711BB8));
    }
    namespace SecurityAction__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SecurityAction__Enum__Class** type_info = (::app::SecurityAction__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473BAC8));
    }
    namespace SecurityPermissionFlag__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SecurityPermissionFlag__Enum__Class** type_info = (::app::SecurityPermissionFlag__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474CF48));
    }
    namespace SecurityPermission {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SecurityPermission__Class** type_info = (::app::SecurityPermission__Class**)(modloader::win::memory::resolve_rva(0x0476F818));
    }
    namespace Parser {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Parser__Class** type_info = (::app::Parser__Class**)(modloader::win::memory::resolve_rva(0x0472B450));
    }
    namespace Tokenizer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Tokenizer__Class** type_info = (::app::Tokenizer__Class**)(modloader::win::memory::resolve_rva(0x04791D00));
    }
    namespace Tokenizer_ITokenReader {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Tokenizer_ITokenReader__Class** type_info = (::app::Tokenizer_ITokenReader__Class**)(modloader::win::memory::resolve_rva(0x0478A5D0));
    }
    namespace TokenizerStream {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TokenizerStream__Class** type_info = (::app::TokenizerStream__Class**)(modloader::win::memory::resolve_rva(0x0476F168));
    }
    namespace TokenizerShortBlock {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TokenizerShortBlock__Class** type_info = (::app::TokenizerShortBlock__Class**)(modloader::win::memory::resolve_rva(0x0478F5B0));
    }
    namespace Int16__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Int16__Array__Class** type_info = (::app::Int16__Array__Class**)(modloader::win::memory::resolve_rva(0x04767BB0));
    }
    namespace TokenizerStringBlock {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TokenizerStringBlock__Class** type_info = (::app::TokenizerStringBlock__Class**)(modloader::win::memory::resolve_rva(0x0472B038));
    }
    namespace Tokenizer_StreamTokenReader {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Tokenizer_StreamTokenReader__Class** type_info = (::app::Tokenizer_StreamTokenReader__Class**)(modloader::win::memory::resolve_rva(0x04737EB0));
    }
    namespace ClaimsIdentity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ClaimsIdentity__Class** type_info = (::app::ClaimsIdentity__Class**)(modloader::win::memory::resolve_rva(0x04795B18));
    }
    namespace GenericIdentity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GenericIdentity__Class** type_info = (::app::GenericIdentity__Class**)(modloader::win::memory::resolve_rva(0x0476DA70));
    }
    namespace Claim {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Claim__Class** type_info = (::app::Claim__Class**)(modloader::win::memory::resolve_rva(0x0476D598));
    }
    namespace ClaimsPrincipal {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ClaimsPrincipal__Class** type_info = (::app::ClaimsPrincipal__Class**)(modloader::win::memory::resolve_rva(0x04723C48));
    }
    namespace GenericPrincipal {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GenericPrincipal__Class** type_info = (::app::GenericPrincipal__Class**)(modloader::win::memory::resolve_rva(0x04783ED8));
    }
    namespace IIdentity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IIdentity__Class** type_info = (::app::IIdentity__Class**)(modloader::win::memory::resolve_rva(0x04796238));
    }
    namespace WindowsAccountType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WindowsAccountType__Enum__Class** type_info = (::app::WindowsAccountType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04715890));
    }
    namespace WindowsIdentity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WindowsIdentity__Class** type_info = (::app::WindowsIdentity__Class**)(modloader::win::memory::resolve_rva(0x0473DDE0));
    }
    namespace WindowsImpersonationContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WindowsImpersonationContext__Class** type_info = (::app::WindowsImpersonationContext__Class**)(modloader::win::memory::resolve_rva(0x04712C88));
    }
    namespace ClaimsIdentity_get_Claims_d_51 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ClaimsIdentity_get_Claims_d_51__Class** type_info = (::app::ClaimsIdentity_get_Claims_d_51__Class**)(modloader::win::memory::resolve_rva(0x0475EDA0));
    }
    namespace Aes {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Aes__Class** type_info = (::app::Aes__Class**)(modloader::win::memory::resolve_rva(0x047688D0));
    }
    namespace Rijndael {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Rijndael__Class** type_info = (::app::Rijndael__Class**)(modloader::win::memory::resolve_rva(0x0476B6B0));
    }
    namespace RijndaelManaged {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RijndaelManaged__Class** type_info = (::app::RijndaelManaged__Class**)(modloader::win::memory::resolve_rva(0x0474B930));
    }
    namespace RSAOAEPKeyExchangeDeformatter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RSAOAEPKeyExchangeDeformatter__Class** type_info = (::app::RSAOAEPKeyExchangeDeformatter__Class**)(modloader::win::memory::resolve_rva(0x04716840));
    }
    namespace RSAOAEPKeyExchangeFormatter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RSAOAEPKeyExchangeFormatter__Class** type_info = (::app::RSAOAEPKeyExchangeFormatter__Class**)(modloader::win::memory::resolve_rva(0x0471F030));
    }
    namespace AsymmetricSignatureDeformatter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AsymmetricSignatureDeformatter__Class** type_info = (::app::AsymmetricSignatureDeformatter__Class**)(modloader::win::memory::resolve_rva(0x04760B90));
    }
    namespace DSASignatureDeformatter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DSASignatureDeformatter__Class** type_info = (::app::DSASignatureDeformatter__Class**)(modloader::win::memory::resolve_rva(0x047482A0));
    }
    namespace AsymmetricSignatureFormatter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AsymmetricSignatureFormatter__Class** type_info = (::app::AsymmetricSignatureFormatter__Class**)(modloader::win::memory::resolve_rva(0x04748DB0));
    }
    namespace DSASignatureFormatter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DSASignatureFormatter__Class** type_info = (::app::DSASignatureFormatter__Class**)(modloader::win::memory::resolve_rva(0x04770C68));
    }
    namespace CryptographicException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CryptographicException__Class** type_info = (::app::CryptographicException__Class**)(modloader::win::memory::resolve_rva(0x0472B6A8));
    }
    namespace CryptographicUnexpectedOperationException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CryptographicUnexpectedOperationException__Class** type_info = (::app::CryptographicUnexpectedOperationException__Class**)(modloader::win::memory::resolve_rva(0x0474B250));
    }
    namespace CryptoStream {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CryptoStream__Class** type_info = (::app::CryptoStream__Class**)(modloader::win::memory::resolve_rva(0x04729740));
    }
    namespace AsyncTaskMethodBuilder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AsyncTaskMethodBuilder__Class** type_info = (::app::AsyncTaskMethodBuilder__Class**)(modloader::win::memory::resolve_rva(0x04719530));
    }
    namespace DES {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DES__Class** type_info = (::app::DES__Class**)(modloader::win::memory::resolve_rva(0x04763BD0));
    }
    namespace DESCryptoServiceProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DESCryptoServiceProvider__Class** type_info = (::app::DESCryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x04754278));
    }
    namespace KeyedHashAlgorithm {
        IL2CPP_MODLOADER_DLLEXPORT ::app::KeyedHashAlgorithm__Class** type_info = (::app::KeyedHashAlgorithm__Class**)(modloader::win::memory::resolve_rva(0x0477FBD8));
    }
    namespace HMAC {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HMAC__Class** type_info = (::app::HMAC__Class**)(modloader::win::memory::resolve_rva(0x04704078));
    }
    namespace HMACMD5 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HMACMD5__Class** type_info = (::app::HMACMD5__Class**)(modloader::win::memory::resolve_rva(0x04736F20));
    }
    namespace HMACRIPEMD160 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HMACRIPEMD160__Class** type_info = (::app::HMACRIPEMD160__Class**)(modloader::win::memory::resolve_rva(0x0472D548));
    }
    namespace HMACSHA1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HMACSHA1__Class** type_info = (::app::HMACSHA1__Class**)(modloader::win::memory::resolve_rva(0x04785CB0));
    }
    namespace HMACSHA256 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HMACSHA256__Class** type_info = (::app::HMACSHA256__Class**)(modloader::win::memory::resolve_rva(0x0473E358));
    }
    namespace HMACSHA384 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HMACSHA384__Class** type_info = (::app::HMACSHA384__Class**)(modloader::win::memory::resolve_rva(0x0474E618));
    }
    namespace HMACSHA512 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HMACSHA512__Class** type_info = (::app::HMACSHA512__Class**)(modloader::win::memory::resolve_rva(0x047186D0));
    }
    namespace MACTripleDES {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MACTripleDES__Class** type_info = (::app::MACTripleDES__Class**)(modloader::win::memory::resolve_rva(0x04742B90));
    }
    namespace TailStream {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TailStream__Class** type_info = (::app::TailStream__Class**)(modloader::win::memory::resolve_rva(0x04725DF8));
    }
    namespace TripleDES {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TripleDES__Class** type_info = (::app::TripleDES__Class**)(modloader::win::memory::resolve_rva(0x0473FA58));
    }
    namespace TripleDESCryptoServiceProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TripleDESCryptoServiceProvider__Class** type_info = (::app::TripleDESCryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x0471C448));
    }
    namespace PKCS1MaskGenerationMethod {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PKCS1MaskGenerationMethod__Class** type_info = (::app::PKCS1MaskGenerationMethod__Class**)(modloader::win::memory::resolve_rva(0x0477B6F0));
    }
    namespace MD5 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MD5__Class** type_info = (::app::MD5__Class**)(modloader::win::memory::resolve_rva(0x0477F418));
    }
    namespace MD5CryptoServiceProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MD5CryptoServiceProvider__Class** type_info = (::app::MD5CryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x0474AD20));
    }
    namespace RC2 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RC2__Class** type_info = (::app::RC2__Class**)(modloader::win::memory::resolve_rva(0x04705B70));
    }
    namespace RC2CryptoServiceProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RC2CryptoServiceProvider__Class** type_info = (::app::RC2CryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x04762F78));
    }
    namespace RijndaelManagedTransform {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RijndaelManagedTransform__Class** type_info = (::app::RijndaelManagedTransform__Class**)(modloader::win::memory::resolve_rva(0x047994F8));
    }
    namespace RIPEMD160 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RIPEMD160__Class** type_info = (::app::RIPEMD160__Class**)(modloader::win::memory::resolve_rva(0x04737580));
    }
    namespace RIPEMD160Managed {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RIPEMD160Managed__Class** type_info = (::app::RIPEMD160Managed__Class**)(modloader::win::memory::resolve_rva(0x04772CA8));
    }
    namespace RSACryptoServiceProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RSACryptoServiceProvider__Class** type_info = (::app::RSACryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x047547C0));
    }
    namespace CspKeyContainerInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CspKeyContainerInfo__Class** type_info = (::app::CspKeyContainerInfo__Class**)(modloader::win::memory::resolve_rva(0x04760BD8));
    }
    namespace RSAPKCS1KeyExchangeDeformatter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RSAPKCS1KeyExchangeDeformatter__Class** type_info = (::app::RSAPKCS1KeyExchangeDeformatter__Class**)(modloader::win::memory::resolve_rva(0x0472EBA0));
    }
    namespace RSAPKCS1KeyExchangeFormatter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RSAPKCS1KeyExchangeFormatter__Class** type_info = (::app::RSAPKCS1KeyExchangeFormatter__Class**)(modloader::win::memory::resolve_rva(0x04753238));
    }
    namespace SHA1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SHA1__Class** type_info = (::app::SHA1__Class**)(modloader::win::memory::resolve_rva(0x04733180));
    }
    namespace SHA1Managed {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SHA1Managed__Class** type_info = (::app::SHA1Managed__Class**)(modloader::win::memory::resolve_rva(0x04788D48));
    }
    namespace SHA256 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SHA256__Class** type_info = (::app::SHA256__Class**)(modloader::win::memory::resolve_rva(0x04749F10));
    }
    namespace SHA256Managed {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SHA256Managed__Class** type_info = (::app::SHA256Managed__Class**)(modloader::win::memory::resolve_rva(0x04704188));
    }
    namespace SHA384 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SHA384__Class** type_info = (::app::SHA384__Class**)(modloader::win::memory::resolve_rva(0x04757830));
    }
    namespace SHA384Managed {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SHA384Managed__Class** type_info = (::app::SHA384Managed__Class**)(modloader::win::memory::resolve_rva(0x04785378));
    }
    namespace SHA512 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SHA512__Class** type_info = (::app::SHA512__Class**)(modloader::win::memory::resolve_rva(0x04763180));
    }
    namespace SHA512Managed {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SHA512Managed__Class** type_info = (::app::SHA512Managed__Class**)(modloader::win::memory::resolve_rva(0x0472E240));
    }
    namespace RSAPKCS1SHA1SignatureDescription {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RSAPKCS1SHA1SignatureDescription__Class** type_info = (::app::RSAPKCS1SHA1SignatureDescription__Class**)(modloader::win::memory::resolve_rva(0x0470E438));
    }
    namespace RSAPKCS1SHA256SignatureDescription {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RSAPKCS1SHA256SignatureDescription__Class** type_info = (::app::RSAPKCS1SHA256SignatureDescription__Class**)(modloader::win::memory::resolve_rva(0x04775BA8));
    }
} // namespace app::classes::types
