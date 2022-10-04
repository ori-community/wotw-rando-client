#include <Il2CppModLoader/app/types/AcceptTradeRequest.h>
#include <Il2CppModLoader/app/types/AcceptTradeResponse.h>
#include <Il2CppModLoader/app/types/AddFriendRequest.h>
#include <Il2CppModLoader/app/types/AddFriendResult.h>
#include <Il2CppModLoader/app/types/AddGenericIDRequest.h>
#include <Il2CppModLoader/app/types/AddGenericIDResult.h>
#include <Il2CppModLoader/app/types/AddOrUpdateContactEmailRequest.h>
#include <Il2CppModLoader/app/types/AddOrUpdateContactEmailResult.h>
#include <Il2CppModLoader/app/types/AddReplay.h>
#include <Il2CppModLoader/app/types/AkAuxSendArray.h>
#include <Il2CppModLoader/app/types/CallbackState_c.h>
#include <Il2CppModLoader/app/types/ClientInformationProvider.h>
#include <Il2CppModLoader/app/types/CompactBinaryProtocolWriter.h>
#include <Il2CppModLoader/app/types/CompoundState_c.h>
#include <Il2CppModLoader/app/types/CsEvent.h>
#include <Il2CppModLoader/app/types/Data.h>
#include <Il2CppModLoader/app/types/Datadog.h>
#include <Il2CppModLoader/app/types/DatadogMetricsEvent.h>
#include <Il2CppModLoader/app/types/DatadogMetricsEvent_Series.h>
#include <Il2CppModLoader/app/types/DatadogMetricsEvent_Series__Array.h>
#include <Il2CppModLoader/app/types/DatadogRegularEvent.h>
#include <Il2CppModLoader/app/types/Datadog_ThresholdItem.h>
#include <Il2CppModLoader/app/types/Datadog_c_DisplayClass11_0.h>
#include <Il2CppModLoader/app/types/ExceptionEntry.h>
#include <Il2CppModLoader/app/types/ExceptionProcessor.h>
#include <Il2CppModLoader/app/types/ExceptionProcessor_c.h>
#include <Il2CppModLoader/app/types/FuncCondition.h>
#include <Il2CppModLoader/app/types/GenericRegularEvent.h>
#include <Il2CppModLoader/app/types/GetEntityTokenRequest.h>
#include <Il2CppModLoader/app/types/GetEntityTokenResponse.h>
#include <Il2CppModLoader/app/types/GetReplay.h>
#include <Il2CppModLoader/app/types/GetReplays.h>
#include <Il2CppModLoader/app/types/IBuildInformationProvider.h>
#include <Il2CppModLoader/app/types/IDataReader.h>
#include <Il2CppModLoader/app/types/IDataWriter.h>
#include <Il2CppModLoader/app/types/IMessageBox.h>
#include <Il2CppModLoader/app/types/IRecorderShot.h>
#include <Il2CppModLoader/app/types/IRequest.h>
#include <Il2CppModLoader/app/types/IRequestCallback.h>
#include <Il2CppModLoader/app/types/IServerCommunicator.h>
#include <Il2CppModLoader/app/types/ISoundListener.h>
#include <Il2CppModLoader/app/types/JSONDataReader.h>
#include <Il2CppModLoader/app/types/Json_Parser.h>
#include <Il2CppModLoader/app/types/Json_Serializer.h>
#include <Il2CppModLoader/app/types/LogCallbackHandler.h>
#include <Il2CppModLoader/app/types/LogCallbackHandler_LogEntry.h>
#include <Il2CppModLoader/app/types/LowPassFilterSettings.h>
#include <Il2CppModLoader/app/types/MainThreadDelegate.h>
#include <Il2CppModLoader/app/types/MainThreadDispatcherPlaymode.h>
#include <Il2CppModLoader/app/types/Method__Enum.h>
#include <Il2CppModLoader/app/types/MoonJSONDataReader.h>
#include <Il2CppModLoader/app/types/MoonTelemetry.h>
#include <Il2CppModLoader/app/types/MoonTelemetryCharacterBaseEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetryCharacterBaseEvent_AbilityData__Array.h>
#include <Il2CppModLoader/app/types/MoonTelemetryCharacterBaseEvent_SpiritShardData__Array.h>
#include <Il2CppModLoader/app/types/MoonTelemetryClientBaseEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetryCommunicator.h>
#include <Il2CppModLoader/app/types/MoonTelemetryCommunicator_c.h>
#include <Il2CppModLoader/app/types/MoonTelemetryDamageTransactionEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetryDamageTransactionEvent_DamageEntity__Enum.h>
#include <Il2CppModLoader/app/types/MoonTelemetryKustoWebConfig.h>
#include <Il2CppModLoader/app/types/MoonTelemetrySendRequest.h>
#include <Il2CppModLoader/app/types/MoonTelemetryWebConfig.h>
#include <Il2CppModLoader/app/types/MoonTelemetry_EndPointSettings.h>
#include <Il2CppModLoader/app/types/MoonTelemetry_MaelstromEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetry_SendRequestData.h>
#include <Il2CppModLoader/app/types/MoonTelemetry_SendRequestData_c_DisplayClass11_0.h>
#include <Il2CppModLoader/app/types/MoonTelemetry_c.h>
#include <Il2CppModLoader/app/types/MoonTelemetry_c_DisplayClass48_0.h>
#include <Il2CppModLoader/app/types/ParamAttribute.h>
#include <Il2CppModLoader/app/types/PlayFabAuthenticationContext.h>
#include <Il2CppModLoader/app/types/PlayFabError.h>
#include <Il2CppModLoader/app/types/PlayFabErrorCode__Enum.h>
#include <Il2CppModLoader/app/types/PlayFabRequestCommon.h>
#include <Il2CppModLoader/app/types/PlaymodeUpdateDelegate.h>
#include <Il2CppModLoader/app/types/PlaymodeUpdateDelegate_c.h>
#include <Il2CppModLoader/app/types/PrewarmParticles_PrewarmParticleSystemParticle.h>
#include <Il2CppModLoader/app/types/PrewarmParticles_PrewarmParticleSystemParticle__Array.h>
#include <Il2CppModLoader/app/types/RecorderSettings.h>
#include <Il2CppModLoader/app/types/RemoteAction_c.h>
#include <Il2CppModLoader/app/types/ReplayModel.h>
#include <Il2CppModLoader/app/types/RetriveActionStates.h>
#include <Il2CppModLoader/app/types/ServerCommunicator_c.h>
#include <Il2CppModLoader/app/types/ServerTriggeredActionData.h>
#include <Il2CppModLoader/app/types/SoundHost.h>
#include <Il2CppModLoader/app/types/SoundSize.h>
#include <Il2CppModLoader/app/types/StateConfigurator.h>
#include <Il2CppModLoader/app/types/StateMachine_c.h>
#include <Il2CppModLoader/app/types/StateMachine_c_DisplayClass31_0.h>
#include <Il2CppModLoader/app/types/State_c.h>
#include <Il2CppModLoader/app/types/SwaggerComunicator.h>
#include <Il2CppModLoader/app/types/SwaggerComunicator_c.h>
#include <Il2CppModLoader/app/types/SwaggerJSONParser.h>
#include <Il2CppModLoader/app/types/Switch_1.h>
#include <Il2CppModLoader/app/types/Trigger.h>
#include <Il2CppModLoader/app/types/Utils_4.h>
#include <Il2CppModLoader/app/types/Value.h>
#include <Il2CppModLoader/app/types/WebClientImpl.h>
#include <Il2CppModLoader/app/types/WebResponse_1.h>
#include <Il2CppModLoader/app/types/WipeReplay.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Switch_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Switch_1__Class** type_info = (::app::Switch_1__Class**)(modloader::win::memory::resolve_rva(0x0476E9F0));
    }
    namespace Trigger {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Trigger__Class** type_info = (::app::Trigger__Class**)(modloader::win::memory::resolve_rva(0x047267B8));
    }
    namespace SoundSize {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoundSize__Class** type_info = (::app::SoundSize__Class**)(modloader::win::memory::resolve_rva(0x04794EB8));
    }
    namespace LowPassFilterSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LowPassFilterSettings__Class** type_info = (::app::LowPassFilterSettings__Class**)(modloader::win::memory::resolve_rva(0x0477C418));
    }
    namespace SoundHost {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoundHost__Class** type_info = (::app::SoundHost__Class**)(modloader::win::memory::resolve_rva(0x04745270));
    }
    namespace AkAuxSendArray {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AkAuxSendArray__Class** type_info = (::app::AkAuxSendArray__Class**)(modloader::win::memory::resolve_rva(0x04733A20));
    }
    namespace ISoundListener {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ISoundListener__Class** type_info = (::app::ISoundListener__Class**)(modloader::win::memory::resolve_rva(0x047727F8));
    }
    namespace IMessageBox {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IMessageBox__Class** type_info = (::app::IMessageBox__Class**)(modloader::win::memory::resolve_rva(0x0475D6B8));
    }
    namespace StateConfigurator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StateConfigurator__Class** type_info = (::app::StateConfigurator__Class**)(modloader::win::memory::resolve_rva(0x04726060));
    }
    namespace StateMachine_c_DisplayClass31_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StateMachine_c_DisplayClass31_0__Class** type_info = (::app::StateMachine_c_DisplayClass31_0__Class**)(modloader::win::memory::resolve_rva(0x0477E960));
    }
    namespace StateMachine_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StateMachine_c__Class** type_info = (::app::StateMachine_c__Class**)(modloader::win::memory::resolve_rva(0x0471FC78));
    }
    namespace State_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::State_c__Class** type_info = (::app::State_c__Class**)(modloader::win::memory::resolve_rva(0x0472D8D8));
    }
    namespace CallbackState_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CallbackState_c__Class** type_info = (::app::CallbackState_c__Class**)(modloader::win::memory::resolve_rva(0x0471EA20));
    }
    namespace CompoundState_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CompoundState_c__Class** type_info = (::app::CompoundState_c__Class**)(modloader::win::memory::resolve_rva(0x0473EAF8));
    }
    namespace FuncCondition {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FuncCondition__Class** type_info = (::app::FuncCondition__Class**)(modloader::win::memory::resolve_rva(0x0476E630));
    }
    namespace ExceptionEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExceptionEntry__Class** type_info = (::app::ExceptionEntry__Class**)(modloader::win::memory::resolve_rva(0x04751890));
    }
    namespace ExceptionProcessor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExceptionProcessor__Class** type_info = (::app::ExceptionProcessor__Class**)(modloader::win::memory::resolve_rva(0x04780C48));
    }
    namespace ExceptionProcessor_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExceptionProcessor_c__Class** type_info = (::app::ExceptionProcessor_c__Class**)(modloader::win::memory::resolve_rva(0x04795668));
    }
    namespace LogCallbackHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LogCallbackHandler__Class** type_info = (::app::LogCallbackHandler__Class**)(modloader::win::memory::resolve_rva(0x04769C08));
    }
    namespace LogCallbackHandler_LogEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LogCallbackHandler_LogEntry__Class** type_info = (::app::LogCallbackHandler_LogEntry__Class**)(modloader::win::memory::resolve_rva(0x047831B8));
    }
    namespace PrewarmParticles_PrewarmParticleSystemParticle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PrewarmParticles_PrewarmParticleSystemParticle__Class** type_info = (::app::PrewarmParticles_PrewarmParticleSystemParticle__Class**)(modloader::win::memory::resolve_rva(0x04782330));
    }
    namespace PrewarmParticles_PrewarmParticleSystemParticle__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PrewarmParticles_PrewarmParticleSystemParticle__Array__Class** type_info = (::app::PrewarmParticles_PrewarmParticleSystemParticle__Array__Class**)(modloader::win::memory::resolve_rva(0x04745938));
    }
    namespace RecorderSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RecorderSettings__Class** type_info = (::app::RecorderSettings__Class**)(modloader::win::memory::resolve_rva(0x0475FDB8));
    }
    namespace IRecorderShot {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IRecorderShot__Class** type_info = (::app::IRecorderShot__Class**)(modloader::win::memory::resolve_rva(0x04763DB8));
    }
    namespace IBuildInformationProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IBuildInformationProvider__Class** type_info = (::app::IBuildInformationProvider__Class**)(modloader::win::memory::resolve_rva(0x0476A240));
    }
    namespace ClientInformationProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ClientInformationProvider__Class** type_info = (::app::ClientInformationProvider__Class**)(modloader::win::memory::resolve_rva(0x04713868));
    }
    namespace MoonTelemetryKustoWebConfig {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryKustoWebConfig__Class** type_info = (::app::MoonTelemetryKustoWebConfig__Class**)(modloader::win::memory::resolve_rva(0x0473E478));
    }
    namespace Datadog {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datadog__Class** type_info = (::app::Datadog__Class**)(modloader::win::memory::resolve_rva(0x04779A70));
    }
    namespace Datadog_ThresholdItem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datadog_ThresholdItem__Class** type_info = (::app::Datadog_ThresholdItem__Class**)(modloader::win::memory::resolve_rva(0x04769EB0));
    }
    namespace Datadog_c_DisplayClass11_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Datadog_c_DisplayClass11_0__Class** type_info = (::app::Datadog_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x04799F20));
    }
    namespace DatadogMetricsEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DatadogMetricsEvent__Class** type_info = (::app::DatadogMetricsEvent__Class**)(modloader::win::memory::resolve_rva(0x0476C6B8));
    }
    namespace DatadogMetricsEvent_Series {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DatadogMetricsEvent_Series__Class** type_info = (::app::DatadogMetricsEvent_Series__Class**)(modloader::win::memory::resolve_rva(0x04785738));
    }
    namespace DatadogMetricsEvent_Series__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DatadogMetricsEvent_Series__Array__Class** type_info = (::app::DatadogMetricsEvent_Series__Array__Class**)(modloader::win::memory::resolve_rva(0x0476AC28));
    }
    namespace DatadogRegularEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DatadogRegularEvent__Class** type_info = (::app::DatadogRegularEvent__Class**)(modloader::win::memory::resolve_rva(0x0474C970));
    }
    namespace GenericRegularEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GenericRegularEvent__Class** type_info = (::app::GenericRegularEvent__Class**)(modloader::win::memory::resolve_rva(0x0473E088));
    }
    namespace MoonTelemetryClientBaseEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryClientBaseEvent__Class** type_info = (::app::MoonTelemetryClientBaseEvent__Class**)(modloader::win::memory::resolve_rva(0x04721100));
    }
    namespace MoonTelemetryCharacterBaseEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryCharacterBaseEvent__Class** type_info = (::app::MoonTelemetryCharacterBaseEvent__Class**)(modloader::win::memory::resolve_rva(0x0470DC98));
    }
    namespace MoonTelemetryDamageTransactionEvent_DamageEntity__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Class** type_info = (::app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477B020));
    }
    namespace MoonTelemetryDamageTransactionEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryDamageTransactionEvent__Class** type_info = (::app::MoonTelemetryDamageTransactionEvent__Class**)(modloader::win::memory::resolve_rva(0x04731A28));
    }
    namespace MoonTelemetryCharacterBaseEvent_AbilityData__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryCharacterBaseEvent_AbilityData__Array__Class** type_info = (::app::MoonTelemetryCharacterBaseEvent_AbilityData__Array__Class**)(modloader::win::memory::resolve_rva(0x047972D0));
    }
    namespace MoonTelemetryCharacterBaseEvent_SpiritShardData__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Array__Class** type_info = (::app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Array__Class**)(modloader::win::memory::resolve_rva(0x0474EE68));
    }
    namespace MoonTelemetry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetry__Class** type_info = (::app::MoonTelemetry__Class**)(modloader::win::memory::resolve_rva(0x0473F6A8));
    }
    namespace MoonTelemetry_EndPointSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetry_EndPointSettings__Class** type_info = (::app::MoonTelemetry_EndPointSettings__Class**)(modloader::win::memory::resolve_rva(0x04770220));
    }
    namespace MoonTelemetry_MaelstromEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetry_MaelstromEvent__Class** type_info = (::app::MoonTelemetry_MaelstromEvent__Class**)(modloader::win::memory::resolve_rva(0x04756808));
    }
    namespace MoonTelemetry_SendRequestData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetry_SendRequestData__Class** type_info = (::app::MoonTelemetry_SendRequestData__Class**)(modloader::win::memory::resolve_rva(0x0476C478));
    }
    namespace Method__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Method__Enum__Class** type_info = (::app::Method__Enum__Class**)(modloader::win::memory::resolve_rva(0x04722BE0));
    }
    namespace MoonTelemetrySendRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetrySendRequest__Class** type_info = (::app::MoonTelemetrySendRequest__Class**)(modloader::win::memory::resolve_rva(0x047065E8));
    }
    namespace IRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IRequest__Class** type_info = (::app::IRequest__Class**)(modloader::win::memory::resolve_rva(0x04721A68));
    }
    namespace IDataWriter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IDataWriter__Class** type_info = (::app::IDataWriter__Class**)(modloader::win::memory::resolve_rva(0x04798908));
    }
    namespace WebResponse_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebResponse_1__Class** type_info = (::app::WebResponse_1__Class**)(modloader::win::memory::resolve_rva(0x04713D08));
    }
    namespace ServerTriggeredActionData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ServerTriggeredActionData__Class** type_info = (::app::ServerTriggeredActionData__Class**)(modloader::win::memory::resolve_rva(0x0475B4B8));
    }
    namespace IDataReader {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IDataReader__Class** type_info = (::app::IDataReader__Class**)(modloader::win::memory::resolve_rva(0x047923E0));
    }
    namespace IServerCommunicator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IServerCommunicator__Class** type_info = (::app::IServerCommunicator__Class**)(modloader::win::memory::resolve_rva(0x04738820));
    }
    namespace IRequestCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IRequestCallback__Class** type_info = (::app::IRequestCallback__Class**)(modloader::win::memory::resolve_rva(0x04798088));
    }
    namespace MoonTelemetry_SendRequestData_c_DisplayClass11_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetry_SendRequestData_c_DisplayClass11_0__Class** type_info = (::app::MoonTelemetry_SendRequestData_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x047494D8));
    }
    namespace MoonTelemetry_c_DisplayClass48_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetry_c_DisplayClass48_0__Class** type_info = (::app::MoonTelemetry_c_DisplayClass48_0__Class**)(modloader::win::memory::resolve_rva(0x047361D0));
    }
    namespace MoonTelemetry_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetry_c__Class** type_info = (::app::MoonTelemetry_c__Class**)(modloader::win::memory::resolve_rva(0x0473E508));
    }
    namespace PlaymodeUpdateDelegate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlaymodeUpdateDelegate__Class** type_info = (::app::PlaymodeUpdateDelegate__Class**)(modloader::win::memory::resolve_rva(0x0472CE48));
    }
    namespace PlaymodeUpdateDelegate_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlaymodeUpdateDelegate_c__Class** type_info = (::app::PlaymodeUpdateDelegate_c__Class**)(modloader::win::memory::resolve_rva(0x0471CA20));
    }
    namespace RemoteAction_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RemoteAction_c__Class** type_info = (::app::RemoteAction_c__Class**)(modloader::win::memory::resolve_rva(0x047392D0));
    }
    namespace RetriveActionStates {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RetriveActionStates__Class** type_info = (::app::RetriveActionStates__Class**)(modloader::win::memory::resolve_rva(0x047800D8));
    }
    namespace SwaggerJSONParser {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SwaggerJSONParser__Class** type_info = (::app::SwaggerJSONParser__Class**)(modloader::win::memory::resolve_rva(0x0476E4F0));
    }
    namespace SwaggerComunicator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SwaggerComunicator__Class** type_info = (::app::SwaggerComunicator__Class**)(modloader::win::memory::resolve_rva(0x0470D820));
    }
    namespace SwaggerComunicator_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SwaggerComunicator_c__Class** type_info = (::app::SwaggerComunicator_c__Class**)(modloader::win::memory::resolve_rva(0x0472BCE8));
    }
    namespace ReplayModel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReplayModel__Class** type_info = (::app::ReplayModel__Class**)(modloader::win::memory::resolve_rva(0x04759828));
    }
    namespace AddReplay {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AddReplay__Class** type_info = (::app::AddReplay__Class**)(modloader::win::memory::resolve_rva(0x04741628));
    }
    namespace GetReplay {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetReplay__Class** type_info = (::app::GetReplay__Class**)(modloader::win::memory::resolve_rva(0x04708C38));
    }
    namespace GetReplays {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetReplays__Class** type_info = (::app::GetReplays__Class**)(modloader::win::memory::resolve_rva(0x0476A6D0));
    }
    namespace WipeReplay {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WipeReplay__Class** type_info = (::app::WipeReplay__Class**)(modloader::win::memory::resolve_rva(0x0474A148));
    }
    namespace MoonTelemetryWebConfig {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryWebConfig__Class** type_info = (::app::MoonTelemetryWebConfig__Class**)(modloader::win::memory::resolve_rva(0x047843D8));
    }
    namespace WebClientImpl {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebClientImpl__Class** type_info = (::app::WebClientImpl__Class**)(modloader::win::memory::resolve_rva(0x04782BB8));
    }
    namespace JSONDataReader {
        IL2CPP_MODLOADER_DLLEXPORT ::app::JSONDataReader__Class** type_info = (::app::JSONDataReader__Class**)(modloader::win::memory::resolve_rva(0x0474FE50));
    }
    namespace ParamAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ParamAttribute__Class** type_info = (::app::ParamAttribute__Class**)(modloader::win::memory::resolve_rva(0x04715518));
    }
    namespace MoonJSONDataReader {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonJSONDataReader__Class** type_info = (::app::MoonJSONDataReader__Class**)(modloader::win::memory::resolve_rva(0x0472E478));
    }
    namespace ServerCommunicator_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ServerCommunicator_c__Class** type_info = (::app::ServerCommunicator_c__Class**)(modloader::win::memory::resolve_rva(0x0478B270));
    }
    namespace MoonTelemetryCommunicator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryCommunicator__Class** type_info = (::app::MoonTelemetryCommunicator__Class**)(modloader::win::memory::resolve_rva(0x04725BB8));
    }
    namespace MoonTelemetryCommunicator_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryCommunicator_c__Class** type_info = (::app::MoonTelemetryCommunicator_c__Class**)(modloader::win::memory::resolve_rva(0x04776340));
    }
    namespace MainThreadDelegate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MainThreadDelegate__Class** type_info = (::app::MainThreadDelegate__Class**)(modloader::win::memory::resolve_rva(0x0472A848));
    }
    namespace MainThreadDispatcherPlaymode {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MainThreadDispatcherPlaymode__Class** type_info = (::app::MainThreadDispatcherPlaymode__Class**)(modloader::win::memory::resolve_rva(0x047717E8));
    }
    namespace Json_Parser {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Json_Parser__Class** type_info = (::app::Json_Parser__Class**)(modloader::win::memory::resolve_rva(0x04712298));
    }
    namespace Json_Serializer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Json_Serializer__Class** type_info = (::app::Json_Serializer__Class**)(modloader::win::memory::resolve_rva(0x047350C0));
    }
    namespace CsEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CsEvent__Class** type_info = (::app::CsEvent__Class**)(modloader::win::memory::resolve_rva(0x04781B60));
    }
    namespace Data {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Data__Class** type_info = (::app::Data__Class**)(modloader::win::memory::resolve_rva(0x0470E080));
    }
    namespace Value {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Value__Class** type_info = (::app::Value__Class**)(modloader::win::memory::resolve_rva(0x04729A30));
    }
    namespace CompactBinaryProtocolWriter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CompactBinaryProtocolWriter__Class** type_info = (::app::CompactBinaryProtocolWriter__Class**)(modloader::win::memory::resolve_rva(0x04721F90));
    }
    namespace Utils_4 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Utils_4__Class** type_info = (::app::Utils_4__Class**)(modloader::win::memory::resolve_rva(0x04727380));
    }
    namespace PlayFabRequestCommon {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabRequestCommon__Class** type_info = (::app::PlayFabRequestCommon__Class**)(modloader::win::memory::resolve_rva(0x0474CD90));
    }
    namespace GetEntityTokenRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetEntityTokenRequest__Class** type_info = (::app::GetEntityTokenRequest__Class**)(modloader::win::memory::resolve_rva(0x04716D48));
    }
    namespace PlayFabAuthenticationContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabAuthenticationContext__Class** type_info = (::app::PlayFabAuthenticationContext__Class**)(modloader::win::memory::resolve_rva(0x04703CB8));
    }
    namespace GetEntityTokenResponse {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetEntityTokenResponse__Class** type_info = (::app::GetEntityTokenResponse__Class**)(modloader::win::memory::resolve_rva(0x0473B800));
    }
    namespace PlayFabErrorCode__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabErrorCode__Enum__Class** type_info = (::app::PlayFabErrorCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04743648));
    }
    namespace PlayFabError {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabError__Class** type_info = (::app::PlayFabError__Class**)(modloader::win::memory::resolve_rva(0x04749100));
    }
    namespace AcceptTradeRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AcceptTradeRequest__Class** type_info = (::app::AcceptTradeRequest__Class**)(modloader::win::memory::resolve_rva(0x04750048));
    }
    namespace AcceptTradeResponse {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AcceptTradeResponse__Class** type_info = (::app::AcceptTradeResponse__Class**)(modloader::win::memory::resolve_rva(0x0473A888));
    }
    namespace AddFriendRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AddFriendRequest__Class** type_info = (::app::AddFriendRequest__Class**)(modloader::win::memory::resolve_rva(0x0471D6D8));
    }
    namespace AddFriendResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AddFriendResult__Class** type_info = (::app::AddFriendResult__Class**)(modloader::win::memory::resolve_rva(0x0476C1D0));
    }
    namespace AddGenericIDRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AddGenericIDRequest__Class** type_info = (::app::AddGenericIDRequest__Class**)(modloader::win::memory::resolve_rva(0x04781768));
    }
    namespace AddGenericIDResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AddGenericIDResult__Class** type_info = (::app::AddGenericIDResult__Class**)(modloader::win::memory::resolve_rva(0x0472A748));
    }
    namespace AddOrUpdateContactEmailRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AddOrUpdateContactEmailRequest__Class** type_info = (::app::AddOrUpdateContactEmailRequest__Class**)(modloader::win::memory::resolve_rva(0x04717BB8));
    }
    namespace AddOrUpdateContactEmailResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AddOrUpdateContactEmailResult__Class** type_info = (::app::AddOrUpdateContactEmailResult__Class**)(modloader::win::memory::resolve_rva(0x04704B18));
    }
} // namespace app::classes::types
