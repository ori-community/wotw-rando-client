#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AchievementAsset.h>
#include <Modloader/app/structs/AmplifyColorBase__Array.h>
#include <Modloader/app/structs/AreaMapCanvas.h>
#include <Modloader/app/structs/Atlas__Array.h>
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/ByteEnum__Enum__Array.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CacheData.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/Dictionary_2_Newto_J_Serializ_JsonPro_Newto_J_Serializ_JsonSerializerInternalR_PropertyPr_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_System_Int32Enum_.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_OverridableColorProperty_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_OverridableFloatProperty_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_OverridableTextureProperty_.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_Transform_AnimationMetaData_AnimationData_.h>
#include <Modloader/app/structs/DiscriminatedUnionConverter_UnionCase.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Expression__Array.h>
#include <Modloader/app/structs/FieldInfo_1__Array.h>
#include <Modloader/app/structs/FrameProfiler_MetricInfo.h>
#include <Modloader/app/structs/Func_2_AbilityType_Boolean_.h>
#include <Modloader/app/structs/Func_2_AchievementAsset_Boolean_.h>
#include <Modloader/app/structs/Func_2_AchievementAsset_String_.h>
#include <Modloader/app/structs/Func_2_AmplifyColor_VolumeEffectComponentFlags_Boolean_.h>
#include <Modloader/app/structs/Func_2_AmplifyColor_VolumeEffectComponentFlags_String_.h>
#include <Modloader/app/structs/Func_2_AmplifyColor_VolumeEffectComponent_String_.h>
#include <Modloader/app/structs/Func_2_AmplifyColor_VolumeEffectFieldFlags_Boolean_.h>
#include <Modloader/app/structs/Func_2_AmplifyColor_VolumeEffectFieldFlags_String_.h>
#include <Modloader/app/structs/Func_2_AmplifyColor_VolumeEffectField_String_.h>
#include <Modloader/app/structs/Func_2_AmplifyColor_VolumeEffect_AmplifyColorBase_.h>
#include <Modloader/app/structs/Func_2_AreaMapCanvas_Boolean_.h>
#include <Modloader/app/structs/Func_2_Boolean_Boolean_.h>
#include <Modloader/app/structs/Func_2_ByteEnum_Boolean_.h>
#include <Modloader/app/structs/Func_2_Byte_Boolean_.h>
#include <Modloader/app/structs/Func_2_Byte_Byte_.h>
#include <Modloader/app/structs/Func_2_CageStructureTool_Edge_Boolean_.h>
#include <Modloader/app/structs/Func_2_CageStructureTool_Face_Boolean_.h>
#include <Modloader/app/structs/Func_2_Core_Input_Button_Boolean_.h>
#include <Modloader/app/structs/Func_2_FrameProfiler_MetricInfo_Boolean_.h>
#include <Modloader/app/structs/Func_2_FullSerializer_fsDataType_String_.h>
#include <Modloader/app/structs/Func_2_GameWorldArea_PlayerAbilityInfo_Boolean_.h>
#include <Modloader/app/structs/Func_2_HierarchyPerfTest_HierarchyPerfTestsSceneRoot_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Func_2_HierarchyPerfTest_PerfTestTimer_TestData_String_.h>
#include <Modloader/app/structs/Func_2_IGhostFrameData_Boolean_.h>
#include <Modloader/app/structs/Func_2_IRenderPostprocessor_Boolean_.h>
#include <Modloader/app/structs/Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_Object_.h>
#include <Modloader/app/structs/Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_String_.h>
#include <Modloader/app/structs/Func_2_Int32Enum_Boolean_.h>
#include <Modloader/app/structs/Func_2_Int32Enum_Int32_.h>
#include <Modloader/app/structs/Func_2_Int32Enum_Object_.h>
#include <Modloader/app/structs/Func_2_Int32Enum_Single_.h>
#include <Modloader/app/structs/Func_2_Int32Enum_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Func_2_Int32_Boolean_.h>
#include <Modloader/app/structs/Func_2_Int32_Byte_.h>
#include <Modloader/app/structs/Func_2_Int32_Int32_.h>
#include <Modloader/app/structs/Func_2_JUnitReporter_TestCase_Int32_.h>
#include <Modloader/app/structs/Func_2_JUnitReporter_TestSuite_Int32_.h>
#include <Modloader/app/structs/Func_2_KeybindingCommandMapAsset_ExclusiveCommandList_Boolean_.h>
#include <Modloader/app/structs/Func_2_LeaderboardData_Entry_Boolean_.h>
#include <Modloader/app/structs/Func_2_LeaderboardTableUI_LeaderboardMetaData_Boolean_.h>
#include <Modloader/app/structs/Func_2_LightCanvasEditorText_LightCanvasEditorTe_LightCanvasEditorTex_LightCanvasEditorTe_.h>
#include <Modloader/app/structs/Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_Int32_.h>
#include <Modloader/app/structs/Func_2_MenuTabEntry_Boolean_.h>
#include <Modloader/app/structs/Func_2_MicroProfilerInspector_MetricData_Double_.h>
#include <Modloader/app/structs/Func_2_MicroProfilerInspector_MetricData_Int32Enum_.h>
#include <Modloader/app/structs/Func_2_MicroProfilerInspector_MetricData_Moon_Profile_Metric_.h>
#include <Modloader/app/structs/Func_2_MicroProfilerInspector_MetricData_Object_.h>
#include <Modloader/app/structs/Func_2_MicroProfilerInspector_MetricData_String_.h>
#include <Modloader/app/structs/Func_2_MicroProfilerInspector_MetricData_UInt32_.h>
#include <Modloader/app/structs/Func_2_MistyWoodsKuroGameplayHideZone_Boolean_.h>
#include <Modloader/app/structs/Func_2_Moo_ArtOptimizatio_SerializableUberShaderWrappe_Syste_Collection_Gener_IEnumerab_1_.h>
#include <Modloader/app/structs/Func_2_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_Boolean_.h>
#include <Modloader/app/structs/Func_2_Moon_ArtOptimization_SerializableUberShaderWrapper_Boolean_.h>
#include <Modloader/app/structs/Func_2_Moon_Driver_UpdateManager_Entry_Boolean_.h>
#include <Modloader/app/structs/Func_2_Moon_Race_LeaderBoardEntry_Boolean_.h>
#include <Modloader/app/structs/Func_2_Moon_Race_LeaderBoardEntry_Int32_.h>
#include <Modloader/app/structs/Func_2_Moon_SerializedBooleanUberState_Boolean_.h>
#include <Modloader/app/structs/Func_2_Moon_SerializedIntUberState_Boolean_.h>
#include <Modloader/app/structs/Func_2_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_Boolean_.h>
#include <Modloader/app/structs/Func_2_Moon_TimeSlicer_ITimeSlicedJob_Boolean_.h>
#include <Modloader/app/structs/Func_2_Moon_TimeSlicer_ITimeSlicedJob_Single_.h>
#include <Modloader/app/structs/Func_2_Moon_Timeline_TimelineEntityRecord_Boolean_.h>
#include <Modloader/app/structs/Func_2_Moon_Timeline_TimelineMarkerRecord_Boolean_.h>
#include <Modloader/app/structs/Func_2_Moon_Wwise_ArtificialSoundHost_Boolean_.h>
#include <Modloader/app/structs/Func_2_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_Boolean_.h>
#include <Modloader/app/structs/Func_2_Newton_J_Serializa_JsonProp_Newton_J_Serializa_JsonSerializerInternalR_PropertyPre_.h>
#include <Modloader/app/structs/Func_2_Newtonsof_Jso_Serializatio_JsonSerializerInternalReade_CreatorPropertyContex_Boole_.h>
#include <Modloader/app/structs/Func_2_Newtonsoft_Jso_Utilitie_ImmutableCollectionsUtil_ImmutableCollectionTypeInf_Boolea_.h>
#include <Modloader/app/structs/Func_2_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_Boolean_.h>
#include <Modloader/app/structs/Func_2_Newtonsoft_Json_Linq_JProperty_String_.h>
#include <Modloader/app/structs/Func_2_Newtonsoft_Json_Serialization_JsonProperty_Int32_.h>
#include <Modloader/app/structs/Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Jso_Serializatio_JsonPropert_.h>
#include <Modloader/app/structs/Func_2_Newtonsoft_Json_Serialization_JsonProperty_String_.h>
#include <Modloader/app/structs/Func_2_Object_Boolean_.h>
#include <Modloader/app/structs/Func_2_Object_Byte_.h>
#include <Modloader/app/structs/Func_2_Object_DateTime_.h>
#include <Modloader/app/structs/Func_2_Object_Int32Enum_.h>
#include <Modloader/app/structs/Func_2_Object_Int32_.h>
#include <Modloader/app/structs/Func_2_Object_Int64_.h>
#include <Modloader/app/structs/Func_2_Object_Object_.h>
#include <Modloader/app/structs/Func_2_Object_Single_.h>
#include <Modloader/app/structs/Func_2_Object_System_Collections_Generic_IEnumerable_1_.h>
#include <Modloader/app/structs/Func_2_Object_Type_.h>
#include <Modloader/app/structs/Func_2_Object_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Func_2_OverridableColorProperty_String_.h>
#include <Modloader/app/structs/Func_2_OverridableFloatProperty_String_.h>
#include <Modloader/app/structs/Func_2_OverridableTextureProperty_String_.h>
#include <Modloader/app/structs/Func_2_PetrifiedOwlFeedingGrounds_PetrifiedOwlFeedingGroundHideZone_Boolean_.h>
#include <Modloader/app/structs/Func_2_PlayFab_DataModels_GetFileMetadata_Boolean_.h>
#include <Modloader/app/structs/Func_2_PlayFab_PlayFabEmitEventRequest_PlayFab_EventsModels_EventContents_.h>
#include <Modloader/app/structs/Func_2_RuntimeQuest_Boolean_.h>
#include <Modloader/app/structs/Func_2_RuntimeWorldMapIcon_Boolean_.h>
#include <Modloader/app/structs/Func_2_SaveSlotInfo_Boolean_.h>
#include <Modloader/app/structs/Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean_.h>
#include <Modloader/app/structs/Func_2_SceneManagerScene_Boolean_.h>
#include <Modloader/app/structs/Func_2_SceneMetaData_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Func_2_SeinEventsDebugger_Entry_Int64_.h>
#include <Modloader/app/structs/Func_2_Single_Boolean_.h>
#include <Modloader/app/structs/Func_2_Single_Single_.h>
#include <Modloader/app/structs/Func_2_SmartInput_IButtonInput_Boolean_.h>
#include <Modloader/app/structs/Func_2_SmartInput_KeyCodeButtonInput_Boolean_.h>
#include <Modloader/app/structs/Func_2_SpiritShardType_Boolean_.h>
#include <Modloader/app/structs/Func_2_String_Boolean_.h>
#include <Modloader/app/structs/Func_2_String_String_.h>
#include <Modloader/app/structs/Func_2_String_System_Text_RegularExpressions_Match_.h>
#include <Modloader/app/structs/Func_2_SystemIntegration_CacheData_Boolean_.h>
#include <Modloader/app/structs/Func_2_SystemIntegration_Races_RaceEntry_Boolean_.h>
#include <Modloader/app/structs/Func_2_SystemIntegration_Races_RaceEntry_DateTime_.h>
#include <Modloader/app/structs/Func_2_System_Collections_DictionaryEntry_Object_.h>
#include <Modloader/app/structs/Func_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Boolean_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__1.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__2.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__3.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Int32_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Int32__1.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Int32__2.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Int32__3.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Object_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Object__1.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Single_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Single__1.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Single__2.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Single__3.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_String_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_SystemIntegration_Races_RaceEntry_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect__1.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_ValueTuple_2_Int32_Object_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_ValueTuple_2_Int32_String_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_List_1_Int32_.h>
#include <Modloader/app/structs/Func_2_System_Dynamic_DynamicMetaObject_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/Func_2_System_IO_FileInfo_DateTime_.h>
#include <Modloader/app/structs/Func_2_System_Linq_Expressions_Expression_Boolean_.h>
#include <Modloader/app/structs/Func_2_System_Linq_Expressions_SwitchCase_Boolean_.h>
#include <Modloader/app/structs/Func_2_System_Reflection_Assembly_System_Collections_Generic_IEnumerable_1_.h>
#include <Modloader/app/structs/Func_2_System_Reflection_ConstructorInfo_Boolean_.h>
#include <Modloader/app/structs/Func_2_System_Reflection_FieldInfo_Boolean_.h>
#include <Modloader/app/structs/Func_2_System_Reflection_FieldInfo_String_.h>
#include <Modloader/app/structs/Func_2_System_Reflection_MemberInfo_Boolean_.h>
#include <Modloader/app/structs/Func_2_System_Reflection_MemberInfo_String_.h>
#include <Modloader/app/structs/Func_2_System_Reflection_MethodInfo_Boolean_.h>
#include <Modloader/app/structs/Func_2_System_Reflection_ParameterInfo_Type_.h>
#include <Modloader/app/structs/Func_2_System_Reflection_PropertyInfo_Boolean_.h>
#include <Modloader/app/structs/Func_2_System_Runtime_Serialization_EnumMemberAttribute_String_.h>
#include <Modloader/app/structs/Func_2_System_Text_RegularExpressions_Match_Boolean_.h>
#include <Modloader/app/structs/Func_2_TextureAnimation_System_Collections_Generic_IEnumerable_1_.h>
#include <Modloader/app/structs/Func_2_Tuple_2_String_Single_Single_.h>
#include <Modloader/app/structs/Func_2_Type_Boolean_.h>
#include <Modloader/app/structs/Func_2_Type_String_.h>
#include <Modloader/app/structs/Func_2_Type_System_Collections_Generic_IEnumerable_1_.h>
#include <Modloader/app/structs/Func_2_UberPoolGroupWarmer_Boolean_.h>
#include <Modloader/app/structs/Func_2_UberPoolGroupWarmer_PrewarmItem_Boolean_.h>
#include <Modloader/app/structs/Func_2_UberPoolPerfTestSettings_Boolean_.h>
#include <Modloader/app/structs/Func_2_UberShaderComponent_Boolean_.h>
#include <Modloader/app/structs/Func_2_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache_Boolean_.h>
#include <Modloader/app/structs/Func_2_UnityEngi_Network_PlayerConnect_PlayerEditorConnectionEve_MessageTypeSubscrib_Bool_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Component_Boolean_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_GameObject_Boolean_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_GameObject_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_KeyCode_Boolean_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_MonoBehaviour_Boolean_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Rect_Boolean_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Rect_Single_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Rect_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Transform_AnimationMetaData_AnimationData_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Transform_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_UI_Toggle_Boolean_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Vector2_Boolean_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Vector3_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Func_2_ValueTuple_2_Int32_Object_Boolean_.h>
#include <Modloader/app/structs/Func_2_WeakPrefab_Boolean_.h>
#include <Modloader/app/structs/Func_2_XGamingRuntime_XGameSaveBlobInfo_String_.h>
#include <Modloader/app/structs/Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Boolean_.h>
#include <Modloader/app/structs/Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Int32_.h>
#include <Modloader/app/structs/Func_3_Int32_Int32_Int32_.h>
#include <Modloader/app/structs/Func_3_Int32_Object_Int32_.h>
#include <Modloader/app/structs/Func_3_Object_Int32_Object_.h>
#include <Modloader/app/structs/Func_3_Object_Int32_System_Collections_Generic_IEnumerable_1_.h>
#include <Modloader/app/structs/Func_3_Object_Object_Object_.h>
#include <Modloader/app/structs/Func_3_Object_System_Collections_Generic_KeyValuePair_2_Object_.h>
#include <Modloader/app/structs/Func_3_Single_FloatProviderZone_Single_.h>
#include <Modloader/app/structs/Func_3_Single_Object_Single_.h>
#include <Modloader/app/structs/Func_3_ZenFulc_EmbeddedBrow_IProm_F_1_ZenFulc_EmbeddedBrow_IProm_ZenFulc_EmbeddedBro_IPro_.h>
#include <Modloader/app/structs/Func_3_ZenFulcru_EmbeddedBrowse_VRBrowserPane_Int3_ZenFulcru_EmbeddedBrowse_VRBrowserPane_.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/GetFileMetadata.h>
#include <Modloader/app/structs/IButtonInput__Array.h>
#include <Modloader/app/structs/ICachableInput.h>
#include <Modloader/app/structs/IEnumerable.h>
#include <Modloader/app/structs/IEnumerable_1_AbilityType_.h>
#include <Modloader/app/structs/IEnumerable_1_AchievementAsset_.h>
#include <Modloader/app/structs/IEnumerable_1_AmplifyColorBase_.h>
#include <Modloader/app/structs/IEnumerable_1_AmplifyColor_VolumeEffectComponentFlags_.h>
#include <Modloader/app/structs/IEnumerable_1_AmplifyColor_VolumeEffectComponent_.h>
#include <Modloader/app/structs/IEnumerable_1_AmplifyColor_VolumeEffectFieldFlags_.h>
#include <Modloader/app/structs/IEnumerable_1_AmplifyColor_VolumeEffectField_.h>
#include <Modloader/app/structs/IEnumerable_1_AmplifyColor_VolumeEffect_.h>
#include <Modloader/app/structs/IEnumerable_1_AnimatedCritter_.h>
#include <Modloader/app/structs/IEnumerable_1_AreaMapCanvas_.h>
#include <Modloader/app/structs/IEnumerable_1_Atlas_.h>
#include <Modloader/app/structs/IEnumerable_1_CageStructureTool_Edge_.h>
#include <Modloader/app/structs/IEnumerable_1_CageStructureTool_Face_.h>
#include <Modloader/app/structs/IEnumerable_1_CageStructureTool_Vertex_.h>
#include <Modloader/app/structs/IEnumerable_1_CharacterState_.h>
#include <Modloader/app/structs/IEnumerable_1_CleverMenuItem_.h>
#include <Modloader/app/structs/IEnumerable_1_Core_Input_Button_.h>
#include <Modloader/app/structs/IEnumerable_1_DesiredUberStateBool_.h>
#include <Modloader/app/structs/IEnumerable_1_DesiredUberStateByte_.h>
#include <Modloader/app/structs/IEnumerable_1_DesiredUberStateFloat_.h>
#include <Modloader/app/structs/IEnumerable_1_DesiredUberStateInt_.h>
#include <Modloader/app/structs/IEnumerable_1_EntityPlaceholder_.h>
#include <Modloader/app/structs/IEnumerable_1_EquipmentType_.h>
#include <Modloader/app/structs/IEnumerable_1_FloatProviderZone_.h>
#include <Modloader/app/structs/IEnumerable_1_FrameProfiler_MetricInfo_.h>
#include <Modloader/app/structs/IEnumerable_1_FullSerializer_fsDataType_.h>
#include <Modloader/app/structs/IEnumerable_1_GameWorldArea_PlayerAbilityInfo_.h>
#include <Modloader/app/structs/IEnumerable_1_HierarchyPerfTest_HierarchyPerfTestsSceneRoot_.h>
#include <Modloader/app/structs/IEnumerable_1_HierarchyPerfTest_PerfTestTimer_TestData_.h>
#include <Modloader/app/structs/IEnumerable_1_IGhostFrameData_.h>
#include <Modloader/app/structs/IEnumerable_1_IRenderPostprocessor_.h>
#include <Modloader/app/structs/IEnumerable_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_.h>
#include <Modloader/app/structs/IEnumerable_1_JUnitReporter_Failure_.h>
#include <Modloader/app/structs/IEnumerable_1_JUnitReporter_TestCase_.h>
#include <Modloader/app/structs/IEnumerable_1_JUnitReporter_TestSuite_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValu_2_UberShaderPro_C_M_Ti_UberShaderAnimatorStrategySt_UberShaderAni_1_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValu_2_UberShaderPro_F_M_Ti_UberShaderAnimatorStrategySt_UberShaderAni_1_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValu_2_UberShaderPro_V_M_Ti_UberShaderAnimatorStrategySt_UberShaderAni_1_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_SeinEvent_SeinEventsDebugger_Entry_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_Int32Enum_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_Int32_System_ByteEnum_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_Int32_WorldMapAreaState_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_Object_System_Int32_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_Object_System_Single_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_Object_System_ValueTuple_2_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_String_PlayFab_DataModels_GetFileMetadata_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_String_System_Single_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_String_System_ValueTuple_2_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32_.h>
#include <Modloader/app/structs/IEnumerable_1_KeybindingCommandMapAsset_ExclusiveCommandList_.h>
#include <Modloader/app/structs/IEnumerable_1_KuState_.h>
#include <Modloader/app/structs/IEnumerable_1_LeaderboardData_Entry_.h>
#include <Modloader/app/structs/IEnumerable_1_LeaderboardTableUI_LeaderboardMetaData_.h>
#include <Modloader/app/structs/IEnumerable_1_LegacyEntity_.h>
#include <Modloader/app/structs/IEnumerable_1_LightCanvasEditorTextureCache_.h>
#include <Modloader/app/structs/IEnumerable_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_.h>
#include <Modloader/app/structs/IEnumerable_1_LightPriority_Layer_.h>
#include <Modloader/app/structs/IEnumerable_1_List_1_Moon_Entity_.h>
#include <Modloader/app/structs/IEnumerable_1_List_1_System_String_.h>
#include <Modloader/app/structs/IEnumerable_1_MainThreadLoadingDebugger_NotifyEntry_.h>
#include <Modloader/app/structs/IEnumerable_1_MenuTabEntry_.h>
#include <Modloader/app/structs/IEnumerable_1_MessageDescriptor_.h>
#include <Modloader/app/structs/IEnumerable_1_MicroProfilerGraph_MarkerCache_.h>
#include <Modloader/app/structs/IEnumerable_1_MicroProfilerInspector_MetricData_.h>
#include <Modloader/app/structs/IEnumerable_1_MistyWoodsKuroGameplayHideZone_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_ArtOptimization_SerializableUberShaderWrapper_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_CrossSceneReferenceExportData_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_CrossSceneReferenceImportData_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Driver_UpdateManager_Entry_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Entity_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_IEntityOwned_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Profile_Metric_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Race_LeaderBoardEntry_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_ScalableAnimationPlayer_ScalingInterval_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_SerializedBooleanUberState_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_SerializedIntUberState_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Telemetry_Performance_ProfilingSettings_Setting__1.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_TimeSlicer_ITimeSlicedJob_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Timeline_TimelineEntityRecord_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Timeline_TimelineMarkerRecord_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Wwise_ArtificialSoundHost_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Wwise_UberStateToWwiseData_DesiredConditionUberState_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_.h>
#include <Modloader/app/structs/IEnumerable_1_Newtonsof_Jso_Serializatio_JsonSerializerInternalReade_CreatorPropertyConte_.h>
#include <Modloader/app/structs/IEnumerable_1_Newtonsoft_Jso_Utilitie_ImmutableCollectionsUtil_ImmutableCollectionTypeInf_.h>
#include <Modloader/app/structs/IEnumerable_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_.h>
#include <Modloader/app/structs/IEnumerable_1_Newtonsoft_Json_JsonConverter_.h>
#include <Modloader/app/structs/IEnumerable_1_Newtonsoft_Json_JsonWriter_State_.h>
#include <Modloader/app/structs/IEnumerable_1_Newtonsoft_Json_Linq_JProperty_.h>
#include <Modloader/app/structs/IEnumerable_1_Newtonsoft_Json_Serialization_JsonProperty_.h>
#include <Modloader/app/structs/IEnumerable_1_OverridableColorProperty_.h>
#include <Modloader/app/structs/IEnumerable_1_OverridableFloatProperty_.h>
#include <Modloader/app/structs/IEnumerable_1_OverridableTextureProperty_.h>
#include <Modloader/app/structs/IEnumerable_1_PetrifiedOwlFeedingGrounds_PetrifiedOwlFeedingGroundHideZone_.h>
#include <Modloader/app/structs/IEnumerable_1_PlayFab_ClientModels_PlayerLeaderboardEntry_.h>
#include <Modloader/app/structs/IEnumerable_1_PlayFab_DataModels_GetFileMetadata_.h>
#include <Modloader/app/structs/IEnumerable_1_PlayFab_EventsModels_EventContents_.h>
#include <Modloader/app/structs/IEnumerable_1_PlayFab_PlayFabEmitEventRequest_.h>
#include <Modloader/app/structs/IEnumerable_1_ResolutionOptions_ResolutionEntry_.h>
#include <Modloader/app/structs/IEnumerable_1_RespawningPlaceholder_.h>
#include <Modloader/app/structs/IEnumerable_1_RuntimeQuest_.h>
#include <Modloader/app/structs/IEnumerable_1_RuntimeWorldMapIcon_.h>
#include <Modloader/app/structs/IEnumerable_1_SaveSlotInfo_.h>
#include <Modloader/app/structs/IEnumerable_1_SceneLoadingQueue_QueueSceneToLoad_.h>
#include <Modloader/app/structs/IEnumerable_1_SceneManagerScene_.h>
#include <Modloader/app/structs/IEnumerable_1_SceneMetaData_.h>
#include <Modloader/app/structs/IEnumerable_1_SeinEvent_.h>
#include <Modloader/app/structs/IEnumerable_1_SeinEventsDebugger_Entry_.h>
#include <Modloader/app/structs/IEnumerable_1_SmartInput_IButtonInput_.h>
#include <Modloader/app/structs/IEnumerable_1_SmartInput_ICachableInput_.h>
#include <Modloader/app/structs/IEnumerable_1_SmartInput_KeyCodeButtonInput_.h>
#include <Modloader/app/structs/IEnumerable_1_SpiritShardType_.h>
#include <Modloader/app/structs/IEnumerable_1_SurfaceMaterialObjectPair_1_.h>
#include <Modloader/app/structs/IEnumerable_1_SurfaceMaterialType_.h>
#include <Modloader/app/structs/IEnumerable_1_SystemIntegration_CacheData_.h>
#include <Modloader/app/structs/IEnumerable_1_SystemIntegration_Races_RaceEntry_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Attribute_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Boolean_.h>
#include <Modloader/app/structs/IEnumerable_1_System_ByteEnum_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Byte_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Byte__1.h>
#include <Modloader/app/structs/IEnumerable_1_System_Char_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Collections_DictionaryEntry_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Double_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Dynamic_DynamicMetaObject_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Func_1__1.h>
#include <Modloader/app/structs/IEnumerable_1_System_IO_FileInfo_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int32Enum_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int32_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int64_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_SwitchCase_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_IGrouping_2_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_IGrouping_2__1.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_IGrouping_2__2.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_IGrouping_2__3.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Reflection_Assembly_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Reflection_ConstructorInfo_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Reflection_FieldInfo_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Reflection_MemberInfo_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Reflection_MethodInfo_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Reflection_ParameterInfo_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Reflection_PropertyInfo_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Runtime_Serialization_EnumMemberAttribute_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Single_.h>
#include <Modloader/app/structs/IEnumerable_1_System_String_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Text_RegularExpressions_Match_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Threading_Thread_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Tuple_2__3.h>
#include <Modloader/app/structs/IEnumerable_1_System_Type_.h>
#include <Modloader/app/structs/IEnumerable_1_System_ValueTuple_2__2.h>
#include <Modloader/app/structs/IEnumerable_1_System_ValueTuple_2__4.h>
#include <Modloader/app/structs/IEnumerable_1_TextureAnimation_.h>
#include <Modloader/app/structs/IEnumerable_1_TriangleNet_Geometry_ISegment_.h>
#include <Modloader/app/structs/IEnumerable_1_TriangleNet_Geometry_ITriangle_.h>
#include <Modloader/app/structs/IEnumerable_1_TriangleNet_Geometry_Point_.h>
#include <Modloader/app/structs/IEnumerable_1_TriangleNet_Topology_Triangle_.h>
#include <Modloader/app/structs/IEnumerable_1_UberPoolGroupWarmer_.h>
#include <Modloader/app/structs/IEnumerable_1_UberPoolGroupWarmer_PrewarmItem_.h>
#include <Modloader/app/structs/IEnumerable_1_UberPoolPerfTestSettings_.h>
#include <Modloader/app/structs/IEnumerable_1_UberShaderComponent_.h>
#include <Modloader/app/structs/IEnumerable_1_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEng_Network_PlayerConnect_PlayerEditorConnectionEve_MessageTypeSubscri_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Component_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_KeyCode_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_MonoBehaviour_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_SkinnedMeshRenderer_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_UI_Toggle_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Yoga_YogaNode_.h>
#include <Modloader/app/structs/IEnumerable_1_WeakPrefab_.h>
#include <Modloader/app/structs/IEnumerable_1_WotwUberStateToWwiseData_AbilityRequirementCondition_.h>
#include <Modloader/app/structs/IEnumerable_1_XGamingRuntime_XGameSaveBlobInfo_.h>
#include <Modloader/app/structs/IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromise_.h>
#include <Modloader/app/structs/IEnumerable_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_.h>
#include <Modloader/app/structs/IEnumerable_1_frameworks_loading_Prewarmers_IPrewarmOperation_.h>
#include <Modloader/app/structs/IEqualityComparer_1_KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/IEqualityComparer_1_ResolutionOptions_ResolutionEntry_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Char_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Int32Enum_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Int32_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Object_.h>
#include <Modloader/app/structs/IOrderedEnumerable_1_MicroProfilerInspector_MetricData_.h>
#include <Modloader/app/structs/IOrderedEnumerable_1_Moon_Race_LeaderBoardEntry_.h>
#include <Modloader/app/structs/IOrderedEnumerable_1_Moon_TimeSlicer_ITimeSlicedJob_.h>
#include <Modloader/app/structs/IOrderedEnumerable_1_Newtonsoft_Json_Serialization_JsonProperty_.h>
#include <Modloader/app/structs/IOrderedEnumerable_1_SeinEventsDebugger_Entry_.h>
#include <Modloader/app/structs/IOrderedEnumerable_1_SystemIntegration_Races_RaceEntry_.h>
#include <Modloader/app/structs/IOrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2_.h>
#include <Modloader/app/structs/IOrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2__1.h>
#include <Modloader/app/structs/IOrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2__2.h>
#include <Modloader/app/structs/IOrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2__3.h>
#include <Modloader/app/structs/IOrderedEnumerable_1_System_IO_FileInfo_.h>
#include <Modloader/app/structs/IOrderedEnumerable_1_System_Int32_.h>
#include <Modloader/app/structs/IOrderedEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/IOrderedEnumerable_1_System_Tuple_2_.h>
#include <Modloader/app/structs/IOrderedEnumerable_1_frameworks_loading_Prewarmers_IPrewarmOperation_.h>
#include <Modloader/app/structs/IPrewarmOperation.h>
#include <Modloader/app/structs/IPromise.h>
#include <Modloader/app/structs/IPromise__Array.h>
#include <Modloader/app/structs/ITriangle__Array.h>
#include <Modloader/app/structs/ImmutableCollectionsUtils_ImmutableCollectionTypeInfo.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/Int32Enum__Enum__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Int64__Array.h>
#include <Modloader/app/structs/JsonConverter__Array.h>
#include <Modloader/app/structs/KeyCode__Enum.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Int32___Array.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32___Array.h>
#include <Modloader/app/structs/LeaderBoardEntry.h>
#include <Modloader/app/structs/LeaderboardData_Entry__Array.h>
#include <Modloader/app/structs/LeaderboardTableUI_LeaderboardMetaData.h>
#include <Modloader/app/structs/LightCanvasEditorTextureCache.h>
#include <Modloader/app/structs/LightPriority_Layer__Enum.h>
#include <Modloader/app/structs/List_1_AnimatedCritter_.h>
#include <Modloader/app/structs/List_1_CageStructureTool_Edge_.h>
#include <Modloader/app/structs/List_1_CageStructureTool_Vertex_.h>
#include <Modloader/app/structs/List_1_CharacterState_.h>
#include <Modloader/app/structs/List_1_CleverMenuItem_.h>
#include <Modloader/app/structs/List_1_DesiredUberStateBool_.h>
#include <Modloader/app/structs/List_1_DesiredUberStateByte_.h>
#include <Modloader/app/structs/List_1_DesiredUberStateFloat_.h>
#include <Modloader/app/structs/List_1_DesiredUberStateInt_.h>
#include <Modloader/app/structs/List_1_EntityPlaceholder_.h>
#include <Modloader/app/structs/List_1_EquipmentType_.h>
#include <Modloader/app/structs/List_1_KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/List_1_KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry_.h>
#include <Modloader/app/structs/List_1_KeybindingCommandMapAsset_ExclusiveCommandList_.h>
#include <Modloader/app/structs/List_1_KuState_.h>
#include <Modloader/app/structs/List_1_LegacyEntity_.h>
#include <Modloader/app/structs/List_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_.h>
#include <Modloader/app/structs/List_1_MessageDescriptor_.h>
#include <Modloader/app/structs/List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_.h>
#include <Modloader/app/structs/List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_.h>
#include <Modloader/app/structs/List_1_Moon_CrossSceneReferenceExportData_.h>
#include <Modloader/app/structs/List_1_Moon_CrossSceneReferenceImportData_.h>
#include <Modloader/app/structs/List_1_Moon_Entity_.h>
#include <Modloader/app/structs/List_1_Moon_Entity___Array.h>
#include <Modloader/app/structs/List_1_Moon_IEntityOwned_.h>
#include <Modloader/app/structs/List_1_Moon_Race_LeaderBoardEntry_.h>
#include <Modloader/app/structs/List_1_Moon_SerializedBooleanUberState_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_TimelineEntityRecord_.h>
#include <Modloader/app/structs/List_1_Moon_Wwise_UberStateToWwiseData_DesiredConditionUberState_.h>
#include <Modloader/app/structs/List_1_Newtonsoft_Json_JsonWriter_State_.h>
#include <Modloader/app/structs/List_1_Newtonsoft_Json_Serialization_JsonProperty_.h>
#include <Modloader/app/structs/List_1_PlayFab_EventsModels_EventContents_.h>
#include <Modloader/app/structs/List_1_ResolutionOptions_ResolutionEntry_.h>
#include <Modloader/app/structs/List_1_RespawningPlaceholder_.h>
#include <Modloader/app/structs/List_1_RuntimeQuest_.h>
#include <Modloader/app/structs/List_1_RuntimeWorldMapIcon_.h>
#include <Modloader/app/structs/List_1_SmartInput_IButtonInput_.h>
#include <Modloader/app/structs/List_1_SurfaceMaterialObjectPair_1_.h>
#include <Modloader/app/structs/List_1_SystemIntegration_Races_RaceEntry_.h>
#include <Modloader/app/structs/List_1_System_ByteEnum_.h>
#include <Modloader/app/structs/List_1_System_Int32Enum_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/List_1_System_Reflection_MemberInfo_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/List_1_System_String___Array.h>
#include <Modloader/app/structs/List_1_System_ValueTuple_2__2.h>
#include <Modloader/app/structs/List_1_System_ValueTuple_2__3.h>
#include <Modloader/app/structs/List_1_UberPoolGroupWarmer_.h>
#include <Modloader/app/structs/List_1_UberPoolPerfTestSettings_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Component_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_.h>
#include <Modloader/app/structs/List_1_UnityEngine_SkinnedMeshRenderer_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/List_1_WotwUberStateToWwiseData_AbilityRequirementCondition_.h>
#include <Modloader/app/structs/List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/MemoryLabelDebugger_MemoryLabelAllocationCache.h>
#include <Modloader/app/structs/MenuTabEntry.h>
#include <Modloader/app/structs/MessageDescriptor.h>
#include <Modloader/app/structs/MessageDescriptor__Array.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Metric__Enum.h>
#include <Modloader/app/structs/MicroProfilerGraph_MarkerCache.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/PlayerEditorConnectionEvents_MessageTypeSubscribers.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/PropertyInfo_1.h>
#include <Modloader/app/structs/Rect__Array.h>
#include <Modloader/app/structs/ScalableAnimationPlayer_ScalingInterval.h>
#include <Modloader/app/structs/SceneManagerScene.h>
#include <Modloader/app/structs/SpiritShardType__Enum__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum__Array.h>
#include <Modloader/app/structs/Thread__Array.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>
#include <Modloader/app/structs/Triangle__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Linq::Enumerable {
    IL2CPP_REGISTER_METHOD(0x01F9A6C0, app::IEnumerable_1_System_Int32_*, Range, int32_t start, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01F9A780, app::IEnumerable_1_System_Int32_*, RangeIterator, int32_t start, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01F9A920, int32_t, Sum_1, app::IEnumerable_1_System_Int32_* source)
    IL2CPP_REGISTER_METHOD(0x01F9AAF0, int64_t, Sum_2, app::IEnumerable_1_System_Int64_* source)
    IL2CPP_REGISTER_METHOD(0x01F9ACE0, double, Sum_3, app::IEnumerable_1_System_Double_* source)
    IL2CPP_REGISTER_METHOD(0x01F9AED0, float, Min_1, app::IEnumerable_1_System_Single_* source)
    IL2CPP_REGISTER_METHOD(0x01F9B150, float, Max_1, app::IEnumerable_1_System_Single_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_System_Object_*,
        Where_1,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_System_Object_*,
        Select_1,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_Object_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7B4A0,
        app::IEnumerable_1_System_Object_*,
        Select_2,
        app::IEnumerable_1_System_Object_* source,
        app::Func_3_Object_Int32_Object_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7CE80,
        app::IEnumerable_1_System_Object_*,
        SelectIterator,
        app::IEnumerable_1_System_Object_* source,
        app::Func_3_Object_Int32_Object_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x02653EF0,
        app::Func_2_Object_Boolean_*,
        CombinePredicates_1,
        app::Func_2_Object_Boolean_* predicate1,
        app::Func_2_Object_Boolean_* predicate2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_Object_Object_*,
        CombineSelectors_1,
        app::Func_2_Object_Object_* selector1,
        app::Func_2_Object_Object_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7CFB0,
        app::IEnumerable_1_System_Object_*,
        SelectMany_1,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_System_Collections_Generic_IEnumerable_1_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7D170,
        app::IEnumerable_1_System_Object_*,
        SelectManyIterator_1,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_System_Collections_Generic_IEnumerable_1_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7D090,
        app::IEnumerable_1_System_Object_*,
        SelectMany_2,
        app::IEnumerable_1_System_Object_* source,
        app::Func_3_Object_Int32_System_Collections_Generic_IEnumerable_1_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7CE80,
        app::IEnumerable_1_System_Object_*,
        SelectManyIterator_2,
        app::IEnumerable_1_System_Object_* source,
        app::Func_3_Object_Int32_System_Collections_Generic_IEnumerable_1_* selector
    )
    IL2CPP_REGISTER_METHOD(0x00E7E060, app::IEnumerable_1_System_Object_*, Take_1, app::IEnumerable_1_System_Object_* source, int32_t count)
    IL2CPP_REGISTER_METHOD(0x00E7E120, app::IEnumerable_1_System_Object_*, TakeIterator_1, app::IEnumerable_1_System_Object_* source, int32_t count)
    IL2CPP_REGISTER_METHOD(0x00E7DCF0, app::IEnumerable_1_System_Object_*, Skip_1, app::IEnumerable_1_System_Object_* source, int32_t count)
    IL2CPP_REGISTER_METHOD(0x00E7DDB0, app::IEnumerable_1_System_Object_*, SkipIterator_1, app::IEnumerable_1_System_Object_* source, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x0153D1E0,
        app::IOrderedEnumerable_1_System_Object_*,
        OrderBy_1,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_Object_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D300,
        app::IOrderedEnumerable_1_System_Object_*,
        OrderByDescending_1,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_Object_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D570,
        app::IOrderedEnumerable_1_System_Object_*,
        ThenBy_1,
        app::IOrderedEnumerable_1_System_Object_* source,
        app::Func_2_Object_Object_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0156BF20,
        app::IEnumerable_1_System_Linq_IGrouping_2_*,
        GroupBy_1,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_Object_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7D500,
        app::IEnumerable_1_System_Object_*,
        Concat_1,
        app::IEnumerable_1_System_Object_* first,
        app::IEnumerable_1_System_Object_* second
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7D170,
        app::IEnumerable_1_System_Object_*,
        ConcatIterator,
        app::IEnumerable_1_System_Object_* first,
        app::IEnumerable_1_System_Object_* second
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7D5E0,
        app::IEnumerable_1_System_Object_*,
        Distinct_1,
        app::IEnumerable_1_System_Object_* source,
        app::IEqualityComparer_1_System_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7D6A0,
        app::IEnumerable_1_System_Object_*,
        DistinctIterator,
        app::IEnumerable_1_System_Object_* source,
        app::IEqualityComparer_1_System_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7E340,
        app::IEnumerable_1_System_Object_*,
        Union_1,
        app::IEnumerable_1_System_Object_* first,
        app::IEnumerable_1_System_Object_* second
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7E560,
        app::IEnumerable_1_System_Object_*,
        UnionIterator_1,
        app::IEnumerable_1_System_Object_* first,
        app::IEnumerable_1_System_Object_* second,
        app::IEqualityComparer_1_System_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7D7D0,
        app::IEnumerable_1_System_Object_*,
        Except_1,
        app::IEnumerable_1_System_Object_* first,
        app::IEnumerable_1_System_Object_* second
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7D8C0,
        app::IEnumerable_1_System_Object_*,
        ExceptIterator,
        app::IEnumerable_1_System_Object_* first,
        app::IEnumerable_1_System_Object_* second,
        app::IEqualityComparer_1_System_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x00E7DAB0, app::IEnumerable_1_System_Object_*, Reverse_1, app::IEnumerable_1_System_Object_* source)
    IL2CPP_REGISTER_METHOD(0x00E78530, app::IEnumerable_1_System_Object_*, ReverseIterator_1, app::IEnumerable_1_System_Object_* source)
    IL2CPP_REGISTER_METHOD(0x01567630, bool, SequenceEqual_1, app::IEnumerable_1_System_Object_* first, app::IEnumerable_1_System_Object_* second)
    IL2CPP_REGISTER_METHOD(
        0x015679F0,
        bool,
        SequenceEqual_2,
        app::IEnumerable_1_System_Object_* first,
        app::IEnumerable_1_System_Object_* second,
        app::IEqualityComparer_1_System_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x01583BA0, app::Object__Array*, ToArray_1, app::IEnumerable_1_System_Object_* source)
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_System_Object_*, ToList_1, app::IEnumerable_1_System_Object_* source)
    IL2CPP_REGISTER_METHOD(
        0x0156BEC0,
        app::Dictionary_2_System_Object_System_Object_*,
        ToDictionary_1,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_Object_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E77A20,
        app::Dictionary_2_System_Object_System_Object_*,
        ToDictionary_2,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_Object_* key_selector,
        app::Func_2_Object_Object_* element_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0156BB50,
        app::Dictionary_2_System_Object_System_Object_*,
        ToDictionary_3,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_Object_* key_selector,
        app::Func_2_Object_Object_* element_selector,
        app::IEqualityComparer_1_System_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x00E78230, app::IEnumerable_1_System_Object_*, Cast_1, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(0x00E78530, app::IEnumerable_1_System_Object_*, CastIterator_1, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(0x01580F60, app::Object*, First_1, app::IEnumerable_1_System_Object_* source)
    IL2CPP_REGISTER_METHOD(0x015811F0, app::Object*, First_2, app::IEnumerable_1_System_Object_* source, app::Func_2_Object_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(0x01581670, app::Object*, FirstOrDefault_1, app::IEnumerable_1_System_Object_* source)
    IL2CPP_REGISTER_METHOD(0x015818F0, app::Object*, FirstOrDefault_2, app::IEnumerable_1_System_Object_* source, app::Func_2_Object_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(0x01581F20, app::Object*, Last_1, app::IEnumerable_1_System_Object_* source)
    IL2CPP_REGISTER_METHOD(0x015822A0, app::Object*, LastOrDefault_1, app::IEnumerable_1_System_Object_* source, app::Func_2_Object_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(0x01582520, app::Object*, Single_1, app::IEnumerable_1_System_Object_* source)
    IL2CPP_REGISTER_METHOD(0x01582800, app::Object*, Single_2, app::IEnumerable_1_System_Object_* source, app::Func_2_Object_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(0x01582AC0, app::Object*, SingleOrDefault_1, app::IEnumerable_1_System_Object_* source)
    IL2CPP_REGISTER_METHOD(0x01582D90, app::Object*, SingleOrDefault_2, app::IEnumerable_1_System_Object_* source, app::Func_2_Object_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(0x00E78860, app::IEnumerable_1_System_Object_*, Repeat_1, app::Object* element, int32_t count)
    IL2CPP_REGISTER_METHOD(0x00E78B70, app::IEnumerable_1_System_Object_*, RepeatIterator_1, app::Object* element, int32_t count)
    IL2CPP_REGISTER_METHOD(0x00E78640, app::IEnumerable_1_System_Object_*, Empty_1, )
    IL2CPP_REGISTER_METHOD(0x01566870, bool, Any_1, app::IEnumerable_1_System_Object_* source)
    IL2CPP_REGISTER_METHOD(0x01566A30, bool, Any_2, app::IEnumerable_1_System_Object_* source, app::Func_2_Object_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(0x01565DF0, bool, All_1, app::IEnumerable_1_System_Object_* source, app::Func_2_Object_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(0x0209E460, int32_t, Count_1, app::IEnumerable_1_System_Object_* source)
    IL2CPP_REGISTER_METHOD(0x0209E6C0, int32_t, Count_2, app::IEnumerable_1_System_Object_* source, app::Func_2_Object_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(0x01567310, bool, Contains_1, app::IEnumerable_1_System_Object_* source, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x015673C0,
        bool,
        Contains_2,
        app::IEnumerable_1_System_Object_* source,
        app::Object* value,
        app::IEqualityComparer_1_System_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x0157EA70,
        app::Object*,
        Aggregate_1,
        app::IEnumerable_1_System_Object_* source,
        app::Object* seed,
        app::Func_3_Object_Object_Object_* func
    )
    IL2CPP_REGISTER_METHOD(0x0209E910, int32_t, Sum_4, app::IEnumerable_1_System_Object_* source, app::Func_2_Object_Int32_* selector)
    IL2CPP_REGISTER_METHOD(0x0153E9A0, float, Min_2, app::IEnumerable_1_System_Object_* source, app::Func_2_Object_Single_* selector)
    IL2CPP_REGISTER_METHOD(0x0153E980, float, Max_2, app::IEnumerable_1_System_Object_* source, app::Func_2_Object_Single_* selector)
    IL2CPP_REGISTER_METHOD(0x01581F20, app::Expression*, Last_2, app::IEnumerable_1_System_Linq_Expressions_Expression_* source)
    IL2CPP_REGISTER_METHOD(0x01583BA0, app::Expression__Array*, ToArray_2, app::IEnumerable_1_System_Linq_Expressions_Expression_* source)
    IL2CPP_REGISTER_METHOD(0x01566A30, bool, Any_3, app::IEnumerable_1_System_Type_* source, app::Func_2_Type_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(
        0x01565DF0,
        bool,
        All_2,
        app::IEnumerable_1_System_Linq_Expressions_SwitchCase_* source,
        app::Func_2_System_Linq_Expressions_SwitchCase_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x01565DF0,
        bool,
        All_3,
        app::IEnumerable_1_System_Linq_Expressions_Expression_* source,
        app::Func_2_System_Linq_Expressions_Expression_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x01566A30,
        bool,
        Any_4,
        app::IEnumerable_1_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_* source,
        app::Func_2_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_*,
        Where_2,
        app::IEnumerable_1_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_* source,
        app::Func_2_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x01566870,
        bool,
        Any_5,
        app::IEnumerable_1_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x01582D90,
        app::PlayerEditorConnectionEvents_MessageTypeSubscribers*,
        SingleOrDefault_3,
        app::IEnumerable_1_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_* source,
        app::Func_2_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x01EBAA40,
        app::List_1_Moon_CrossSceneReferenceExportData_*,
        ToList_2,
        app::IEnumerable_1_Moon_CrossSceneReferenceExportData_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x01EBAA40,
        app::List_1_Moon_CrossSceneReferenceImportData_*,
        ToList_3,
        app::IEnumerable_1_Moon_CrossSceneReferenceImportData_* source
    )
    IL2CPP_REGISTER_METHOD(0x00E78230, app::IEnumerable_1_TriangleNet_Geometry_Point_*, Cast_2, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(0x01583BA0, app::ITriangle__Array*, ToArray_3, app::IEnumerable_1_TriangleNet_Geometry_ITriangle_* source)
    IL2CPP_REGISTER_METHOD(0x00E78230, app::IEnumerable_1_TriangleNet_Geometry_ISegment_*, Cast_3, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(0x01583BA0, app::Triangle__Array*, ToArray_4, app::IEnumerable_1_TriangleNet_Topology_Triangle_* source)
    IL2CPP_REGISTER_METHOD(0x00E7F9D0, app::IEnumerable_1_System_Type_*, Where_3, app::IEnumerable_1_System_Type_* source, app::Func_2_Type_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(0x01583BA0, app::Type__Array*, ToArray_5, app::IEnumerable_1_System_Type_* source)
    IL2CPP_REGISTER_METHOD(0x0153E9A0, float, Min_3, app::IEnumerable_1_UnityEngine_Rect_* source, app::Func_2_UnityEngine_Rect_Single_* selector)
    IL2CPP_REGISTER_METHOD(0x0153E980, float, Max_3, app::IEnumerable_1_UnityEngine_Rect_* source, app::Func_2_UnityEngine_Rect_Single_* selector)
    IL2CPP_REGISTER_METHOD(0x00E78640, app::IEnumerable_1_UnityEngine_Yoga_YogaNode_*, Empty_2, )
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_UnityEngine_UI_Toggle_*,
        Where_4,
        app::IEnumerable_1_UnityEngine_UI_Toggle_* source,
        app::Func_2_UnityEngine_UI_Toggle_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_FrameProfiler_MetricInfo_*,
        Where_5,
        app::IEnumerable_1_FrameProfiler_MetricInfo_* source,
        app::Func_2_FrameProfiler_MetricInfo_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01566870, bool, Any_6, app::IEnumerable_1_FrameProfiler_MetricInfo_* source)
    IL2CPP_REGISTER_METHOD(0x01580F60, app::FrameProfiler_MetricInfo*, First_3, app::IEnumerable_1_FrameProfiler_MetricInfo_* source)
    IL2CPP_REGISTER_METHOD(
        0x01EBAD60,
        app::List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_*,
        ToList_4,
        app::IEnumerable_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x0209E6C0,
        int32_t,
        Count_3,
        app::IEnumerable_1_Moon_Driver_UpdateManager_Entry_* source,
        app::Func_2_Moon_Driver_UpdateManager_Entry_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x01583520,
        app::KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32___Array*,
        ToArray_6,
        app::IEnumerable_1_KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x00E791A0,
        app::IEnumerable_1_System_String_*,
        Select_3,
        app::IEnumerable_1_KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_String_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7DCF0,
        app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_*,
        Skip_2,
        app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_* source,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_System_String_*,
        Select_4,
        app::IEnumerable_1_System_Type_* source,
        app::Func_2_Type_String_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7CFB0,
        app::IEnumerable_1_System_Type_*,
        SelectMany_3,
        app::IEnumerable_1_System_Reflection_Assembly_* source,
        app::Func_2_System_Reflection_Assembly_System_Collections_Generic_IEnumerable_1_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x01581F20,
        app::ScalableAnimationPlayer_ScalingInterval*,
        Last_3,
        app::IEnumerable_1_Moon_ScalableAnimationPlayer_ScalingInterval_* source
    )
    IL2CPP_REGISTER_METHOD(0x00E78070, app::IEnumerable_1_System_Int32_*, Cast_4, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(0x015836C0, app::Int32__Array*, ToArray_7, app::IEnumerable_1_System_Int32_* source)
    IL2CPP_REGISTER_METHOD(0x01566870, bool, Any_7, app::IEnumerable_1_Moon_Timeline_TimelineEntityRecord_* source)
    IL2CPP_REGISTER_METHOD(
        0x01EBAA40,
        app::List_1_Moon_Timeline_TimelineEntityRecord_*,
        ToList_5,
        app::IEnumerable_1_Moon_Timeline_TimelineEntityRecord_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x015818F0,
        app::TimelineEntityRecord*,
        FirstOrDefault_3,
        app::IEnumerable_1_Moon_Timeline_TimelineEntityRecord_* source,
        app::Func_2_Moon_Timeline_TimelineEntityRecord_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x01566A30,
        bool,
        Any_8,
        app::IEnumerable_1_Moon_Timeline_TimelineEntityRecord_* source,
        app::Func_2_Moon_Timeline_TimelineEntityRecord_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x01566A30,
        bool,
        Any_9,
        app::IEnumerable_1_Moon_Timeline_TimelineMarkerRecord_* source,
        app::Func_2_Moon_Timeline_TimelineMarkerRecord_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x01582800,
        app::DiscriminatedUnionConverter_UnionCase*,
        Single_3,
        app::IEnumerable_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_* source,
        app::Func_2_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x01582D90,
        app::DiscriminatedUnionConverter_UnionCase*,
        SingleOrDefault_4,
        app::IEnumerable_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_* source,
        app::Func_2_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_Newtonsoft_Json_JsonWriter_State_*, ToList_6, app::IEnumerable_1_Newtonsoft_Json_JsonWriter_State_* source)
    IL2CPP_REGISTER_METHOD(0x00E78230, app::IEnumerable_1_Newtonsoft_Json_Linq_JProperty_*, Cast_5, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_System_String_*,
        Select_5,
        app::IEnumerable_1_Newtonsoft_Json_Linq_JProperty_* source,
        app::Func_2_Newtonsoft_Json_Linq_JProperty_String_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_System_Reflection_MemberInfo_*,
        Where_6,
        app::IEnumerable_1_System_Reflection_MemberInfo_* source,
        app::Func_2_System_Reflection_MemberInfo_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_System_Reflection_MemberInfo_*, ToList_7, app::IEnumerable_1_System_Reflection_MemberInfo_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7CFB0,
        app::IEnumerable_1_System_Reflection_MemberInfo_*,
        SelectMany_4,
        app::IEnumerable_1_System_Type_* source,
        app::Func_2_Type_System_Collections_Generic_IEnumerable_1_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x015822A0,
        app::MemberInfo_1*,
        LastOrDefault_2,
        app::IEnumerable_1_System_Reflection_MemberInfo_* source,
        app::Func_2_System_Reflection_MemberInfo_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01580F60, app::ConstructorInfo*, First_4, app::IEnumerable_1_System_Reflection_ConstructorInfo_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_System_Reflection_ConstructorInfo_*,
        Where_7,
        app::IEnumerable_1_System_Reflection_ConstructorInfo_* source,
        app::Func_2_System_Reflection_ConstructorInfo_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D1E0,
        app::IOrderedEnumerable_1_Newtonsoft_Json_Serialization_JsonProperty_*,
        OrderBy_2,
        app::IEnumerable_1_Newtonsoft_Json_Serialization_JsonProperty_* source,
        app::Func_2_Newtonsoft_Json_Serialization_JsonProperty_Int32_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x01EBAA40,
        app::List_1_Newtonsoft_Json_Serialization_JsonProperty_*,
        ToList_8,
        app::IEnumerable_1_Newtonsoft_Json_Serialization_JsonProperty_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_System_String_*,
        Select_6,
        app::IEnumerable_1_Newtonsoft_Json_Serialization_JsonProperty_* source,
        app::Func_2_Newtonsoft_Json_Serialization_JsonProperty_String_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x01565DF0,
        bool,
        All_4,
        app::IEnumerable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_* source,
        app::Func_2_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x00E77A20,
        app::Dictionary_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_*,
        ToDictionary_4,
        app::IEnumerable_1_Newtonsoft_Json_Serialization_JsonProperty_* source,
        app::Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonProperty_* key_selector,
        app::Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_* element_selector
    )
    IL2CPP_REGISTER_METHOD(0x01583BA0, app::JsonConverter__Array*, ToArray_8, app::IEnumerable_1_Newtonsoft_Json_JsonConverter_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_System_Type_*,
        Select_7,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_Type_* selector
    )
    IL2CPP_REGISTER_METHOD(0x00E78230, app::IEnumerable_1_System_Runtime_Serialization_EnumMemberAttribute_*, Cast_6, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_System_String_*,
        Select_8,
        app::IEnumerable_1_System_Runtime_Serialization_EnumMemberAttribute_* source,
        app::Func_2_System_Runtime_Serialization_EnumMemberAttribute_String_* selector
    )
    IL2CPP_REGISTER_METHOD(0x01582AC0, app::String*, SingleOrDefault_5, app::IEnumerable_1_System_String_* source)
    IL2CPP_REGISTER_METHOD(
        0x015818F0,
        app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo*,
        FirstOrDefault_4,
        app::IEnumerable_1_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo_* source,
        app::Func_2_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x015818F0,
        app::MethodInfo_1*,
        FirstOrDefault_5,
        app::IEnumerable_1_System_Reflection_MethodInfo_* source,
        app::Func_2_System_Reflection_MethodInfo_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7E250,
        app::IEnumerable_1_System_Char_*,
        Union_2,
        app::IEnumerable_1_System_Char_* first,
        app::IEnumerable_1_System_Char_* second
    )
    IL2CPP_REGISTER_METHOD(0x01582520, app::MemberInfo_1*, Single_4, app::IEnumerable_1_System_Reflection_MemberInfo_* source)
    IL2CPP_REGISTER_METHOD(
        0x01582D90,
        app::ConstructorInfo*,
        SingleOrDefault_6,
        app::IEnumerable_1_System_Reflection_ConstructorInfo_* source,
        app::Func_2_System_Reflection_ConstructorInfo_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x0156BF20,
        app::IEnumerable_1_System_Linq_IGrouping_2__1*,
        GroupBy_2,
        app::IEnumerable_1_System_Reflection_MemberInfo_* source,
        app::Func_2_System_Reflection_MemberInfo_String_* key_selector
    )
    IL2CPP_REGISTER_METHOD(0x0209E460, int32_t, Count_4, app::IEnumerable_1_System_Reflection_MemberInfo_* source)
    IL2CPP_REGISTER_METHOD(0x01580F60, app::MemberInfo_1*, First_5, app::IEnumerable_1_System_Reflection_MemberInfo_* source)
    IL2CPP_REGISTER_METHOD(
        0x01566A30,
        bool,
        Any_10,
        app::IEnumerable_1_System_Reflection_MemberInfo_* source,
        app::Func_2_System_Reflection_MemberInfo_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x00E78230, app::IEnumerable_1_System_Attribute_*, Cast_7, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(0x01583BA0, app::Attribute__Array*, ToArray_9, app::IEnumerable_1_System_Attribute_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_System_Type_*,
        Select_9,
        app::IEnumerable_1_System_Reflection_ParameterInfo_* source,
        app::Func_2_System_Reflection_ParameterInfo_Type_* selector
    )
    IL2CPP_REGISTER_METHOD(0x01582AC0, app::MemberInfo_1*, SingleOrDefault_7, app::IEnumerable_1_System_Reflection_MemberInfo_* source)
    IL2CPP_REGISTER_METHOD(0x00E78230, app::IEnumerable_1_System_Reflection_FieldInfo_*, Cast_8, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_System_Reflection_FieldInfo_*,
        Where_8,
        app::IEnumerable_1_System_Reflection_FieldInfo_* source,
        app::Func_2_System_Reflection_FieldInfo_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x01566A30,
        bool,
        Any_11,
        app::IEnumerable_1_System_Reflection_MethodInfo_* source,
        app::Func_2_System_Reflection_MethodInfo_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01566870, bool, Any_12, app::IEnumerable_1_System_Reflection_ParameterInfo_* source)
    IL2CPP_REGISTER_METHOD(0x01566870, bool, Any_13, app::IEnumerable_1_System_String_* source)
    IL2CPP_REGISTER_METHOD(0x01580F60, app::String*, First_6, app::IEnumerable_1_System_String_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_System_Text_RegularExpressions_Match_*,
        Select_10,
        app::IEnumerable_1_System_String_* source,
        app::Func_2_String_System_Text_RegularExpressions_Match_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_System_Text_RegularExpressions_Match_*,
        Where_9,
        app::IEnumerable_1_System_Text_RegularExpressions_Match_* source,
        app::Func_2_System_Text_RegularExpressions_Match_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_System_String_*,
        Select_11,
        app::IEnumerable_1_HierarchyPerfTest_PerfTestTimer_TestData_* source,
        app::Func_2_HierarchyPerfTest_PerfTestTimer_TestData_String_* selector
    )
    IL2CPP_REGISTER_METHOD(0x00E78860, app::IEnumerable_1_System_String_*, Repeat_2, app::String* element, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x00E7D500,
        app::IEnumerable_1_System_String_*,
        Concat_2,
        app::IEnumerable_1_System_String_* first,
        app::IEnumerable_1_System_String_* second
    )
    IL2CPP_REGISTER_METHOD(0x01583BA0, app::String__Array*, ToArray_10, app::IEnumerable_1_System_String_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_UnityEngine_GameObject_*,
        Select_12,
        app::IEnumerable_1_HierarchyPerfTest_HierarchyPerfTestsSceneRoot_* source,
        app::Func_2_HierarchyPerfTest_HierarchyPerfTestsSceneRoot_UnityEngine_GameObject_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_UnityEngine_Transform_*,
        Select_13,
        app::IEnumerable_1_UnityEngine_GameObject_* source,
        app::Func_2_UnityEngine_GameObject_UnityEngine_Transform_* selector
    )
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_UnityEngine_Transform_*, ToList_9, app::IEnumerable_1_UnityEngine_Transform_* source)
    IL2CPP_REGISTER_METHOD(0x01583BA0, app::Thread__Array*, ToArray_11, app::IEnumerable_1_System_Threading_Thread_* source)
    IL2CPP_REGISTER_METHOD(0x00E78230, app::IEnumerable_1_PlayFab_PlayFabEmitEventRequest_*, Cast_9, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_PlayFab_EventsModels_EventContents_*,
        Select_14,
        app::IEnumerable_1_PlayFab_PlayFabEmitEventRequest_* source,
        app::Func_2_PlayFab_PlayFabEmitEventRequest_PlayFab_EventsModels_EventContents_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x01EBAA40,
        app::List_1_PlayFab_EventsModels_EventContents_*,
        ToList_10,
        app::IEnumerable_1_PlayFab_EventsModels_EventContents_* source
    )
    IL2CPP_REGISTER_METHOD(0x015818F0, app::String*, FirstOrDefault_6, app::IEnumerable_1_System_String_* source, app::Func_2_String_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_DesiredUberStateBool_*, ToList_11, app::IEnumerable_1_DesiredUberStateBool_* source)
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_DesiredUberStateInt_*, ToList_12, app::IEnumerable_1_DesiredUberStateInt_* source)
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_DesiredUberStateFloat_*, ToList_13, app::IEnumerable_1_DesiredUberStateFloat_* source)
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_DesiredUberStateByte_*, ToList_14, app::IEnumerable_1_DesiredUberStateByte_* source)
    IL2CPP_REGISTER_METHOD(
        0x01EBAA40,
        app::List_1_Moon_Wwise_UberStateToWwiseData_DesiredConditionUberState_*,
        ToList_15,
        app::IEnumerable_1_Moon_Wwise_UberStateToWwiseData_DesiredConditionUberState_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x0209E6C0,
        int32_t,
        Count_5,
        app::IEnumerable_1_Moon_Wwise_ArtificialSoundHost_* source,
        app::Func_2_Moon_Wwise_ArtificialSoundHost_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_UnityEngine_Component_*,
        Where_10,
        app::IEnumerable_1_UnityEngine_Component_* source,
        app::Func_2_UnityEngine_Component_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01583BA0, app::Component_1__Array*, ToArray_12, app::IEnumerable_1_UnityEngine_Component_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_System_String_*,
        Select_15,
        app::IEnumerable_1_AmplifyColor_VolumeEffectComponent_* source,
        app::Func_2_AmplifyColor_VolumeEffectComponent_String_* selector
    )
    IL2CPP_REGISTER_METHOD(0x01583BA0, app::FieldInfo_1__Array*, ToArray_13, app::IEnumerable_1_System_Reflection_FieldInfo_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_System_String_*,
        Select_16,
        app::IEnumerable_1_AmplifyColor_VolumeEffectField_* source,
        app::Func_2_AmplifyColor_VolumeEffectField_String_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_AmplifyColor_VolumeEffectFieldFlags_*,
        Where_11,
        app::IEnumerable_1_AmplifyColor_VolumeEffectFieldFlags_* source,
        app::Func_2_AmplifyColor_VolumeEffectFieldFlags_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_System_String_*,
        Select_17,
        app::IEnumerable_1_AmplifyColor_VolumeEffectFieldFlags_* source,
        app::Func_2_AmplifyColor_VolumeEffectFieldFlags_String_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_AmplifyColorBase_*,
        Select_18,
        app::IEnumerable_1_AmplifyColor_VolumeEffect_* source,
        app::Func_2_AmplifyColor_VolumeEffect_AmplifyColorBase_* selector
    )
    IL2CPP_REGISTER_METHOD(0x01583BA0, app::AmplifyColorBase__Array*, ToArray_14, app::IEnumerable_1_AmplifyColorBase_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_AmplifyColor_VolumeEffectComponentFlags_*,
        Where_12,
        app::IEnumerable_1_AmplifyColor_VolumeEffectComponentFlags_* source,
        app::Func_2_AmplifyColor_VolumeEffectComponentFlags_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_System_String_*,
        Select_19,
        app::IEnumerable_1_AmplifyColor_VolumeEffectComponentFlags_* source,
        app::Func_2_AmplifyColor_VolumeEffectComponentFlags_String_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x01566A30,
        bool,
        Any_14,
        app::IEnumerable_1_SystemIntegration_CacheData_* source,
        app::Func_2_SystemIntegration_CacheData_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01580A00, app::MessageDescriptor, First_7, app::IEnumerable_1_MessageDescriptor_* source)
    IL2CPP_REGISTER_METHOD(0x01581670, app::AchievementAsset*, FirstOrDefault_7, app::IEnumerable_1_AchievementAsset_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_SystemIntegration_CacheData_*,
        Where_13,
        app::IEnumerable_1_SystemIntegration_CacheData_* source,
        app::Func_2_SystemIntegration_CacheData_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x015811F0,
        app::CacheData*,
        First_8,
        app::IEnumerable_1_SystemIntegration_CacheData_* source,
        app::Func_2_SystemIntegration_CacheData_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x015818F0,
        app::CacheData*,
        FirstOrDefault_8,
        app::IEnumerable_1_SystemIntegration_CacheData_* source,
        app::Func_2_SystemIntegration_CacheData_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x015811F0,
        app::AchievementAsset*,
        First_9,
        app::IEnumerable_1_AchievementAsset_* source,
        app::Func_2_AchievementAsset_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_RespawningPlaceholder_*, ToList_16, app::IEnumerable_1_RespawningPlaceholder_* source)
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_LegacyEntity_*, ToList_17, app::IEnumerable_1_LegacyEntity_* source)
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_EntityPlaceholder_*, ToList_18, app::IEnumerable_1_EntityPlaceholder_* source)
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_Moon_Entity_*, ToList_19, app::IEnumerable_1_Moon_Entity_* source)
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_AnimatedCritter_*, ToList_20, app::IEnumerable_1_AnimatedCritter_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E77A20,
        app::Dictionary_2_UnityEngine_Transform_AnimationMetaData_AnimationData_*,
        ToDictionary_5,
        app::IEnumerable_1_UnityEngine_Transform_* source,
        app::Func_2_UnityEngine_Transform_UnityEngine_Transform_* key_selector,
        app::Func_2_UnityEngine_Transform_AnimationMetaData_AnimationData_* element_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x015818F0,
        app::AreaMapCanvas*,
        FirstOrDefault_9,
        app::IEnumerable_1_AreaMapCanvas_* source,
        app::Func_2_AreaMapCanvas_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_System_String_*,
        Where_14,
        app::IEnumerable_1_System_String_* source,
        app::Func_2_String_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D300,
        app::IOrderedEnumerable_1_System_IO_FileInfo_*,
        OrderByDescending_2,
        app::IEnumerable_1_System_IO_FileInfo_* source,
        app::Func_2_System_IO_FileInfo_DateTime_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_CageStructureTool_Edge_*,
        Where_15,
        app::IEnumerable_1_CageStructureTool_Edge_* source,
        app::Func_2_CageStructureTool_Edge_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_CageStructureTool_Edge_*, ToList_21, app::IEnumerable_1_CageStructureTool_Edge_* source)
    IL2CPP_REGISTER_METHOD(0x01EBA720, app::List_1_System_Int32_*, ToList_22, app::IEnumerable_1_System_Int32_* source)
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_CageStructureTool_Vertex_*, ToList_23, app::IEnumerable_1_CageStructureTool_Vertex_* source)
    IL2CPP_REGISTER_METHOD(
        0x0153D1E0,
        app::IOrderedEnumerable_1_System_Int32_*,
        OrderBy_3,
        app::IEnumerable_1_System_Int32_* source,
        app::Func_2_Int32_Int32_* key_selector
    )
    IL2CPP_REGISTER_METHOD(0x01566A30, bool, Any_15, app::IEnumerable_1_CageStructureTool_Face_* source, app::Func_2_CageStructureTool_Face_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(0x01567630, bool, SequenceEqual_3, app::IEnumerable_1_System_Int32_* first, app::IEnumerable_1_System_Int32_* second)
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_System_Reflection_PropertyInfo_*,
        Where_16,
        app::IEnumerable_1_System_Reflection_PropertyInfo_* source,
        app::Func_2_System_Reflection_PropertyInfo_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D300,
        app::IOrderedEnumerable_1_System_Tuple_2_*,
        OrderByDescending_3,
        app::IEnumerable_1_System_Tuple_2__3* source,
        app::Func_2_Tuple_2_String_Single_Single_* key_selector
    )
    IL2CPP_REGISTER_METHOD(0x00E78230, app::IEnumerable_1_CleverMenuItem_*, Cast_10, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_CleverMenuItem_*, ToList_24, app::IEnumerable_1_CleverMenuItem_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_SmartInput_IButtonInput_*,
        Where_17,
        app::IEnumerable_1_SmartInput_IButtonInput_* source,
        app::Func_2_SmartInput_IButtonInput_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01583BA0, app::IButtonInput__Array*, ToArray_15, app::IEnumerable_1_SmartInput_IButtonInput_* source)
    IL2CPP_REGISTER_METHOD(0x01566FF0, bool, Contains_3, app::IEnumerable_1_UnityEngine_KeyCode_* source, app::KeyCode__Enum value)
    IL2CPP_REGISTER_METHOD(
        0x01581440,
        app::KeyCode__Enum,
        FirstOrDefault_10,
        app::IEnumerable_1_UnityEngine_KeyCode_* source,
        app::Func_2_UnityEngine_KeyCode_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01566640, bool, Any_16, app::IEnumerable_1_Core_Input_Button_* source, app::Func_2_Core_Input_Button_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(0x01583BA0, app::List_1_Moon_Entity___Array*, ToArray_16, app::IEnumerable_1_List_1_Moon_Entity_* source)
    IL2CPP_REGISTER_METHOD(0x01580CD0, int32_t, First_10, app::IEnumerable_1_System_Int32_* source)
    IL2CPP_REGISTER_METHOD(0x0209E200, int32_t, Count_6, app::IEnumerable_1_EquipmentType_* source)
    IL2CPP_REGISTER_METHOD(0x00E78150, app::IEnumerable_1_EquipmentType_*, Cast_11, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(0x01EBA8B0, app::List_1_EquipmentType_*, ToList_25, app::IEnumerable_1_EquipmentType_* source)
    IL2CPP_REGISTER_METHOD(0x01566A30, bool, Any_17, app::IEnumerable_1_System_String_* source, app::Func_2_String_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(
        0x00E7A5A0,
        app::IEnumerable_1_System_String_*,
        Select_20,
        app::IEnumerable_1_FullSerializer_fsDataType_* source,
        app::Func_2_FullSerializer_fsDataType_String_* selector
    )
    IL2CPP_REGISTER_METHOD(0x00E7DCF0, app::IEnumerable_1_System_Type_*, Skip_3, app::IEnumerable_1_System_Type_* source, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01566870, bool, Any_18, app::IEnumerable_1_System_Type_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_UnityEngine_GameObject_*,
        Where_18,
        app::IEnumerable_1_UnityEngine_GameObject_* source,
        app::Func_2_UnityEngine_GameObject_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01583BA0, app::GameObject__Array*, ToArray_17, app::IEnumerable_1_UnityEngine_GameObject_* source)
    IL2CPP_REGISTER_METHOD(0x01567310, bool, Contains_4, app::IEnumerable_1_System_String_* source, app::String* value)
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_RuntimeQuest_*,
        Where_19,
        app::IEnumerable_1_RuntimeQuest_* source,
        app::Func_2_RuntimeQuest_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01565DF0, bool, All_5, app::IEnumerable_1_RuntimeWorldMapIcon_* source, app::Func_2_RuntimeWorldMapIcon_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(0x01583A00, app::Int64__Array*, ToArray_18, app::IEnumerable_1_System_Int64_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7CFB0,
        app::IEnumerable_1_Atlas_*,
        SelectMany_5,
        app::IEnumerable_1_TextureAnimation_* source,
        app::Func_2_TextureAnimation_System_Collections_Generic_IEnumerable_1_* selector
    )
    IL2CPP_REGISTER_METHOD(0x01583BA0, app::Atlas__Array*, ToArray_19, app::IEnumerable_1_Atlas_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_System_String_*,
        Select_21,
        app::IEnumerable_1_XGamingRuntime_XGameSaveBlobInfo_* source,
        app::Func_2_XGamingRuntime_XGameSaveBlobInfo_String_* selector
    )
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_UnityEngine_Component_*, ToList_26, app::IEnumerable_1_UnityEngine_Component_* source)
    IL2CPP_REGISTER_METHOD(0x01566A30, bool, Any_19, app::IEnumerable_1_WeakPrefab_* source, app::Func_2_WeakPrefab_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(
        0x0156BF20,
        app::IEnumerable_1_System_Linq_IGrouping_2__2*,
        GroupBy_3,
        app::IEnumerable_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* source,
        app::Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_String_* key_selector
    )
    IL2CPP_REGISTER_METHOD(0x0209D630, int32_t, Count_7, app::IEnumerable_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* source)
    IL2CPP_REGISTER_METHOD(0x01566870, bool, Any_20, app::IEnumerable_1_JUnitReporter_Failure_* source)
    IL2CPP_REGISTER_METHOD(0x0209E910, int32_t, Sum_5, app::IEnumerable_1_JUnitReporter_TestCase_* source, app::Func_2_JUnitReporter_TestCase_Int32_* selector)
    IL2CPP_REGISTER_METHOD(
        0x0209E910,
        int32_t,
        Sum_6,
        app::IEnumerable_1_JUnitReporter_TestSuite_* source,
        app::Func_2_JUnitReporter_TestSuite_Int32_* selector
    )
    IL2CPP_REGISTER_METHOD(0x01566020, bool, All_6, app::IEnumerable_1_System_Single_* source, app::Func_2_Single_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_KeybindingCommandMapAsset_ExclusiveCommandList_*,
        Where_20,
        app::IEnumerable_1_KeybindingCommandMapAsset_ExclusiveCommandList_* source,
        app::Func_2_KeybindingCommandMapAsset_ExclusiveCommandList_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x01EBAA40,
        app::List_1_KeybindingCommandMapAsset_ExclusiveCommandList_*,
        ToList_27,
        app::IEnumerable_1_KeybindingCommandMapAsset_ExclusiveCommandList_* source
    )
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_KuState_*, ToList_28, app::IEnumerable_1_KuState_* source)
    IL2CPP_REGISTER_METHOD(
        0x015818F0,
        app::LeaderboardTableUI_LeaderboardMetaData*,
        FirstOrDefault_11,
        app::IEnumerable_1_LeaderboardTableUI_LeaderboardMetaData_* source,
        app::Func_2_LeaderboardTableUI_LeaderboardMetaData_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_LeaderboardData_Entry_*,
        Where_21,
        app::IEnumerable_1_LeaderboardData_Entry_* source,
        app::Func_2_LeaderboardData_Entry_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01583BA0, app::LeaderboardData_Entry__Array*, ToArray_20, app::IEnumerable_1_LeaderboardData_Entry_* source)
    IL2CPP_REGISTER_METHOD(0x01567310, bool, Contains_5, app::IEnumerable_1_System_Type_* source, app::Type* value)
    IL2CPP_REGISTER_METHOD(0x01581670, app::LightCanvasEditorTextureCache*, FirstOrDefault_12, app::IEnumerable_1_LightCanvasEditorTextureCache_* source)
    IL2CPP_REGISTER_METHOD(
        0x01EBA0E0,
        app::List_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_*,
        ToList_29,
        app::IEnumerable_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x00E77A20,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_*,
        ToDictionary_6,
        app::IEnumerable_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* source,
        app::Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_Int32_* key_selector,
        app::Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* element_selector
    )
    IL2CPP_REGISTER_METHOD(0x01566FF0, bool, Contains_6, app::IEnumerable_1_LightPriority_Layer_* source, app::LightPriority_Layer__Enum value)
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_frameworks_loading_Prewarmers_IPrewarmOperation_*,
        Where_22,
        app::IEnumerable_1_frameworks_loading_Prewarmers_IPrewarmOperation_* source,
        app::Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D1E0,
        app::IOrderedEnumerable_1_frameworks_loading_Prewarmers_IPrewarmOperation_*,
        OrderBy_4,
        app::IEnumerable_1_frameworks_loading_Prewarmers_IPrewarmOperation_* source,
        app::Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Int32_* key_selector
    )
    IL2CPP_REGISTER_METHOD(0x01580F60, app::IPrewarmOperation*, First_11, app::IEnumerable_1_frameworks_loading_Prewarmers_IPrewarmOperation_* source)
    IL2CPP_REGISTER_METHOD(0x01566870, bool, Any_21, app::IEnumerable_1_frameworks_loading_Prewarmers_IPrewarmOperation_* source)
    IL2CPP_REGISTER_METHOD(0x01581F20, app::IPrewarmOperation*, Last_4, app::IEnumerable_1_frameworks_loading_Prewarmers_IPrewarmOperation_* source)
    IL2CPP_REGISTER_METHOD(0x01566870, bool, Any_22, app::IEnumerable_1_MainThreadLoadingDebugger_NotifyEntry_* source)
    IL2CPP_REGISTER_METHOD(0x01583860, app::SurfaceMaterialType__Enum__Array*, ToArray_21, app::IEnumerable_1_SurfaceMaterialType_* source)
    IL2CPP_REGISTER_METHOD(
        0x0156BEC0,
        app::Dictionary_2_System_String_OverridableTextureProperty_*,
        ToDictionary_7,
        app::IEnumerable_1_OverridableTextureProperty_* source,
        app::Func_2_OverridableTextureProperty_String_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0156BEC0,
        app::Dictionary_2_System_String_OverridableFloatProperty_*,
        ToDictionary_8,
        app::IEnumerable_1_OverridableFloatProperty_* source,
        app::Func_2_OverridableFloatProperty_String_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0156BEC0,
        app::Dictionary_2_System_String_OverridableColorProperty_*,
        ToDictionary_9,
        app::IEnumerable_1_OverridableColorProperty_* source,
        app::Func_2_OverridableColorProperty_String_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x015818F0,
        app::MenuTabEntry*,
        FirstOrDefault_13,
        app::IEnumerable_1_MenuTabEntry_* source,
        app::Func_2_MenuTabEntry_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01583040, app::MessageDescriptor__Array*, ToArray_22, app::IEnumerable_1_MessageDescriptor_* source)
    IL2CPP_REGISTER_METHOD(0x01EBA270, app::List_1_MessageDescriptor_*, ToList_30, app::IEnumerable_1_MessageDescriptor_* source)
    IL2CPP_REGISTER_METHOD(0x0209D890, int32_t, Count_8, app::IEnumerable_1_MessageDescriptor_* source)
    IL2CPP_REGISTER_METHOD(0x01566FF0, bool, Contains_7, app::IEnumerable_1_Moon_Profile_Metric_* source, app::Metric__Enum value)
    IL2CPP_REGISTER_METHOD(0x01581B30, app::MicroProfilerGraph_MarkerCache, Last_5, app::IEnumerable_1_MicroProfilerGraph_MarkerCache_* source)
    IL2CPP_REGISTER_METHOD(
        0x0153D1E0,
        app::IOrderedEnumerable_1_MicroProfilerInspector_MetricData_*,
        OrderBy_5,
        app::IEnumerable_1_MicroProfilerInspector_MetricData_* source,
        app::Func_2_MicroProfilerInspector_MetricData_Moon_Profile_Metric_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D300,
        app::IOrderedEnumerable_1_MicroProfilerInspector_MetricData_*,
        OrderByDescending_4,
        app::IEnumerable_1_MicroProfilerInspector_MetricData_* source,
        app::Func_2_MicroProfilerInspector_MetricData_Double_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D300,
        app::IOrderedEnumerable_1_MicroProfilerInspector_MetricData_*,
        OrderByDescending_5,
        app::IEnumerable_1_MicroProfilerInspector_MetricData_* source,
        app::Func_2_MicroProfilerInspector_MetricData_UInt32_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D1E0,
        app::IOrderedEnumerable_1_MicroProfilerInspector_MetricData_*,
        OrderBy_6,
        app::IEnumerable_1_MicroProfilerInspector_MetricData_* source,
        app::Func_2_MicroProfilerInspector_MetricData_String_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x01566A30,
        bool,
        Any_23,
        app::IEnumerable_1_MistyWoodsKuroGameplayHideZone_* source,
        app::Func_2_MistyWoodsKuroGameplayHideZone_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_Moon_ArtOptimization_SerializableUberShaderWrapper_*,
        Where_23,
        app::IEnumerable_1_Moon_ArtOptimization_SerializableUberShaderWrapper_* source,
        app::Func_2_Moon_ArtOptimization_SerializableUberShaderWrapper_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x01EBAA40,
        app::List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_*,
        ToList_31,
        app::IEnumerable_1_Moon_ArtOptimization_SerializableUberShaderWrapper_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7CFB0,
        app::IEnumerable_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_*,
        SelectMany_6,
        app::IEnumerable_1_Moon_ArtOptimization_SerializableUberShaderWrapper_* source,
        app::Func_2_Moon_ArtOptimization_SerializableUberShaderWrapper_System_Collections_Generic_IEnumerable_1_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x01EBAA40,
        app::List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_*,
        ToList_32,
        app::IEnumerable_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_*,
        Where_24,
        app::IEnumerable_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_* source,
        app::Func_2_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7BA80,
        app::IEnumerable_1_UnityEngine_Rect_*,
        Select_22,
        app::IEnumerable_1_SceneMetaData_* source,
        app::Func_2_SceneMetaData_UnityEngine_Rect_* selector
    )
    IL2CPP_REGISTER_METHOD(0x01583D40, app::Rect__Array*, ToArray_23, app::IEnumerable_1_UnityEngine_Rect_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_UberShaderComponent_*,
        Where_25,
        app::IEnumerable_1_UberShaderComponent_* source,
        app::Func_2_UberShaderComponent_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_Moon_IEntityOwned_*, ToList_33, app::IEnumerable_1_Moon_IEntityOwned_* source)
    IL2CPP_REGISTER_METHOD(
        0x015818F0,
        app::LeaderBoardEntry*,
        FirstOrDefault_14,
        app::IEnumerable_1_Moon_Race_LeaderBoardEntry_* source,
        app::Func_2_Moon_Race_LeaderBoardEntry_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x01566A30,
        bool,
        Any_24,
        app::IEnumerable_1_Moon_Race_LeaderBoardEntry_* source,
        app::Func_2_Moon_Race_LeaderBoardEntry_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D1E0,
        app::IOrderedEnumerable_1_Moon_Race_LeaderBoardEntry_*,
        OrderBy_7,
        app::IEnumerable_1_Moon_Race_LeaderBoardEntry_* source,
        app::Func_2_Moon_Race_LeaderBoardEntry_Int32_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D420,
        app::IOrderedEnumerable_1_Moon_Race_LeaderBoardEntry_*,
        ThenBy_2,
        app::IOrderedEnumerable_1_Moon_Race_LeaderBoardEntry_* source,
        app::Func_2_Moon_Race_LeaderBoardEntry_Int32_* key_selector
    )
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_Moon_Race_LeaderBoardEntry_*, ToList_34, app::IEnumerable_1_Moon_Race_LeaderBoardEntry_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_Moon_Race_LeaderBoardEntry_*,
        Where_26,
        app::IEnumerable_1_Moon_Race_LeaderBoardEntry_* source,
        app::Func_2_Moon_Race_LeaderBoardEntry_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7BF80,
        app::IEnumerable_1_System_Boolean_*,
        Select_23,
        app::IEnumerable_1_UnityEngine_Rect_* source,
        app::Func_2_UnityEngine_Rect_Boolean_* selector
    )
    IL2CPP_REGISTER_METHOD(0x0209E6C0, int32_t, Count_9, app::IEnumerable_1_IGhostFrameData_* source, app::Func_2_IGhostFrameData_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(
        0x0209E6C0,
        int32_t,
        Count_10,
        app::IEnumerable_1_IRenderPostprocessor_* source,
        app::Func_2_IRenderPostprocessor_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01EBABD0, app::List_1_System_ValueTuple_2__2*, ToList_35, app::IEnumerable_1_System_ValueTuple_2__2* source)
    IL2CPP_REGISTER_METHOD(0x01566870, bool, Any_25, app::IEnumerable_1_Moon_Telemetry_Performance_ProfilingSettings_Setting__1* source)
    IL2CPP_REGISTER_METHOD(
        0x01566FF0,
        bool,
        Contains_8,
        app::IEnumerable_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_* source,
        app::ProfilingSettings_SettingType__Enum value
    )
    IL2CPP_REGISTER_METHOD(
        0x0209E6C0,
        int32_t,
        Count_11,
        app::IEnumerable_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_* source,
        app::Func_2_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x0157ECF0,
        float,
        Aggregate_2,
        app::IEnumerable_1_FloatProviderZone_* source,
        float seed,
        app::Func_3_Single_FloatProviderZone_Single_* func
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7D9F0,
        app::IEnumerable_1_KeyValuePair_2_UberShaderProperty_Color_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_*,
        Reverse_2,
        app::IEnumerable_1_KeyValuePair_2_UberShaderProperty_Color_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7D9F0,
        app::IEnumerable_1_KeyValuePair_2_UberShaderProperty_Vector_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_*,
        Reverse_3,
        app::IEnumerable_1_KeyValuePair_2_UberShaderProperty_Vector_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7D9F0,
        app::IEnumerable_1_KeyValuePair_2_UberShaderProperty_Float_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_*,
        Reverse_4,
        app::IEnumerable_1_KeyValuePair_2_UberShaderProperty_Float_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_* source
    )
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_UnityEngine_SkinnedMeshRenderer_*, ToList_36, app::IEnumerable_1_UnityEngine_SkinnedMeshRenderer_* source)
    IL2CPP_REGISTER_METHOD(0x0209DFB0, int32_t, Count_12, app::IEnumerable_1_AbilityType_* source, app::Func_2_AbilityType_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(
        0x0209E6C0,
        int32_t,
        Count_13,
        app::IEnumerable_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* source,
        app::Func_2_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_UnityEngine_Collider_*, ToList_37, app::IEnumerable_1_UnityEngine_Collider_* source)
    IL2CPP_REGISTER_METHOD(0x01567310, bool, Contains_9, app::IEnumerable_1_UnityEngine_Collider_* source, app::Collider* value)
    IL2CPP_REGISTER_METHOD(
        0x00E7D7D0,
        app::IEnumerable_1_System_String_*,
        Except_2,
        app::IEnumerable_1_System_String_* first,
        app::IEnumerable_1_System_String_* second
    )
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_System_String_*, ToList_38, app::IEnumerable_1_System_String_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7C980,
        app::IEnumerable_1_UnityEngine_Vector2_*,
        Select_24,
        app::IEnumerable_1_UnityEngine_Vector3_* source,
        app::Func_2_UnityEngine_Vector3_UnityEngine_Vector2_* selector
    )
    IL2CPP_REGISTER_METHOD(0x01EBAEF0, app::List_1_UnityEngine_Vector2_*, ToList_39, app::IEnumerable_1_UnityEngine_Vector2_* source)
    IL2CPP_REGISTER_METHOD(0x0209E6C0, int32_t, Count_14, app::IEnumerable_1_SceneManagerScene_* source, app::Func_2_SceneManagerScene_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(
        0x01566A30,
        bool,
        Any_26,
        app::IEnumerable_1_PetrifiedOwlFeedingGrounds_PetrifiedOwlFeedingGroundHideZone_* source,
        app::Func_2_PetrifiedOwlFeedingGrounds_PetrifiedOwlFeedingGroundHideZone_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_RuntimeQuest_*, ToList_40, app::IEnumerable_1_RuntimeQuest_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7D5E0,
        app::IEnumerable_1_ResolutionOptions_ResolutionEntry_*,
        Distinct_2,
        app::IEnumerable_1_ResolutionOptions_ResolutionEntry_* source,
        app::IEqualityComparer_1_ResolutionOptions_ResolutionEntry_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x01EBAA40,
        app::List_1_ResolutionOptions_ResolutionEntry_*,
        ToList_41,
        app::IEnumerable_1_ResolutionOptions_ResolutionEntry_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x01566250,
        bool,
        Any_27,
        app::IEnumerable_1_KeyValuePair_2_System_Int32_WorldMapAreaState_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x0209E6C0,
        int32_t,
        Count_15,
        app::IEnumerable_1_Moon_SerializedBooleanUberState_* source,
        app::Func_2_Moon_SerializedBooleanUberState_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x0209E6C0,
        int32_t,
        Count_16,
        app::IEnumerable_1_Moon_SerializedIntUberState_* source,
        app::Func_2_Moon_SerializedIntUberState_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x0209E6C0,
        int32_t,
        Count_17,
        app::IEnumerable_1_GameWorldArea_PlayerAbilityInfo_* source,
        app::Func_2_GameWorldArea_PlayerAbilityInfo_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_Moon_SerializedBooleanUberState_*,
        Where_27,
        app::IEnumerable_1_Moon_SerializedBooleanUberState_* source,
        app::Func_2_Moon_SerializedBooleanUberState_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_Moon_SerializedBooleanUberState_*, ToList_42, app::IEnumerable_1_Moon_SerializedBooleanUberState_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_RuntimeWorldMapIcon_*,
        Where_28,
        app::IEnumerable_1_RuntimeWorldMapIcon_* source,
        app::Func_2_RuntimeWorldMapIcon_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_RuntimeWorldMapIcon_*, ToList_43, app::IEnumerable_1_RuntimeWorldMapIcon_* source)
    IL2CPP_REGISTER_METHOD(0x01566A30, bool, Any_28, app::IEnumerable_1_SaveSlotInfo_* source, app::Func_2_SaveSlotInfo_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_SceneManagerScene_*,
        Where_29,
        app::IEnumerable_1_SceneManagerScene_* source,
        app::Func_2_SceneManagerScene_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x0209E460, int32_t, Count_18, app::IEnumerable_1_SceneManagerScene_* source)
    IL2CPP_REGISTER_METHOD(0x01580F60, app::SceneManagerScene*, First_12, app::IEnumerable_1_SceneManagerScene_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7E690,
        app::IEnumerable_1_SceneLoadingQueue_QueueSceneToLoad_*,
        Where_30,
        app::IEnumerable_1_SceneLoadingQueue_QueueSceneToLoad_* source,
        app::Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x0209DAF0, int32_t, Count_19, app::IEnumerable_1_SceneLoadingQueue_QueueSceneToLoad_* source)
    IL2CPP_REGISTER_METHOD(
        0x015818F0,
        app::SceneManagerScene*,
        FirstOrDefault_15,
        app::IEnumerable_1_SceneManagerScene_* source,
        app::Func_2_SceneManagerScene_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x00E78150, app::IEnumerable_1_SeinEvent_*, Cast_12, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(0x01566480, bool, Any_29, app::IEnumerable_1_KeyValuePair_2_SeinEvent_SeinEventsDebugger_Entry_* source)
    IL2CPP_REGISTER_METHOD(
        0x0153D1E0,
        app::IOrderedEnumerable_1_SeinEventsDebugger_Entry_*,
        OrderBy_8,
        app::IEnumerable_1_SeinEventsDebugger_Entry_* source,
        app::Func_2_SeinEventsDebugger_Entry_Int64_* key_selector
    )
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_CharacterState_*, ToList_44, app::IEnumerable_1_CharacterState_* source)
    IL2CPP_REGISTER_METHOD(0x00E77EB0, app::IEnumerable_1_SpiritShardType_*, Cast_13, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7EB60,
        app::IEnumerable_1_SpiritShardType_*,
        Where_31,
        app::IEnumerable_1_SpiritShardType_* source,
        app::Func_2_SpiritShardType_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_SmartInput_IButtonInput_*, ToList_45, app::IEnumerable_1_SmartInput_IButtonInput_* source)
    IL2CPP_REGISTER_METHOD(0x00E78230, app::IEnumerable_1_SmartInput_KeyCodeButtonInput_*, Cast_14, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(
        0x01566A30,
        bool,
        Any_30,
        app::IEnumerable_1_SmartInput_KeyCodeButtonInput_* source,
        app::Func_2_SmartInput_KeyCodeButtonInput_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x00E78860, app::IEnumerable_1_SmartInput_ICachableInput_*, Repeat_3, app::ICachableInput* element, int32_t count)
    IL2CPP_REGISTER_METHOD(0x00E786E0, app::IEnumerable_1_System_Boolean_*, Repeat_4, bool element, int32_t count)
    IL2CPP_REGISTER_METHOD(0x00E787A0, app::IEnumerable_1_System_Int32_*, Repeat_5, int32_t element, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01583380, app::SpiritShardType__Enum__Array*, ToArray_24, app::IEnumerable_1_SpiritShardType_* source)
    IL2CPP_REGISTER_METHOD(0x0209DD50, int32_t, Count_20, app::IEnumerable_1_SpiritShardType_* source)
    IL2CPP_REGISTER_METHOD(0x00E78230, app::IEnumerable_1_SurfaceMaterialObjectPair_1_*, Cast_15, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_SurfaceMaterialObjectPair_1_*, ToList_46, app::IEnumerable_1_SurfaceMaterialObjectPair_1_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E796A0,
        app::IEnumerable_1_PlayFab_DataModels_GetFileMetadata_*,
        Select_25,
        app::IEnumerable_1_KeyValuePair_2_System_String_PlayFab_DataModels_GetFileMetadata_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x015818F0,
        app::GetFileMetadata*,
        FirstOrDefault_16,
        app::IEnumerable_1_PlayFab_DataModels_GetFileMetadata_* source,
        app::Func_2_PlayFab_DataModels_GetFileMetadata_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01566870, bool, Any_31, app::IEnumerable_1_PlayFab_ClientModels_PlayerLeaderboardEntry_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7F030,
        app::IEnumerable_1_KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry_*,
        Where_32,
        app::IEnumerable_1_KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__1* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x01EBA590,
        app::List_1_KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry_*,
        ToList_47,
        app::IEnumerable_1_KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x00E796A0,
        app::IEnumerable_1_SystemIntegration_Races_RaceEntry_*,
        Select_26,
        app::IEnumerable_1_KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_SystemIntegration_Races_RaceEntry_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_SystemIntegration_Races_RaceEntry_*,
        Where_33,
        app::IEnumerable_1_SystemIntegration_Races_RaceEntry_* source,
        app::Func_2_SystemIntegration_Races_RaceEntry_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D300,
        app::IOrderedEnumerable_1_SystemIntegration_Races_RaceEntry_*,
        OrderByDescending_6,
        app::IEnumerable_1_SystemIntegration_Races_RaceEntry_* source,
        app::Func_2_SystemIntegration_Races_RaceEntry_DateTime_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7E060,
        app::IEnumerable_1_SystemIntegration_Races_RaceEntry_*,
        Take_2,
        app::IEnumerable_1_SystemIntegration_Races_RaceEntry_* source,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01EBAA40,
        app::List_1_SystemIntegration_Races_RaceEntry_*,
        ToList_48,
        app::IEnumerable_1_SystemIntegration_Races_RaceEntry_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_System_String_*,
        Select_27,
        app::IEnumerable_1_AchievementAsset_* source,
        app::Func_2_AchievementAsset_String_* selector
    )
    IL2CPP_REGISTER_METHOD(0x01583BA0, app::List_1_System_String___Array*, ToArray_25, app::IEnumerable_1_List_1_System_String_* source)
    IL2CPP_REGISTER_METHOD(
        0x0209E910,
        int32_t,
        Sum_7,
        app::IEnumerable_1_List_1_System_String_* source,
        app::Func_2_System_Collections_Generic_List_1_Int32_* selector
    )
    IL2CPP_REGISTER_METHOD(0x01565BC0, bool, All_7, app::IEnumerable_1_System_Boolean_* source, app::Func_2_Boolean_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_System_String_*,
        Select_28,
        app::IEnumerable_1_System_Reflection_FieldInfo_* source,
        app::Func_2_System_Reflection_FieldInfo_String_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7F500,
        app::IEnumerable_1_System_Int32_*,
        Where_34,
        app::IEnumerable_1_System_Int32_* source,
        app::Func_2_Int32_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x00E7A0A0, app::IEnumerable_1_System_Byte_*, Select_29, app::IEnumerable_1_System_Int32_* source, app::Func_2_Int32_Byte_* selector)
    IL2CPP_REGISTER_METHOD(0x015831E0, app::Byte__Array*, ToArray_26, app::IEnumerable_1_System_Byte_* source)
    IL2CPP_REGISTER_METHOD(
        0x0153D300,
        app::IOrderedEnumerable_1_Moon_TimeSlicer_ITimeSlicedJob_*,
        OrderByDescending_7,
        app::IEnumerable_1_Moon_TimeSlicer_ITimeSlicedJob_* source,
        app::Func_2_Moon_TimeSlicer_ITimeSlicedJob_Single_* key_selector
    )
    IL2CPP_REGISTER_METHOD(0x00E7DC30, app::IEnumerable_1_System_Int64_*, Skip_4, app::IEnumerable_1_System_Int64_* source, int32_t count)
    IL2CPP_REGISTER_METHOD(0x00E7DFA0, app::IEnumerable_1_System_Int64_*, Take_3, app::IEnumerable_1_System_Int64_* source, int32_t count)
    IL2CPP_REGISTER_METHOD(0x00E7DB70, app::IEnumerable_1_System_Double_*, Skip_5, app::IEnumerable_1_System_Double_* source, int32_t count)
    IL2CPP_REGISTER_METHOD(0x00E7DEE0, app::IEnumerable_1_System_Double_*, Take_4, app::IEnumerable_1_System_Double_* source, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_System_String_*,
        Select_30,
        app::IEnumerable_1_System_String_* source,
        app::Func_2_String_String_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D1E0,
        app::IOrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2_*,
        OrderBy_9,
        app::IEnumerable_1_KeyValuePair_2_System_String_System_ValueTuple_2_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Int32_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E79BA0,
        app::IEnumerable_1_System_ValueTuple_2__2*,
        Select_31,
        app::IEnumerable_1_KeyValuePair_2_System_String_System_ValueTuple_2_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_ValueTuple_2_Int32_String_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7FEA0,
        app::IEnumerable_1_UberPoolGroupWarmer_PrewarmItem_*,
        Where_35,
        app::IEnumerable_1_UberPoolGroupWarmer_PrewarmItem_* source,
        app::Func_2_UberPoolGroupWarmer_PrewarmItem_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_UberPoolPerfTestSettings_*,
        Where_36,
        app::IEnumerable_1_UberPoolPerfTestSettings_* source,
        app::Func_2_UberPoolPerfTestSettings_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_UberPoolPerfTestSettings_*, ToList_49, app::IEnumerable_1_UberPoolPerfTestSettings_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_UberPoolGroupWarmer_*,
        Where_37,
        app::IEnumerable_1_UberPoolGroupWarmer_* source,
        app::Func_2_UberPoolGroupWarmer_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01566870, bool, Any_32, app::IEnumerable_1_UberPoolGroupWarmer_* source)
    IL2CPP_REGISTER_METHOD(
        0x015818F0,
        app::MemoryLabelDebugger_MemoryLabelAllocationCache*,
        FirstOrDefault_17,
        app::IEnumerable_1_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache_* source,
        app::Func_2_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D300,
        app::IOrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2__1*,
        OrderByDescending_8,
        app::IEnumerable_1_KeyValuePair_2_System_String_System_Single_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Single_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x015818F0,
        app::PlayerUberStateShards_Shard*,
        FirstOrDefault_18,
        app::IEnumerable_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* source,
        app::Func_2_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x01EBAA40,
        app::List_1_WotwUberStateToWwiseData_AbilityRequirementCondition_*,
        ToList_50,
        app::IEnumerable_1_WotwUberStateToWwiseData_AbilityRequirementCondition_* source
    )
    IL2CPP_REGISTER_METHOD(0x01583BA0, app::IPromise__Array*, ToArray_27, app::IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromise_* source)
    IL2CPP_REGISTER_METHOD(
        0x0157EA70,
        app::IPromise*,
        Aggregate_3,
        app::IEnumerable_1_System_Func_1__1* source,
        app::IPromise* seed,
        app::Func_3_ZenFulcrum_EmbeddedBrowser_IPromise_Func_1_ZenFulcrum_EmbeddedBrowser_IPromise_ZenFulcrum_EmbeddedBrowser_IPromise_* func
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7B4A0,
        app::IEnumerable_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_*,
        Select_32,
        app::IEnumerable_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_* source,
        app::Func_3_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_Int32_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x01EBAA40,
        app::List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_*,
        ToList_51,
        app::IEnumerable_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_* source
    )
    IL2CPP_REGISTER_METHOD(0x01EBAA40, app::List_1_UberPoolGroupWarmer_*, ToList_52, app::IEnumerable_1_UberPoolGroupWarmer_* source)
    IL2CPP_REGISTER_METHOD(0x01581670, app::Byte__Array*, FirstOrDefault_19, app::IEnumerable_1_System_Byte__1* source)
    IL2CPP_REGISTER_METHOD(
        0x01566250,
        bool,
        Any_33,
        app::IEnumerable_1_KeyValuePair_2_System_Int32_System_ByteEnum_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__2* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01566480, bool, Any_34, app::IEnumerable_1_KeyValuePair_2_System_Int32Enum_System_Object_* source)
    IL2CPP_REGISTER_METHOD(0x01566640, bool, Any_35, app::IEnumerable_1_System_Int32Enum_* source, app::Func_2_Int32Enum_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(
        0x01566C60,
        bool,
        Contains_10,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_Object_* source,
        app::KeyValuePair_2_System_Object_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x01566D20,
        bool,
        Contains_11,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_Object_* source,
        app::KeyValuePair_2_System_Object_System_Object_ value,
        app::IEqualityComparer_1_KeyValuePair_2_System_Object_System_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x01566FF0, bool, Contains_12, app::IEnumerable_1_System_Int32Enum_* source, app::Int32Enum__Enum value)
    IL2CPP_REGISTER_METHOD(
        0x015670A0,
        bool,
        Contains_13,
        app::IEnumerable_1_System_Int32Enum_* source,
        app::Int32Enum__Enum value,
        app::IEqualityComparer_1_System_Int32Enum_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x01567640,
        bool,
        SequenceEqual_4,
        app::IEnumerable_1_System_Int32_* first,
        app::IEnumerable_1_System_Int32_* second,
        app::IEqualityComparer_1_System_Int32_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x0156B410,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_*,
        ToDictionary_10,
        app::IEnumerable_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* source,
        app::Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_Int32_* key_selector,
        app::Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* element_selector,
        app::IEqualityComparer_1_System_Int32_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x00E77A20,
        app::Dictionary_2_System_Object_System_Int32Enum_*,
        ToDictionary_11,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_Object_* key_selector,
        app::Func_2_Object_Int32Enum_* element_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0156B7E0,
        app::Dictionary_2_System_Object_System_Int32Enum_*,
        ToDictionary_12,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_Object_* key_selector,
        app::Func_2_Object_Int32Enum_* element_selector,
        app::IEqualityComparer_1_System_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x0156BF20,
        app::IEnumerable_1_System_Linq_IGrouping_2__3*,
        GroupBy_4,
        app::IEnumerable_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* source,
        app::Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_Object_* key_selector
    )
    IL2CPP_REGISTER_METHOD(0x00E77EB0, app::IEnumerable_1_System_ByteEnum_*, Cast_16, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(0x00E77F90, app::IEnumerable_1_System_Collections_DictionaryEntry_*, Cast_17, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(0x00E78150, app::IEnumerable_1_System_Int32Enum_*, Cast_18, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(0x00E78310, app::IEnumerable_1_System_ByteEnum_*, CastIterator_2, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(0x00E78420, app::IEnumerable_1_System_Collections_DictionaryEntry_*, CastIterator_3, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(0x00E78310, app::IEnumerable_1_System_Int32_*, CastIterator_4, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(0x00E78310, app::IEnumerable_1_System_Int32Enum_*, CastIterator_5, app::IEnumerable* source)
    IL2CPP_REGISTER_METHOD(0x00E78640, app::IEnumerable_1_System_Byte_*, Empty_3, )
    IL2CPP_REGISTER_METHOD(0x00E78640, app::IEnumerable_1_System_Int32_*, Empty_4, )
    IL2CPP_REGISTER_METHOD(0x00E78920, app::IEnumerable_1_System_Boolean_*, RepeatIterator_2, bool element, int32_t count)
    IL2CPP_REGISTER_METHOD(0x00E78A50, app::IEnumerable_1_System_Int32_*, RepeatIterator_3, int32_t element, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x00E78CA0,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_Object_*,
        Select_33,
        app::IEnumerable_1_System_Collections_DictionaryEntry_* source,
        app::Func_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E791A0,
        app::IEnumerable_1_System_Object_*,
        Select_34,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_Int32_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Object__1* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E796A0,
        app::IEnumerable_1_System_Object_*,
        Select_35,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_Object_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Object_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E79BA0,
        app::IEnumerable_1_System_ValueTuple_2__4*,
        Select_36,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_ValueTuple_2_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_ValueTuple_2_Int32_Object_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7A5A0,
        app::IEnumerable_1_System_Object_*,
        Select_37,
        app::IEnumerable_1_System_Int32Enum_* source,
        app::Func_2_Int32Enum_Object_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7AAA0,
        app::IEnumerable_1_System_Int32_*,
        Select_38,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_Int32_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7B580,
        app::IEnumerable_1_System_Single_*,
        Select_39,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_Single_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7BA80,
        app::IEnumerable_1_UnityEngine_Rect_*,
        Select_40,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_UnityEngine_Rect_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7C480,
        app::IEnumerable_1_System_Single_*,
        Select_41,
        app::IEnumerable_1_UnityEngine_Rect_* source,
        app::Func_2_UnityEngine_Rect_Single_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7D9F0,
        app::IEnumerable_1_KeyValuePair_2_System_Int32Enum_System_Object_*,
        Reverse_5,
        app::IEnumerable_1_KeyValuePair_2_System_Int32Enum_System_Object_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x00E78420,
        app::IEnumerable_1_KeyValuePair_2_System_Int32Enum_System_Object_*,
        ReverseIterator_2,
        app::IEnumerable_1_KeyValuePair_2_System_Int32Enum_System_Object_* source
    )
    IL2CPP_REGISTER_METHOD(0x00E7DDB0, app::IEnumerable_1_System_Double_*, SkipIterator_2, app::IEnumerable_1_System_Double_* source, int32_t count)
    IL2CPP_REGISTER_METHOD(0x00E7DDB0, app::IEnumerable_1_System_Int64_*, SkipIterator_3, app::IEnumerable_1_System_Int64_* source, int32_t count)
    IL2CPP_REGISTER_METHOD(0x00E7E120, app::IEnumerable_1_System_Double_*, TakeIterator_2, app::IEnumerable_1_System_Double_* source, int32_t count)
    IL2CPP_REGISTER_METHOD(0x00E7E120, app::IEnumerable_1_System_Int64_*, TakeIterator_3, app::IEnumerable_1_System_Int64_* source, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x00E7E430,
        app::IEnumerable_1_System_Char_*,
        UnionIterator_2,
        app::IEnumerable_1_System_Char_* first,
        app::IEnumerable_1_System_Char_* second,
        app::IEqualityComparer_1_System_Char_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7EB60,
        app::IEnumerable_1_System_ByteEnum_*,
        Where_38,
        app::IEnumerable_1_System_ByteEnum_* source,
        app::Func_2_ByteEnum_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7F030,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_Object_*,
        Where_39,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_Object_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__3* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01EBA400, app::List_1_System_ByteEnum_*, ToList_53, app::IEnumerable_1_System_ByteEnum_* source)
    IL2CPP_REGISTER_METHOD(
        0x01EBA590,
        app::List_1_KeyValuePair_2_System_Object_System_Object_*,
        ToList_54,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_Object_* source
    )
    IL2CPP_REGISTER_METHOD(0x01EBA8B0, app::List_1_System_Int32Enum_*, ToList_55, app::IEnumerable_1_System_Int32Enum_* source)
    IL2CPP_REGISTER_METHOD(0x01EBABD0, app::List_1_System_ValueTuple_2__3*, ToList_56, app::IEnumerable_1_System_ValueTuple_2__4* source)
    IL2CPP_REGISTER_METHOD(
        0x02653EF0,
        app::Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean_*,
        CombinePredicates_2,
        app::Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean_* predicate1,
        app::Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean_* predicate2
    )
    IL2CPP_REGISTER_METHOD(
        0x02653EF0,
        app::Func_2_Boolean_Boolean_*,
        CombinePredicates_3,
        app::Func_2_Boolean_Boolean_* predicate1,
        app::Func_2_Boolean_Boolean_* predicate2
    )
    IL2CPP_REGISTER_METHOD(
        0x02653EF0,
        app::Func_2_Byte_Boolean_*,
        CombinePredicates_4,
        app::Func_2_Byte_Boolean_* predicate1,
        app::Func_2_Byte_Boolean_* predicate2
    )
    IL2CPP_REGISTER_METHOD(
        0x02653EF0,
        app::Func_2_ByteEnum_Boolean_*,
        CombinePredicates_5,
        app::Func_2_ByteEnum_Boolean_* predicate1,
        app::Func_2_ByteEnum_Boolean_* predicate2
    )
    IL2CPP_REGISTER_METHOD(
        0x02653EF0,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__3*,
        CombinePredicates_6,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__3* predicate1,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__3* predicate2
    )
    IL2CPP_REGISTER_METHOD(
        0x02653EF0,
        app::Func_2_Int32_Boolean_*,
        CombinePredicates_7,
        app::Func_2_Int32_Boolean_* predicate1,
        app::Func_2_Int32_Boolean_* predicate2
    )
    IL2CPP_REGISTER_METHOD(
        0x02653EF0,
        app::Func_2_Single_Boolean_*,
        CombinePredicates_8,
        app::Func_2_Single_Boolean_* predicate1,
        app::Func_2_Single_Boolean_* predicate2
    )
    IL2CPP_REGISTER_METHOD(
        0x02653EF0,
        app::Func_2_ValueTuple_2_Int32_Object_Boolean_*,
        CombinePredicates_9,
        app::Func_2_ValueTuple_2_Int32_Object_Boolean_* predicate1,
        app::Func_2_ValueTuple_2_Int32_Object_Boolean_* predicate2
    )
    IL2CPP_REGISTER_METHOD(
        0x02653EF0,
        app::Func_2_UberPoolGroupWarmer_PrewarmItem_Boolean_*,
        CombinePredicates_10,
        app::Func_2_UberPoolGroupWarmer_PrewarmItem_Boolean_* predicate1,
        app::Func_2_UberPoolGroupWarmer_PrewarmItem_Boolean_* predicate2
    )
    IL2CPP_REGISTER_METHOD(
        0x02653EF0,
        app::Func_2_UnityEngine_Rect_Boolean_*,
        CombinePredicates_11,
        app::Func_2_UnityEngine_Rect_Boolean_* predicate1,
        app::Func_2_UnityEngine_Rect_Boolean_* predicate2
    )
    IL2CPP_REGISTER_METHOD(
        0x02653EF0,
        app::Func_2_UnityEngine_Vector2_Boolean_*,
        CombinePredicates_12,
        app::Func_2_UnityEngine_Vector2_Boolean_* predicate1,
        app::Func_2_UnityEngine_Vector2_Boolean_* predicate2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_System_Collections_DictionaryEntry_Object_*,
        CombineSelectors_2,
        app::Func_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_* selector1,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Object_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_System_Collections_DictionaryEntry_Object_*,
        CombineSelectors_3,
        app::Func_2_System_Collections_DictionaryEntry_Object_* selector1,
        app::Func_2_Object_Object_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Int32__1*,
        CombineSelectors_4,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Int32__1* selector1,
        app::Func_2_Int32_Int32_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Int32__1*,
        CombineSelectors_5,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Object__1* selector1,
        app::Func_2_Object_Int32_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Object__1*,
        CombineSelectors_6,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Object__1* selector1,
        app::Func_2_Object_Object_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__1*,
        CombineSelectors_7,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Object__1* selector1,
        app::Func_2_Object_Single_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect_*,
        CombineSelectors_8,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Object__1* selector1,
        app::Func_2_Object_UnityEngine_Rect_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__1*,
        CombineSelectors_9,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__1* selector1,
        app::Func_2_Single_Single_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect_*,
        CombineSelectors_10,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect_* selector1,
        app::Func_2_UnityEngine_Rect_UnityEngine_Rect_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Int32__2*,
        CombineSelectors_11,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Int32__2* selector1,
        app::Func_2_Int32_Int32_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Int32__2*,
        CombineSelectors_12,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Object_* selector1,
        app::Func_2_Object_Int32_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Object_*,
        CombineSelectors_13,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Object_* selector1,
        app::Func_2_Object_Object_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__2*,
        CombineSelectors_14,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Object_* selector1,
        app::Func_2_Object_Single_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect__1*,
        CombineSelectors_15,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Object_* selector1,
        app::Func_2_Object_UnityEngine_Rect_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__2*,
        CombineSelectors_16,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__2* selector1,
        app::Func_2_Single_Single_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect__1*,
        CombineSelectors_17,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect__1* selector1,
        app::Func_2_UnityEngine_Rect_UnityEngine_Rect_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_Int32Enum_Int32_*,
        CombineSelectors_18,
        app::Func_2_Int32Enum_Int32_* selector1,
        app::Func_2_Int32_Int32_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_Int32Enum_Int32_*,
        CombineSelectors_19,
        app::Func_2_Int32Enum_Object_* selector1,
        app::Func_2_Object_Int32_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_Int32Enum_Object_*,
        CombineSelectors_20,
        app::Func_2_Int32Enum_Object_* selector1,
        app::Func_2_Object_Object_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_Int32Enum_Single_*,
        CombineSelectors_21,
        app::Func_2_Int32Enum_Object_* selector1,
        app::Func_2_Object_Single_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_Int32Enum_UnityEngine_Rect_*,
        CombineSelectors_22,
        app::Func_2_Int32Enum_Object_* selector1,
        app::Func_2_Object_UnityEngine_Rect_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_Int32Enum_Single_*,
        CombineSelectors_23,
        app::Func_2_Int32Enum_Single_* selector1,
        app::Func_2_Single_Single_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_Int32Enum_UnityEngine_Rect_*,
        CombineSelectors_24,
        app::Func_2_Int32Enum_UnityEngine_Rect_* selector1,
        app::Func_2_UnityEngine_Rect_UnityEngine_Rect_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_Object_Boolean_*,
        CombineSelectors_25,
        app::Func_2_Object_Boolean_* selector1,
        app::Func_2_Boolean_Boolean_* selector2
    )
    IL2CPP_REGISTER_METHOD(0x02654100, app::Func_2_Object_Byte_*, CombineSelectors_26, app::Func_2_Object_Byte_* selector1, app::Func_2_Byte_Byte_* selector2)
    IL2CPP_REGISTER_METHOD(0x02654100, app::Func_2_Object_Byte_*, CombineSelectors_27, app::Func_2_Object_Int32_* selector1, app::Func_2_Int32_Byte_* selector2)
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_Object_Int32_*,
        CombineSelectors_28,
        app::Func_2_Object_Object_* selector1,
        app::Func_2_Object_Int32_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_Object_Single_*,
        CombineSelectors_29,
        app::Func_2_Object_Object_* selector1,
        app::Func_2_Object_Single_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_Object_UnityEngine_Rect_*,
        CombineSelectors_30,
        app::Func_2_Object_Object_* selector1,
        app::Func_2_Object_UnityEngine_Rect_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_Object_Boolean_*,
        CombineSelectors_31,
        app::Func_2_Object_UnityEngine_Rect_* selector1,
        app::Func_2_UnityEngine_Rect_Boolean_* selector2
    )
    IL2CPP_REGISTER_METHOD(
        0x02654100,
        app::Func_2_Object_Single_*,
        CombineSelectors_32,
        app::Func_2_Object_UnityEngine_Rect_* selector1,
        app::Func_2_UnityEngine_Rect_Single_* selector2
    )
    IL2CPP_REGISTER_METHOD(0x0209DD50, int32_t, Count_21, app::IEnumerable_1_System_ByteEnum_* source)
    IL2CPP_REGISTER_METHOD(0x0209DFB0, int32_t, Count_22, app::IEnumerable_1_System_ByteEnum_* source, app::Func_2_ByteEnum_Boolean_* predicate)
    IL2CPP_REGISTER_METHOD(0x0209E200, int32_t, Count_23, app::IEnumerable_1_System_Int32Enum_* source)
    IL2CPP_REGISTER_METHOD(
        0x0153D1E0,
        app::IOrderedEnumerable_1_MicroProfilerInspector_MetricData_*,
        OrderBy_10,
        app::IEnumerable_1_MicroProfilerInspector_MetricData_* source,
        app::Func_2_MicroProfilerInspector_MetricData_Int32Enum_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D1E0,
        app::IOrderedEnumerable_1_MicroProfilerInspector_MetricData_*,
        OrderBy_11,
        app::IEnumerable_1_MicroProfilerInspector_MetricData_* source,
        app::Func_2_MicroProfilerInspector_MetricData_Object_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D1E0,
        app::IOrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2__2*,
        OrderBy_12,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_ValueTuple_2_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Int32__3* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D1E0,
        app::IOrderedEnumerable_1_System_Object_*,
        OrderBy_13,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_Int32_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D1E0,
        app::IOrderedEnumerable_1_System_Object_*,
        OrderBy_14,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_Int64_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D300,
        app::IOrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2__3*,
        OrderByDescending_9,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_Single_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__3* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D300,
        app::IOrderedEnumerable_1_System_Object_*,
        OrderByDescending_10,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_DateTime_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D300,
        app::IOrderedEnumerable_1_System_Object_*,
        OrderByDescending_11,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_Single_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x0153D420,
        app::IOrderedEnumerable_1_System_Object_*,
        ThenBy_3,
        app::IOrderedEnumerable_1_System_Object_* source,
        app::Func_2_Object_Int32_* key_selector
    )
    IL2CPP_REGISTER_METHOD(
        0x015818F0,
        app::PropertyInfo_1*,
        FirstOrDefault_20,
        app::IEnumerable_1_System_Reflection_PropertyInfo_* source,
        app::Func_2_System_Reflection_PropertyInfo_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_Moon_TimeSlicer_ITimeSlicedJob_*,
        Where_40,
        app::IEnumerable_1_Moon_TimeSlicer_ITimeSlicedJob_* source,
        app::Func_2_Moon_TimeSlicer_ITimeSlicedJob_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x0157E2E0,
        app::Object*,
        Aggregate_4,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_Object_* source,
        app::Object* seed,
        app::Func_3_Object_System_Collections_Generic_KeyValuePair_2_Object_* func
    )
    IL2CPP_REGISTER_METHOD(0x0157E570, int32_t, Aggregate_5, app::IEnumerable_1_System_Int32_* source, int32_t seed, app::Func_3_Int32_Int32_Int32_* func)
    IL2CPP_REGISTER_METHOD(0x0157E7F0, int32_t, Aggregate_6, app::IEnumerable_1_System_Object_* source, int32_t seed, app::Func_3_Int32_Object_Int32_* func)
    IL2CPP_REGISTER_METHOD(0x0157ECF0, float, Aggregate_7, app::IEnumerable_1_System_Object_* source, float seed, app::Func_3_Single_Object_Single_* func)
    IL2CPP_REGISTER_METHOD(
        0x01581440,
        app::Int32Enum__Enum,
        FirstOrDefault_21,
        app::IEnumerable_1_System_Int32Enum_* source,
        app::Func_2_Int32Enum_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(0x01583380, app::ByteEnum__Enum__Array*, ToArray_28, app::IEnumerable_1_System_ByteEnum_* source)
    IL2CPP_REGISTER_METHOD(
        0x01583520,
        app::KeyValuePair_2_System_Object_System_Int32___Array*,
        ToArray_29,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_Int32_* source
    )
    IL2CPP_REGISTER_METHOD(0x01583860, app::Int32Enum__Enum__Array*, ToArray_30, app::IEnumerable_1_System_Int32Enum_* source)
    IL2CPP_REGISTER_METHOD(
        0x00E7F9D0,
        app::IEnumerable_1_UnityEngine_MonoBehaviour_*,
        Where_41,
        app::IEnumerable_1_UnityEngine_MonoBehaviour_* source,
        app::Func_2_UnityEngine_MonoBehaviour_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x00E7AFA0,
        app::IEnumerable_1_System_Linq_Expressions_Expression_*,
        Select_42,
        app::IEnumerable_1_System_Dynamic_DynamicMetaObject_* source,
        app::Func_2_System_Dynamic_DynamicMetaObject_System_Linq_Expressions_Expression_* selector
    )
} // namespace app::classes::System::Linq::Enumerable
