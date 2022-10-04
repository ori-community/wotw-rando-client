#include <Il2CppModLoader/app/types/AverageBothDeltaTimeController.h>
#include <Il2CppModLoader/app/types/CursorType__Enum.h>
#include <Il2CppModLoader/app/types/DeltaTimeManager.h>
#include <Il2CppModLoader/app/types/DeltaTimeManager_DeltaTimeFrameHistory.h>
#include <Il2CppModLoader/app/types/DeltaTimeManager_DeltaTimeFrameHistory__Array.h>
#include <Il2CppModLoader/app/types/DirectDeltaTimeController.h>
#include <Il2CppModLoader/app/types/DistortionCoordinates_t.h>
#include <Il2CppModLoader/app/types/ETextureType__Enum.h>
#include <Il2CppModLoader/app/types/ETrackedDeviceClass__Enum.h>
#include <Il2CppModLoader/app/types/ETrackingUniverseOrigin__Enum.h>
#include <Il2CppModLoader/app/types/EVREye__Enum.h>
#include <Il2CppModLoader/app/types/FixedDeltaTimeController.h>
#include <Il2CppModLoader/app/types/GrdkUser.h>
#include <Il2CppModLoader/app/types/HmdMatrix34_t.h>
#include <Il2CppModLoader/app/types/HmdMatrix44_t.h>
#include <Il2CppModLoader/app/types/IDeltaTimeController.h>
#include <Il2CppModLoader/app/types/IVRSystem_ComputeDistortion.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetD3D9AdapterIndex.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetDXGIOutputInfo.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetDeviceToAbsoluteTrackingPose.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetEyeToHeadTransform.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetOutputDevice.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetProjectionMatrix.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetProjectionRaw.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetRecommendedRenderTargetSize.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetSortedTrackedDeviceIndicesOfClass.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetTimeSinceLastVsync.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetTrackedDeviceActivityLevel.h>
#include <Il2CppModLoader/app/types/IVRSystem_IsDisplayOnDesktop.h>
#include <Il2CppModLoader/app/types/IVRSystem_ResetSeatedZeroPose.h>
#include <Il2CppModLoader/app/types/IVRSystem_SetDisplayVisibility.h>
#include <Il2CppModLoader/app/types/MainThreadWorkStealer.h>
#include <Il2CppModLoader/app/types/PCQualityModeManager.h>
#include <Il2CppModLoader/app/types/PausedDeltaTimeController.h>
#include <Il2CppModLoader/app/types/PlayFabFileDownloader.h>
#include <Il2CppModLoader/app/types/PlayFabFileDownloader_c.h>
#include <Il2CppModLoader/app/types/PlayFabFileUploader.h>
#include <Il2CppModLoader/app/types/PlayFabFileUploader_c.h>
#include <Il2CppModLoader/app/types/PlayFabRaceServiceProvider_c_DisplayClass10_0.h>
#include <Il2CppModLoader/app/types/RaceDataCache_c.h>
#include <Il2CppModLoader/app/types/RenderThreadWaker.h>
#include <Il2CppModLoader/app/types/ScreenshotRecorder.h>
#include <Il2CppModLoader/app/types/TrackedDevicePose_t.h>
#include <Il2CppModLoader/app/types/XalAchievements_RunRequest_d_27.h>
#include <Il2CppModLoader/app/types/XalAchievements_c_DisplayClass21_0.h>
#include <Il2CppModLoader/app/types/XalAchievements_c_DisplayClass26_0.h>
#include <Il2CppModLoader/app/types/XboxOneAchievements_1.h>
#include <Il2CppModLoader/app/types/XboxQualityModeManager.h>
#include <Il2CppModLoader/app/types/fsAotCompilationManager.h>
#include <Il2CppModLoader/app/types/fsAotConfiguration_Entry.h>
#include <Il2CppModLoader/app/types/fsAotVersionInfo_Member.h>
#include <Il2CppModLoader/app/types/fsArrayConverter.h>
#include <Il2CppModLoader/app/types/fsBaseConverter.h>
#include <Il2CppModLoader/app/types/fsBaseConverter_c.h>
#include <Il2CppModLoader/app/types/fsConfig.h>
#include <Il2CppModLoader/app/types/fsConfig_c.h>
#include <Il2CppModLoader/app/types/fsContext.h>
#include <Il2CppModLoader/app/types/fsConverter.h>
#include <Il2CppModLoader/app/types/fsConverterRegistrar.h>
#include <Il2CppModLoader/app/types/fsCyclicReferenceManager.h>
#include <Il2CppModLoader/app/types/fsCyclicReferenceManager_ObjectReferenceEqualityComparator.h>
#include <Il2CppModLoader/app/types/fsData.h>
#include <Il2CppModLoader/app/types/fsDataType__Enum.h>
#include <Il2CppModLoader/app/types/fsDataType__Enum__Array.h>
#include <Il2CppModLoader/app/types/fsDateConverter.h>
#include <Il2CppModLoader/app/types/fsDictionaryConverter.h>
#include <Il2CppModLoader/app/types/fsDirectConverter.h>
#include <Il2CppModLoader/app/types/fsDuplicateVersionNameException.h>
#include <Il2CppModLoader/app/types/fsEnumConverter.h>
#include <Il2CppModLoader/app/types/fsForwardConverter.h>
#include <Il2CppModLoader/app/types/fsGuidConverter.h>
#include <Il2CppModLoader/app/types/fsIAotConverter.h>
#include <Il2CppModLoader/app/types/fsIEnumerableConverter.h>
#include <Il2CppModLoader/app/types/fsJsonParser.h>
#include <Il2CppModLoader/app/types/fsKeyValuePairConverter.h>
#include <Il2CppModLoader/app/types/fsMetaProperty.h>
#include <Il2CppModLoader/app/types/fsMetaType.h>
#include <Il2CppModLoader/app/types/fsMetaType_AotFailureException.h>
#include <Il2CppModLoader/app/types/fsMetaType_c_DisplayClass5_0.h>
#include <Il2CppModLoader/app/types/fsMetaType_c_DisplayClass7_0.h>
#include <Il2CppModLoader/app/types/fsMetaType_c_DisplayClass8_0.h>
#include <Il2CppModLoader/app/types/fsMissingVersionConstructorException.h>
#include <Il2CppModLoader/app/types/fsNullableConverter.h>
#include <Il2CppModLoader/app/types/fsObjectProcessor.h>
#include <Il2CppModLoader/app/types/fsPortableReflection_AttributeQueryComparator.h>
#include <Il2CppModLoader/app/types/fsPortableReflection_GetFlattenedMethods_d_18.h>
#include <Il2CppModLoader/app/types/fsPrimitiveConverter.h>
#include <Il2CppModLoader/app/types/fsReflectedConverter.h>
#include <Il2CppModLoader/app/types/fsResult.h>
#include <Il2CppModLoader/app/types/fsSerializationCallbackProcessor.h>
#include <Il2CppModLoader/app/types/fsSerializationCallbackReceiverProcessor.h>
#include <Il2CppModLoader/app/types/fsSerializer.h>
#include <Il2CppModLoader/app/types/fsSerializer_fsLazyCycleDefinitionWriter.h>
#include <Il2CppModLoader/app/types/fsTypeConverter.h>
#include <Il2CppModLoader/app/types/fsTypeExtensions_c_DisplayClass2_0.h>
#include <Il2CppModLoader/app/types/fsVersionedType.h>
#include <Il2CppModLoader/app/types/fsVersionedType__Array.h>
#include <Il2CppModLoader/app/types/fsWeakReferenceConverter.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalAchievements_c_DisplayClass21_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XalAchievements_c_DisplayClass21_0__Class** type_info = (::app::XalAchievements_c_DisplayClass21_0__Class**)(modloader::win::memory::resolve_rva(0x04715828));
    }
    namespace XalAchievements_c_DisplayClass26_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XalAchievements_c_DisplayClass26_0__Class** type_info = (::app::XalAchievements_c_DisplayClass26_0__Class**)(modloader::win::memory::resolve_rva(0x0470B288));
    }
    namespace XalAchievements_RunRequest_d_27 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XalAchievements_RunRequest_d_27__Class** type_info = (::app::XalAchievements_RunRequest_d_27__Class**)(modloader::win::memory::resolve_rva(0x04786EA0));
    }
    namespace XboxOneAchievements_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XboxOneAchievements_1__Class** type_info = (::app::XboxOneAchievements_1__Class**)(modloader::win::memory::resolve_rva(0x04720F60));
    }
    namespace GrdkUser {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GrdkUser__Class** type_info = (::app::GrdkUser__Class**)(modloader::win::memory::resolve_rva(0x04736948));
    }
    namespace PlayFabFileDownloader {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabFileDownloader__Class** type_info = (::app::PlayFabFileDownloader__Class**)(modloader::win::memory::resolve_rva(0x047748B8));
    }
    namespace PlayFabFileDownloader_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabFileDownloader_c__Class** type_info = (::app::PlayFabFileDownloader_c__Class**)(modloader::win::memory::resolve_rva(0x0472C660));
    }
    namespace PlayFabFileUploader {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabFileUploader__Class** type_info = (::app::PlayFabFileUploader__Class**)(modloader::win::memory::resolve_rva(0x0478DDF8));
    }
    namespace PlayFabFileUploader_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabFileUploader_c__Class** type_info = (::app::PlayFabFileUploader_c__Class**)(modloader::win::memory::resolve_rva(0x0472ACF8));
    }
    namespace PlayFabRaceServiceProvider_c_DisplayClass10_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabRaceServiceProvider_c_DisplayClass10_0__Class** type_info = (::app::PlayFabRaceServiceProvider_c_DisplayClass10_0__Class**)(modloader::win::memory::resolve_rva(0x04773460));
    }
    namespace RaceDataCache_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RaceDataCache_c__Class** type_info = (::app::RaceDataCache_c__Class**)(modloader::win::memory::resolve_rva(0x04774320));
    }
    namespace CursorType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CursorType__Enum__Class** type_info = (::app::CursorType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04725F68));
    }
    namespace fsAotVersionInfo_Member {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsAotVersionInfo_Member__Class** type_info = (::app::fsAotVersionInfo_Member__Class**)(modloader::win::memory::resolve_rva(0x04716148));
    }
    namespace fsMetaType {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsMetaType__Class** type_info = (::app::fsMetaType__Class**)(modloader::win::memory::resolve_rva(0x04783DC8));
    }
    namespace fsConfig {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsConfig__Class** type_info = (::app::fsConfig__Class**)(modloader::win::memory::resolve_rva(0x0471D130));
    }
    namespace fsMetaProperty {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsMetaProperty__Class** type_info = (::app::fsMetaProperty__Class**)(modloader::win::memory::resolve_rva(0x047613B0));
    }
    namespace fsIAotConverter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsIAotConverter__Class** type_info = (::app::fsIAotConverter__Class**)(modloader::win::memory::resolve_rva(0x04783DC0));
    }
    namespace fsAotCompilationManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsAotCompilationManager__Class** type_info = (::app::fsAotCompilationManager__Class**)(modloader::win::memory::resolve_rva(0x047175B8));
    }
    namespace fsAotConfiguration_Entry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsAotConfiguration_Entry__Class** type_info = (::app::fsAotConfiguration_Entry__Class**)(modloader::win::memory::resolve_rva(0x04701648));
    }
    namespace fsConverterRegistrar {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsConverterRegistrar__Class** type_info = (::app::fsConverterRegistrar__Class**)(modloader::win::memory::resolve_rva(0x04714BD8));
    }
    namespace fsBaseConverter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsBaseConverter__Class** type_info = (::app::fsBaseConverter__Class**)(modloader::win::memory::resolve_rva(0x04765908));
    }
    namespace fsDirectConverter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsDirectConverter__Class** type_info = (::app::fsDirectConverter__Class**)(modloader::win::memory::resolve_rva(0x0475D688));
    }
    namespace fsSerializer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsSerializer__Class** type_info = (::app::fsSerializer__Class**)(modloader::win::memory::resolve_rva(0x04754FF0));
    }
    namespace fsObjectProcessor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsObjectProcessor__Class** type_info = (::app::fsObjectProcessor__Class**)(modloader::win::memory::resolve_rva(0x047993C0));
    }
    namespace fsData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsData__Class** type_info = (::app::fsData__Class**)(modloader::win::memory::resolve_rva(0x0476C358));
    }
    namespace fsConverter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsConverter__Class** type_info = (::app::fsConverter__Class**)(modloader::win::memory::resolve_rva(0x04795230));
    }
    namespace fsArrayConverter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsArrayConverter__Class** type_info = (::app::fsArrayConverter__Class**)(modloader::win::memory::resolve_rva(0x0477D9E8));
    }
    namespace fsResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsResult__Class** type_info = (::app::fsResult__Class**)(modloader::win::memory::resolve_rva(0x047896C0));
    }
    namespace fsCyclicReferenceManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsCyclicReferenceManager__Class** type_info = (::app::fsCyclicReferenceManager__Class**)(modloader::win::memory::resolve_rva(0x04772B40));
    }
    namespace fsSerializer_fsLazyCycleDefinitionWriter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsSerializer_fsLazyCycleDefinitionWriter__Class** type_info = (::app::fsSerializer_fsLazyCycleDefinitionWriter__Class**)(modloader::win::memory::resolve_rva(0x04786070));
    }
    namespace fsContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsContext__Class** type_info = (::app::fsContext__Class**)(modloader::win::memory::resolve_rva(0x04789140));
    }
    namespace fsDataType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsDataType__Enum__Class** type_info = (::app::fsDataType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04719398));
    }
    namespace fsDataType__Enum__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsDataType__Enum__Array__Class** type_info = (::app::fsDataType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04746ED0));
    }
    namespace fsBaseConverter_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsBaseConverter_c__Class** type_info = (::app::fsBaseConverter_c__Class**)(modloader::win::memory::resolve_rva(0x0478A370));
    }
    namespace fsConfig_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsConfig_c__Class** type_info = (::app::fsConfig_c__Class**)(modloader::win::memory::resolve_rva(0x04735B30));
    }
    namespace fsMissingVersionConstructorException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsMissingVersionConstructorException__Class** type_info = (::app::fsMissingVersionConstructorException__Class**)(modloader::win::memory::resolve_rva(0x0478FF50));
    }
    namespace fsDuplicateVersionNameException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsDuplicateVersionNameException__Class** type_info = (::app::fsDuplicateVersionNameException__Class**)(modloader::win::memory::resolve_rva(0x04748460));
    }
    namespace fsJsonParser {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsJsonParser__Class** type_info = (::app::fsJsonParser__Class**)(modloader::win::memory::resolve_rva(0x0473E638));
    }
    namespace fsTypeExtensions_c_DisplayClass2_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsTypeExtensions_c_DisplayClass2_0__Class** type_info = (::app::fsTypeExtensions_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x04786510));
    }
    namespace fsMetaType_AotFailureException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsMetaType_AotFailureException__Class** type_info = (::app::fsMetaType_AotFailureException__Class**)(modloader::win::memory::resolve_rva(0x04772950));
    }
    namespace fsMetaType_c_DisplayClass5_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsMetaType_c_DisplayClass5_0__Class** type_info = (::app::fsMetaType_c_DisplayClass5_0__Class**)(modloader::win::memory::resolve_rva(0x04737588));
    }
    namespace fsMetaType_c_DisplayClass7_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsMetaType_c_DisplayClass7_0__Class** type_info = (::app::fsMetaType_c_DisplayClass7_0__Class**)(modloader::win::memory::resolve_rva(0x04706E58));
    }
    namespace fsMetaType_c_DisplayClass8_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsMetaType_c_DisplayClass8_0__Class** type_info = (::app::fsMetaType_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x04727AD8));
    }
    namespace fsDateConverter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsDateConverter__Class** type_info = (::app::fsDateConverter__Class**)(modloader::win::memory::resolve_rva(0x0470E880));
    }
    namespace fsDictionaryConverter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsDictionaryConverter__Class** type_info = (::app::fsDictionaryConverter__Class**)(modloader::win::memory::resolve_rva(0x047996A0));
    }
    namespace fsEnumConverter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsEnumConverter__Class** type_info = (::app::fsEnumConverter__Class**)(modloader::win::memory::resolve_rva(0x04767FA8));
    }
    namespace fsForwardConverter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsForwardConverter__Class** type_info = (::app::fsForwardConverter__Class**)(modloader::win::memory::resolve_rva(0x04747608));
    }
    namespace fsGuidConverter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsGuidConverter__Class** type_info = (::app::fsGuidConverter__Class**)(modloader::win::memory::resolve_rva(0x047161A8));
    }
    namespace fsIEnumerableConverter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsIEnumerableConverter__Class** type_info = (::app::fsIEnumerableConverter__Class**)(modloader::win::memory::resolve_rva(0x04755830));
    }
    namespace fsKeyValuePairConverter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsKeyValuePairConverter__Class** type_info = (::app::fsKeyValuePairConverter__Class**)(modloader::win::memory::resolve_rva(0x04708F60));
    }
    namespace fsNullableConverter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsNullableConverter__Class** type_info = (::app::fsNullableConverter__Class**)(modloader::win::memory::resolve_rva(0x047455C0));
    }
    namespace fsPrimitiveConverter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsPrimitiveConverter__Class** type_info = (::app::fsPrimitiveConverter__Class**)(modloader::win::memory::resolve_rva(0x0477C0F0));
    }
    namespace fsReflectedConverter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsReflectedConverter__Class** type_info = (::app::fsReflectedConverter__Class**)(modloader::win::memory::resolve_rva(0x0473C430));
    }
    namespace fsTypeConverter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsTypeConverter__Class** type_info = (::app::fsTypeConverter__Class**)(modloader::win::memory::resolve_rva(0x04782868));
    }
    namespace fsWeakReferenceConverter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsWeakReferenceConverter__Class** type_info = (::app::fsWeakReferenceConverter__Class**)(modloader::win::memory::resolve_rva(0x0476C0C0));
    }
    namespace fsSerializationCallbackProcessor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsSerializationCallbackProcessor__Class** type_info = (::app::fsSerializationCallbackProcessor__Class**)(modloader::win::memory::resolve_rva(0x0473CB08));
    }
    namespace fsSerializationCallbackReceiverProcessor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsSerializationCallbackReceiverProcessor__Class** type_info = (::app::fsSerializationCallbackReceiverProcessor__Class**)(modloader::win::memory::resolve_rva(0x047133C8));
    }
    namespace fsCyclicReferenceManager_ObjectReferenceEqualityComparator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator__Class** type_info = (::app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator__Class**)(modloader::win::memory::resolve_rva(0x04791F50));
    }
    namespace fsPortableReflection_AttributeQueryComparator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsPortableReflection_AttributeQueryComparator__Class** type_info = (::app::fsPortableReflection_AttributeQueryComparator__Class**)(modloader::win::memory::resolve_rva(0x04731850));
    }
    namespace fsPortableReflection_GetFlattenedMethods_d_18 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsPortableReflection_GetFlattenedMethods_d_18__Class** type_info = (::app::fsPortableReflection_GetFlattenedMethods_d_18__Class**)(modloader::win::memory::resolve_rva(0x047503F8));
    }
    namespace fsVersionedType {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsVersionedType__Class** type_info = (::app::fsVersionedType__Class**)(modloader::win::memory::resolve_rva(0x047455D0));
    }
    namespace fsVersionedType__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::fsVersionedType__Array__Class** type_info = (::app::fsVersionedType__Array__Class**)(modloader::win::memory::resolve_rva(0x047530C8));
    }
    namespace ScreenshotRecorder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ScreenshotRecorder__Class** type_info = (::app::ScreenshotRecorder__Class**)(modloader::win::memory::resolve_rva(0x04768C00));
    }
    namespace MainThreadWorkStealer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MainThreadWorkStealer__Class** type_info = (::app::MainThreadWorkStealer__Class**)(modloader::win::memory::resolve_rva(0x047581D0));
    }
    namespace RenderThreadWaker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RenderThreadWaker__Class** type_info = (::app::RenderThreadWaker__Class**)(modloader::win::memory::resolve_rva(0x0472BF60));
    }
    namespace AverageBothDeltaTimeController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AverageBothDeltaTimeController__Class** type_info = (::app::AverageBothDeltaTimeController__Class**)(modloader::win::memory::resolve_rva(0x0477A590));
    }
    namespace DeltaTimeManager_DeltaTimeFrameHistory {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DeltaTimeManager_DeltaTimeFrameHistory__Class** type_info = (::app::DeltaTimeManager_DeltaTimeFrameHistory__Class**)(modloader::win::memory::resolve_rva(0x04722860));
    }
    namespace DeltaTimeManager_DeltaTimeFrameHistory__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DeltaTimeManager_DeltaTimeFrameHistory__Array__Class** type_info = (::app::DeltaTimeManager_DeltaTimeFrameHistory__Array__Class**)(modloader::win::memory::resolve_rva(0x04713A78));
    }
    namespace DeltaTimeManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DeltaTimeManager__Class** type_info = (::app::DeltaTimeManager__Class**)(modloader::win::memory::resolve_rva(0x04704CF0));
    }
    namespace IDeltaTimeController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IDeltaTimeController__Class** type_info = (::app::IDeltaTimeController__Class**)(modloader::win::memory::resolve_rva(0x0477F3F0));
    }
    namespace DirectDeltaTimeController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DirectDeltaTimeController__Class** type_info = (::app::DirectDeltaTimeController__Class**)(modloader::win::memory::resolve_rva(0x04708340));
    }
    namespace FixedDeltaTimeController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FixedDeltaTimeController__Class** type_info = (::app::FixedDeltaTimeController__Class**)(modloader::win::memory::resolve_rva(0x0476EC30));
    }
    namespace PausedDeltaTimeController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PausedDeltaTimeController__Class** type_info = (::app::PausedDeltaTimeController__Class**)(modloader::win::memory::resolve_rva(0x04709348));
    }
    namespace PCQualityModeManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PCQualityModeManager__Class** type_info = (::app::PCQualityModeManager__Class**)(modloader::win::memory::resolve_rva(0x0478A8D0));
    }
    namespace XboxQualityModeManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XboxQualityModeManager__Class** type_info = (::app::XboxQualityModeManager__Class**)(modloader::win::memory::resolve_rva(0x04722410));
    }
    namespace IVRSystem_GetRecommendedRenderTargetSize {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetRecommendedRenderTargetSize__Class** type_info = (::app::IVRSystem_GetRecommendedRenderTargetSize__Class**)(modloader::win::memory::resolve_rva(0x04784F18));
    }
    namespace IVRSystem_GetProjectionMatrix {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetProjectionMatrix__Class** type_info = (::app::IVRSystem_GetProjectionMatrix__Class**)(modloader::win::memory::resolve_rva(0x04789390));
    }
    namespace HmdMatrix44_t {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HmdMatrix44_t__Class** type_info = (::app::HmdMatrix44_t__Class**)(modloader::win::memory::resolve_rva(0x04767558));
    }
    namespace EVREye__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EVREye__Enum__Class** type_info = (::app::EVREye__Enum__Class**)(modloader::win::memory::resolve_rva(0x047972D8));
    }
    namespace IVRSystem_GetProjectionRaw {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetProjectionRaw__Class** type_info = (::app::IVRSystem_GetProjectionRaw__Class**)(modloader::win::memory::resolve_rva(0x04749650));
    }
    namespace IVRSystem_ComputeDistortion {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_ComputeDistortion__Class** type_info = (::app::IVRSystem_ComputeDistortion__Class**)(modloader::win::memory::resolve_rva(0x0470F4D8));
    }
    namespace DistortionCoordinates_t {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DistortionCoordinates_t__Class** type_info = (::app::DistortionCoordinates_t__Class**)(modloader::win::memory::resolve_rva(0x04725AD8));
    }
    namespace IVRSystem_GetEyeToHeadTransform {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetEyeToHeadTransform__Class** type_info = (::app::IVRSystem_GetEyeToHeadTransform__Class**)(modloader::win::memory::resolve_rva(0x04713ED0));
    }
    namespace HmdMatrix34_t {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HmdMatrix34_t__Class** type_info = (::app::HmdMatrix34_t__Class**)(modloader::win::memory::resolve_rva(0x04765138));
    }
    namespace IVRSystem_GetTimeSinceLastVsync {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetTimeSinceLastVsync__Class** type_info = (::app::IVRSystem_GetTimeSinceLastVsync__Class**)(modloader::win::memory::resolve_rva(0x04773C88));
    }
    namespace IVRSystem_GetD3D9AdapterIndex {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetD3D9AdapterIndex__Class** type_info = (::app::IVRSystem_GetD3D9AdapterIndex__Class**)(modloader::win::memory::resolve_rva(0x047556F0));
    }
    namespace IVRSystem_GetDXGIOutputInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetDXGIOutputInfo__Class** type_info = (::app::IVRSystem_GetDXGIOutputInfo__Class**)(modloader::win::memory::resolve_rva(0x0474EBF0));
    }
    namespace IVRSystem_GetOutputDevice {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetOutputDevice__Class** type_info = (::app::IVRSystem_GetOutputDevice__Class**)(modloader::win::memory::resolve_rva(0x0476EFE0));
    }
    namespace ETextureType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ETextureType__Enum__Class** type_info = (::app::ETextureType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477D418));
    }
    namespace IVRSystem_IsDisplayOnDesktop {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_IsDisplayOnDesktop__Class** type_info = (::app::IVRSystem_IsDisplayOnDesktop__Class**)(modloader::win::memory::resolve_rva(0x04764AE0));
    }
    namespace IVRSystem_SetDisplayVisibility {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_SetDisplayVisibility__Class** type_info = (::app::IVRSystem_SetDisplayVisibility__Class**)(modloader::win::memory::resolve_rva(0x047249D8));
    }
    namespace IVRSystem_GetDeviceToAbsoluteTrackingPose {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetDeviceToAbsoluteTrackingPose__Class** type_info = (::app::IVRSystem_GetDeviceToAbsoluteTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x047791E0));
    }
    namespace ETrackingUniverseOrigin__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ETrackingUniverseOrigin__Enum__Class** type_info = (::app::ETrackingUniverseOrigin__Enum__Class**)(modloader::win::memory::resolve_rva(0x047660C0));
    }
    namespace TrackedDevicePose_t {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TrackedDevicePose_t__Class** type_info = (::app::TrackedDevicePose_t__Class**)(modloader::win::memory::resolve_rva(0x04759490));
    }
    namespace IVRSystem_ResetSeatedZeroPose {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_ResetSeatedZeroPose__Class** type_info = (::app::IVRSystem_ResetSeatedZeroPose__Class**)(modloader::win::memory::resolve_rva(0x047955C0));
    }
    namespace IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Class** type_info = (::app::IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x04761190));
    }
    namespace IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Class** type_info = (::app::IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x04700DD0));
    }
    namespace IVRSystem_GetSortedTrackedDeviceIndicesOfClass {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class** type_info = (::app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class**)(modloader::win::memory::resolve_rva(0x0477BD50));
    }
    namespace ETrackedDeviceClass__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ETrackedDeviceClass__Enum__Class** type_info = (::app::ETrackedDeviceClass__Enum__Class**)(modloader::win::memory::resolve_rva(0x047248B0));
    }
    namespace IVRSystem_GetTrackedDeviceActivityLevel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetTrackedDeviceActivityLevel__Class** type_info = (::app::IVRSystem_GetTrackedDeviceActivityLevel__Class**)(modloader::win::memory::resolve_rva(0x04736180));
    }
} // namespace app::classes::types
