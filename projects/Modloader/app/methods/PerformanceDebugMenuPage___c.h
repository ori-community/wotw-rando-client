#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_EvaluationMode__Enum.h>
#include <Modloader/app/structs/DeltaTimeManager_ControllerType__Enum.h>
#include <Modloader/app/structs/FilterMode__Enum.h>
#include <Modloader/app/structs/GameplaySoundManager_AudioQualitySetting__Enum.h>
#include <Modloader/app/structs/GraphicsJobsSyncPoint__Enum.h>
#include <Modloader/app/structs/JobMode__Enum.h>
#include <Modloader/app/structs/LoadingBoostController_BoostModeLevel__Enum.h>
#include <Modloader/app/structs/MainThreadWorkStealer_TimeBudgetMode__Enum.h>
#include <Modloader/app/structs/MainThreadWorkStealer_WorkStealingMode__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_DofBlurType__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_Quality__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_TextureQuality__Enum.h>
#include <Modloader/app/structs/PerformanceDebugMenuPage_c.h>
#include <Modloader/app/structs/ThreadPriority__Enum_1.h>
#include <Modloader/app/structs/UberGCLogic_ResourceCollectPriorityMode__Enum.h>
#include <Modloader/app/structs/WaitForPresentSyncPoint__Enum.h>
#include <Modloader/app/structs/XboxQualityModeManager_QualityMode__Enum.h>

namespace app::classes::PerformanceDebugMenuPage___c {
    IL2CPP_REGISTER_METHOD(0x0047F3F0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0047F530, bool, __initializeToggleBotList_b__12_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0047F5C0, void, __initializeToggleBotList_b__12_1, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x0047F6A0, bool, __initializeToggleBotList_b__12_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0047F740, void, __initializeToggleBotList_b__12_3, app::PerformanceDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x0047F7F0, float, __initializeToggleBotList_b__12_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0047F890, void, __initializeToggleBotList_b__12_5, app::PerformanceDebugMenuPage_c* this_ptr, float v)
    IL2CPP_REGISTER_METHOD(0x0047F940, bool, __initializeProfilingList_b__13_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0047FA40, void, __initializeProfilingList_b__13_1, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x0047FB40, bool, __initializeProfilingList_b__13_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0047FC40, void, __initializeProfilingList_b__13_3, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x0047FD40, bool, __initializeProfilingList_b__13_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0047FE40, void, __initializeProfilingList_b__13_5, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x0047FF40, bool, __initializeProfilingList_b__13_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0047FFE0, void, __initializeProfilingList_b__13_7, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00480090, bool, __initializeProfilingList_b__13_8, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00480120, void, __initializeProfilingList_b__13_9, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004801C0, bool, __initializeProfilingList_b__13_10, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00480250, void, __initializeProfilingList_b__13_11, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004802F0, bool, __initializeProfilingList_b__13_12, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00480390, void, __initializeProfilingList_b__13_13, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00480440, bool, __initializeProfilingList_b__13_14, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00480450, void, __initializeProfilingList_b__13_15, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004805F0, bool, __initializeProfilingList_b__13_16, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00480680, void, __initializeProfilingList_b__13_17, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00480790, bool, __initializeProfilingList_b__13_18, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00480820, void, __initializeProfilingList_b__13_19, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00480930, bool, __initializeProfilingList_b__13_20, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004809C0, void, __initializeProfilingList_b__13_21, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00480AD0, int32_t, __initializeProfilingList_b__13_22, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00480B90, void, __initializeProfilingList_b__13_23, app::PerformanceDebugMenuPage_c* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00480C60, int32_t, __initializeProfilingList_b__13_24, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00480D20, void, __initializeProfilingList_b__13_25, app::PerformanceDebugMenuPage_c* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00480DF0, float, __initializeProfilingList_b__13_26, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00480EC0, void, __initializeProfilingList_b__13_27, app::PerformanceDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00480F90, float, __initializeProfilingList_b__13_28, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00481060, void, __initializeProfilingList_b__13_29, app::PerformanceDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00481130, bool, __initializeProfilingList_b__13_30, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004811D0, void, __initializeProfilingList_b__13_31, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004813E0, bool, __initializeProfilingList_b__13_32, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004813F0, void, __initializeProfilingList_b__13_33, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00481590, bool, __initializeProfilingList_b__13_34, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004815A0, void, __initializeProfilingList_b__13_35, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004815B0, bool, __initializeProfilingList_b__13_36, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00481640, void, __initializeProfilingList_b__13_37, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004816E0, bool, __initializeProfilingList_b__13_38, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00481780, void, __initializeProfilingList_b__13_39, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00481830, float, __initializeProfilingList_b__13_40, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004818D0, void, __initializeProfilingList_b__13_41, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x00481980, bool, __initializeProfilingList_b__13_42, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00481990, void, __initializeProfilingList_b__13_43, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00481AC0, bool, __initializeProfilingList_b__13_44, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00481BC0, bool, __initializeProfilingList_b__13_45, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00481D20, void, __initializeProfilingList_b__13_46, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00481F60, bool, __initializeProfilingList_b__13_47, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00482000, void, __initializeProfilingList_b__13_48, app::PerformanceDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x004820B0, bool, __initializeProfilingList_b__13_49, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00482140, void, __initializeProfilingList_b__13_50, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00482290, bool, __initializeProfilingList_b__13_51, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00482380, void, __initializeProfilingList_b__13_52, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00482480, bool, __initializeRenderingList_b__16_22, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00482520, void, __initializeRenderingList_b__16_23, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x004825D0, float, __initializeDisplayList_b__19_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00482680, void, __initializeDisplayList_b__19_1, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x00482740, float, __initializeDisplayList_b__19_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004827F0, void, __initializeDisplayList_b__19_3, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x004828B0, bool, __initializeDisplayList_b__19_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00482900, void, __initializeDisplayList_b__19_5, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00482960, int32_t, __initializeDisplayList_b__19_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004829B0, void, __initializeDisplayList_b__19_7, app::PerformanceDebugMenuPage_c* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x00482A00, int32_t, __initializeDisplayList_b__19_8, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00482A50, void, __initializeDisplayList_b__19_9, app::PerformanceDebugMenuPage_c* this_ptr, int32_t b)
    IL2CPP_REGISTER_METHOD(0x00482AA0, int32_t, __initializeDisplayList_b__19_10, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00482AF0, void, __initializeDisplayList_b__19_11, app::PerformanceDebugMenuPage_c* this_ptr, int32_t b)
    IL2CPP_REGISTER_METHOD(0x00482B40, bool, __initializeHDRList_b__20_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00482C10, void, __initializeHDRList_b__20_1, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00482CE0, bool, __initializeHDRList_b__20_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __initializeHDRList_b__20_3, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00482D70, bool, __initializeHDRList_b__20_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __initializeHDRList_b__20_5, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00482E00, bool, __initializeHDRList_b__20_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __initializeHDRList_b__20_7, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00482E90, bool, __initializeHDRList_b__20_8, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __initializeHDRList_b__20_9, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00482F60, bool, __initializeHDRList_b__20_10, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __initializeHDRList_b__20_11, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00482FF0, bool, __initializeHDRList_b__20_12, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00483130, void, __initializeHDRList_b__20_13, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00483270, float, __initializeHDRList_b__20_14, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004833B0, void, __initializeHDRList_b__20_15, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x004834F0, float, __initializeHDRList_b__20_22, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00483580, void, __initializeHDRList_b__20_23, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x00483620, float, __initializeHDRList_b__20_24, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004836B0, void, __initializeHDRList_b__20_25, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x00483750, float, __initializeHDRList_b__20_26, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004837E0, void, __initializeHDRList_b__20_27, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x004838A0, float, __initializeHDRList_b__20_28, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00483930, void, __initializeHDRList_b__20_29, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x004839D0, float, __initializeHDRList_b__20_30, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00483AF0, void, __initializeHDRList_b__20_31, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x00483B90, float, __initializeHDRList_b__20_32, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00483C20, void, __initializeHDRList_b__20_33, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x00483CC0, float, __initializeHDRList_b__20_34, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00483D50, void, __initializeHDRList_b__20_35, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x00483DF0, float, __initializeHDRList_b__20_36, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00483E80, void, __initializeHDRList_b__20_37, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x00483F20, float, __initializeHDRList_b__20_38, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00484040, void, __initializeHDRList_b__20_39, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x004840E0, float, __initializeHDRList_b__20_40, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00484200, void, __initializeHDRList_b__20_41, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x004842A0, float, __initializeHDRList_b__20_42, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004843E0, void, __initializeHDRList_b__20_43, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x00484520, float, __initializeHDRList_b__20_44, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00484660, void, __initializeHDRList_b__20_45, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x00484700, bool, __initializeHDRList_b__20_46, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004847A0, void, __initializeHDRList_b__20_47, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00484850, bool, __initializeCleanupLogicTweaks_b__21_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00484900, void, __initializeCleanupLogicTweaks_b__21_1, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004849B0, bool, __initializeCleanupLogicTweaks_b__21_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00484A60, void, __initializeCleanupLogicTweaks_b__21_3, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00484B10, float, __initializeCleanupLogicTweaks_b__21_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00484BC0, void, __initializeCleanupLogicTweaks_b__21_5, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x00484C80, bool, __initializeCleanupLogicTweaks_b__21_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00484D30, void, __initializeCleanupLogicTweaks_b__21_7, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00484DE0, int32_t, __initializeCleanupLogicTweaks_b__21_8, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00484E90, void, __initializeCleanupLogicTweaks_b__21_9, app::PerformanceDebugMenuPage_c* this_ptr, int32_t val)
    IL2CPP_REGISTER_METHOD(0x00484F40, float, __initializeCleanupLogicTweaks_b__21_10, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00484FF0, void, __initializeCleanupLogicTweaks_b__21_11, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x004850B0, int32_t, __initializeCleanupLogicTweaks_b__21_12, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00485160, void, __initializeCleanupLogicTweaks_b__21_13, app::PerformanceDebugMenuPage_c* this_ptr, int32_t val)
    IL2CPP_REGISTER_METHOD(0x00485210, int32_t, __initializeCleanupLogicTweaks_b__21_14, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004852C0, void, __initializeCleanupLogicTweaks_b__21_15, app::PerformanceDebugMenuPage_c* this_ptr, int32_t val)
    IL2CPP_REGISTER_METHOD(0x00485370, float, __initializeCleanupLogicTweaks_b__21_16, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00485420, void, __initializeCleanupLogicTweaks_b__21_17, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x004854E0, bool, __initializeCleanupLogicTweaks_b__21_18, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00485590, void, __initializeCleanupLogicTweaks_b__21_19, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00485640, float, __initializeCleanupLogicTweaks_b__21_20, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004856F0, void, __initializeCleanupLogicTweaks_b__21_21, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x004857B0, float, __initializeCleanupLogicTweaks_b__21_22, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00485860, void, __initializeCleanupLogicTweaks_b__21_23, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x00485920, float, __initializeCleanupLogicTweaks_b__21_24, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004859D0, void, __initializeCleanupLogicTweaks_b__21_25, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x00485A90, float, __initializeCleanupLogicTweaks_b__21_26, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00485B40, void, __initializeCleanupLogicTweaks_b__21_27, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x00485C00, float, __initializeCleanupLogicTweaks_b__21_28, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00485CB0, void, __initializeCleanupLogicTweaks_b__21_29, app::PerformanceDebugMenuPage_c* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x00485D70, bool, __initializeMemoryTweaks_b__22_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00485DC0, void, __initializeMemoryTweaks_b__22_1, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00485E10, bool, __initializeMemoryTweaks_b__22_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00485EA0, void, __initializeMemoryTweaks_b__22_3, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00485F40, int32_t, __initializeMemoryTweaks_b__22_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00485FE0, void, __initializeMemoryTweaks_b__22_5, app::PerformanceDebugMenuPage_c* this_ptr, int32_t b)
    IL2CPP_REGISTER_METHOD(0x00486090, bool, __initializeMemoryTweaks_b__22_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00486130, void, __initializeMemoryTweaks_b__22_7, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x004861E0, bool, __initializeMemoryTweaks_b__22_8, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00486270, void, __initializeMemoryTweaks_b__22_9, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00486310, int32_t, __initializeMemoryTweaks_b__22_10, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004863B0, void, __initializeMemoryTweaks_b__22_11, app::PerformanceDebugMenuPage_c* this_ptr, int32_t b)
    IL2CPP_REGISTER_METHOD(0x00486460, bool, __initializeMemoryTweaks_b__22_12, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00486500, void, __initializeMemoryTweaks_b__22_13, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x004865B0, bool, __initializeMemoryTweaks_b__22_14, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00486640, void, __initializeMemoryTweaks_b__22_15, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x004866E0, int32_t, __initializeMemoryTweaks_b__22_16, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00486780, void, __initializeMemoryTweaks_b__22_17, app::PerformanceDebugMenuPage_c* this_ptr, int32_t b)
    IL2CPP_REGISTER_METHOD(0x00486830, bool, __initializeMemoryTweaks_b__22_18, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004868D0, void, __initializeMemoryTweaks_b__22_19, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00486980, bool, __initializeMemoryTweaks_b__22_20, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00486A20, bool, __initializeMemoryTweaks_b__22_21, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00486A70, void, __initializeMemoryTweaks_b__22_22, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00486AC0, float, __initializeMemoryTweaks_b__22_23, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00486B10, void, __initializeMemoryTweaks_b__22_24, app::PerformanceDebugMenuPage_c* this_ptr, float b)
    IL2CPP_REGISTER_METHOD(0x00486B70, bool, __initializeMemoryTweaks_b__22_25, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00486C40, void, __initializeMemoryTweaks_b__22_26, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00486CE0, int32_t, __initializeMemoryTweaks_b__22_27, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00486D80, void, __initializeMemoryTweaks_b__22_28, app::PerformanceDebugMenuPage_c* this_ptr, int32_t val)
    IL2CPP_REGISTER_METHOD(0x00486E30, bool, __initializeMemoryTweaks_b__22_29, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00486ED0, bool, __initializeMemoryTweaks_b__22_30, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00486F70, bool, __initializeMemoryTweaks_b__22_31, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00487000, void, __initializeMemoryTweaks_b__22_32, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00487160, bool, __initializeMemoryTweaks_b__22_33, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00487210, void, __initializeMemoryTweaks_b__22_34, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004872C0, bool, __initializeMemoryTweaks_b__22_35, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00487370, void, __initializeMemoryTweaks_b__22_36, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00487420, bool, __initializeMemoryTweaks_b__22_37, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004874C0, void, __initializeMemoryTweaks_b__22_38, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(
        0x00487570,
        app::UberGCLogic_ResourceCollectPriorityMode__Enum,
        __initializeMemoryTweaks_b__22_39,
        app::PerformanceDebugMenuPage_c* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00487610,
        void,
        __initializeMemoryTweaks_b__22_40,
        app::PerformanceDebugMenuPage_c* this_ptr,
        app::UberGCLogic_ResourceCollectPriorityMode__Enum v
    )
    IL2CPP_REGISTER_METHOD(0x004876C0, bool, __initializeMemoryTweaks_b__22_41, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00487760, void, __initializeMemoryTweaks_b__22_42, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00487810, bool, __initializeMemoryTweaks_b__22_43, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004878B0, void, __initializeMemoryTweaks_b__22_44, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00487960, bool, __initializeMemoryTweaks_b__22_45, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00487A00, void, __initializeMemoryTweaks_b__22_46, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00487AB0, bool, __initializeMemoryTweaks_b__22_47, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00487B50, void, __initializeMemoryTweaks_b__22_48, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00487C00, float, __initializeMemoryTweaks_b__22_49, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00487CA0, void, __initializeMemoryTweaks_b__22_50, app::PerformanceDebugMenuPage_c* this_ptr, float f)
    IL2CPP_REGISTER_METHOD(0x00487D50, float, __initializeMemoryTweaks_b__22_51, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00487DF0, void, __initializeMemoryTweaks_b__22_52, app::PerformanceDebugMenuPage_c* this_ptr, float f)
    IL2CPP_REGISTER_METHOD(0x00487EA0, float, __initializeMemoryTweaks_b__22_53, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00487F40, void, __initializeMemoryTweaks_b__22_54, app::PerformanceDebugMenuPage_c* this_ptr, float f)
    IL2CPP_REGISTER_METHOD(0x00487FF0, bool, __initializeMemoryTweaks_b__22_55, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00488090, void, __initializeMemoryTweaks_b__22_56, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00488140, bool, __initializeMemoryTweaks_b__22_57, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004881E0, void, __initializeMemoryTweaks_b__22_58, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00488290, bool, __initializeMemoryTweaks_b__22_59, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00488330, void, __initializeMemoryTweaks_b__22_60, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004883E0, float, __initializeMemoryTweaks_b__22_61, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00488480, void, __initializeMemoryTweaks_b__22_62, app::PerformanceDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00488530, float, __initializeMemoryTweaks_b__22_63, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004885D0, void, __initializeMemoryTweaks_b__22_64, app::PerformanceDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00488780, bool, __initializeMemoryTweaks_b__22_65, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004888B0, bool, __initializeMemoryTweaks_b__22_66, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00488950, bool, __initializeMemoryTweaks_b__22_67, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004889F0, bool, __initializeMemoryTweaks_b__22_68, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00488B00, bool, __initializeMemoryTweaks_b__22_69, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00488BC0, bool, __initializeMemoryTweaks_b__22_70, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00488C80, bool, __initializeMemoryTweaks_b__22_71, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00489050, bool, __initializeMemoryTweaks_b__22_72, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00489110, bool, __initializeAnimationTweaks_b__27_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004891B0, void, __initializeAnimationTweaks_b__27_1, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00489260, bool, __initializeAnimationTweaks_b__27_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00489300, void, __initializeAnimationTweaks_b__27_3, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x004893B0, bool, __initializeAnimationTweaks_b__27_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00489450, void, __initializeAnimationTweaks_b__27_5, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00489500, bool, __initializeAnimationTweaks_b__27_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004895A0, void, __initializeAnimationTweaks_b__27_7, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00489650, bool, __initializeAnimationTweaks_b__27_8, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004896E0, void, __initializeAnimationTweaks_b__27_9, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x004898D0, bool, __initializeAnimationTweaks_b__27_10, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004899F0, void, __initializeAnimationTweaks_b__27_11, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00489B50, bool, __initializeAudioTweaks_b__28_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00489BF0, void, __initializeAudioTweaks_b__28_1, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00489CA0, bool, __initializeAudioTweaks_b__28_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00489D40, void, __initializeAudioTweaks_b__28_3, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00489DF0, bool, __initializeAudioTweaks_b__28_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00489E90, void, __initializeAudioTweaks_b__28_5, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00489FB0, bool, __initializeAudioTweaks_b__28_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048A040, void, __initializeAudioTweaks_b__28_7, app::PerformanceDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x0048A0D0, bool, __initializeAudioTweaks_b__28_8, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048A170, void, __initializeAudioTweaks_b__28_9, app::PerformanceDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x0048A220, bool, __initializeAudioTweaks_b__28_10, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048A2C0, void, __initializeAudioTweaks_b__28_11, app::PerformanceDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x0048A370, int32_t, __initializeAudioTweaks_b__28_12, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048A410, void, __initializeAudioTweaks_b__28_13, app::PerformanceDebugMenuPage_c* this_ptr, int32_t b)
    IL2CPP_REGISTER_METHOD(
        0x0048A4B0,
        app::GameplaySoundManager_AudioQualitySetting__Enum,
        __initializeAudioTweaks_b__28_14,
        app::PerformanceDebugMenuPage_c* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0048A560,
        void,
        __initializeAudioTweaks_b__28_15,
        app::PerformanceDebugMenuPage_c* this_ptr,
        app::GameplaySoundManager_AudioQualitySetting__Enum v
    )
    IL2CPP_REGISTER_METHOD(0x0048A620, bool, __initializeAnimatorTweaks_b__29_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048A6C0, void, __initializeAnimatorTweaks_b__29_1, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x0048A770, bool, __initializeAnimatorTweaks_b__29_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048A810, void, __initializeAnimatorTweaks_b__29_3, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x0048A8C0, bool, __initializeAnimatorTweaks_b__29_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048A960, void, __initializeAnimatorTweaks_b__29_5, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x0048AA10, bool, __initializeAnimatorTweaks_b__29_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048AAB0, void, __initializeAnimatorTweaks_b__29_7, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x0048AB60, bool, __initializeAnimatorTweaks_b__29_8, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048AC30, void, __initializeAnimatorTweaks_b__29_9, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0048AC40, bool, __initializeAnimatorTweaks_b__29_10, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048ACE0, void, __initializeAnimatorTweaks_b__29_11, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0048AD90, bool, __initializeInteractionTweaks_b__30_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048AE40, void, __initializeInteractionTweaks_b__30_1, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x0048AEF0, bool, __initializeInteractionTweaks_b__30_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048AF90, void, __initializeInteractionTweaks_b__30_3, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0048B040, bool, __initializeInteractionTweaks_b__30_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048B0E0, void, __initializeInteractionTweaks_b__30_5, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0048B190, bool, __initializeInteractionTweaks_b__30_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048B230, void, __initializeInteractionTweaks_b__30_7, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0048B2E0, bool, __initializeMoonDriverTweaks_b__31_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048B380, void, __initializeMoonDriverTweaks_b__31_1, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x0048B430, bool, __initializeFakingTweaks_b__32_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048B550, void, __initializeFakingTweaks_b__32_1, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x0048B5F0, int32_t, __initializeFakingTweaks_b__32_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048B690, void, __initializeFakingTweaks_b__32_3, app::PerformanceDebugMenuPage_c* this_ptr, int32_t b)
    IL2CPP_REGISTER_METHOD(0x0048B740, bool, __initializeSceneStreamingTweaks_b__33_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048B7E0, void, __initializeSceneStreamingTweaks_b__33_1, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0048B890, bool, __initializeSceneStreamingTweaks_b__33_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048B930, void, __initializeSceneStreamingTweaks_b__33_3, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0048B9D0, bool, __initializeSceneStreamingTweaks_b__33_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048BA70, void, __initializeSceneStreamingTweaks_b__33_5, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0048BB20, bool, __initializeSceneStreamingTweaks_b__33_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048BBC0, void, __initializeSceneStreamingTweaks_b__33_7, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0048BC70, bool, __initializeSceneStreamingTweaks_b__33_8, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048BD10, void, __initializeSceneStreamingTweaks_b__33_9, app::PerformanceDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x0048BDC0, int32_t, __initializeSceneStreamingTweaks_b__33_10, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048BE60, void, __initializeSceneStreamingTweaks_b__33_11, app::PerformanceDebugMenuPage_c* this_ptr, int32_t v)
    IL2CPP_REGISTER_METHOD(0x0048BF10, int32_t, __initializeSceneStreamingTweaks_b__33_12, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048BFB0, void, __initializeSceneStreamingTweaks_b__33_13, app::PerformanceDebugMenuPage_c* this_ptr, int32_t v)
    IL2CPP_REGISTER_METHOD(0x0048C060, int32_t, __initializeSceneStreamingTweaks_b__33_14, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048C100, void, __initializeSceneStreamingTweaks_b__33_15, app::PerformanceDebugMenuPage_c* this_ptr, int32_t v)
    IL2CPP_REGISTER_METHOD(0x0048C1B0, bool, __initializeSceneStreamingTweaks_b__33_16, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048C200, void, __initializeSceneStreamingTweaks_b__33_17, app::PerformanceDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x0048C250, app::ThreadPriority__Enum_1, __initializeSceneStreamingTweaks_b__33_18, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0048C2A0,
        void,
        __initializeSceneStreamingTweaks_b__33_19,
        app::PerformanceDebugMenuPage_c* this_ptr,
        app::ThreadPriority__Enum_1 value
    )
    IL2CPP_REGISTER_METHOD(0x0048C2F0, bool, __initializeSceneStreamingTweaks_b__33_20, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048C340, bool, __initializeSceneStreamingTweaks_b__33_21, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048C3E0, void, __initializeSceneStreamingTweaks_b__33_22, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0048C480, float, __initializeSceneStreamingTweaks_b__33_23, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048C530, void, __initializeSceneStreamingTweaks_b__33_24, app::PerformanceDebugMenuPage_c* this_ptr, float f)
    IL2CPP_REGISTER_METHOD(0x0048C5F0, float, __initializeSceneStreamingTweaks_b__33_25, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048C690, void, __initializeSceneStreamingTweaks_b__33_26, app::PerformanceDebugMenuPage_c* this_ptr, float f)
    IL2CPP_REGISTER_METHOD(0x0048C740, int32_t, __initializeSceneStreamingTweaks_b__33_27, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048C7E0, void, __initializeSceneStreamingTweaks_b__33_28, app::PerformanceDebugMenuPage_c* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x0048C880, int32_t, __initializeSceneStreamingTweaks_b__33_29, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048C920, void, __initializeSceneStreamingTweaks_b__33_30, app::PerformanceDebugMenuPage_c* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x0048C9C0, int32_t, __initializeSceneStreamingTweaks_b__33_31, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048CA60, void, __initializeSceneStreamingTweaks_b__33_32, app::PerformanceDebugMenuPage_c* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x0048CB00, int32_t, __initializeSceneStreamingTweaks_b__33_33, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048CBA0, void, __initializeSceneStreamingTweaks_b__33_34, app::PerformanceDebugMenuPage_c* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x0048CC40, bool, __initializeSceneStreamingTweaks_b__33_35, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048CCE0, void, __initializeSceneStreamingTweaks_b__33_36, app::PerformanceDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x0048CD90, bool, __initializeSceneStreamingTweaks_b__33_37, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048CE30, void, __initializeSceneStreamingTweaks_b__33_38, app::PerformanceDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(
        0x0048CEE0,
        app::LoadingBoostController_BoostModeLevel__Enum,
        __initializeSceneStreamingTweaks_b__33_39,
        app::PerformanceDebugMenuPage_c* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0048CF70,
        void,
        __initializeSceneStreamingTweaks_b__33_40,
        app::PerformanceDebugMenuPage_c* this_ptr,
        app::LoadingBoostController_BoostModeLevel__Enum v
    )
    IL2CPP_REGISTER_METHOD(0x0048D010, bool, __initializeSceneStreamingTweaks_b__33_41, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048D0B0, void, __initializeSceneStreamingTweaks_b__33_42, app::PerformanceDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x0048D160, bool, __initializeSceneStreamingTweaks_b__33_43, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048D200, void, __initializeSceneStreamingTweaks_b__33_44, app::PerformanceDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(
        0x0048D2B0,
        app::MoonRenderPipelineDebugUI_Quality__Enum,
        __initializeSRPQualityToggles_b__36_0,
        app::PerformanceDebugMenuPage_c* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0048D360,
        void,
        __initializeSRPQualityToggles_b__36_1,
        app::PerformanceDebugMenuPage_c* this_ptr,
        app::MoonRenderPipelineDebugUI_Quality__Enum value
    )
    IL2CPP_REGISTER_METHOD(
        0x0048D420,
        app::XboxQualityModeManager_QualityMode__Enum,
        __initializeSRPQualityToggles_b__36_2,
        app::PerformanceDebugMenuPage_c* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0048D4B0,
        void,
        __initializeSRPQualityToggles_b__36_3,
        app::PerformanceDebugMenuPage_c* this_ptr,
        app::XboxQualityModeManager_QualityMode__Enum mode
    )
    IL2CPP_REGISTER_METHOD(0x0048D550, bool, __initializeSRPQualityToggles_b__36_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048D5E0, void, __initializeSRPQualityToggles_b__36_5, app::PerformanceDebugMenuPage_c* this_ptr, bool mode)
    IL2CPP_REGISTER_METHOD(0x0048D680, bool, __initializeSRPQualityToggles_b__36_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048D720, void, __initializeSRPQualityToggles_b__36_7, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(
        0x0048D7D0,
        app::MoonRenderPipelineAsset_DofBlurType__Enum,
        __initializeSRPQualityToggles_b__36_8,
        app::PerformanceDebugMenuPage_c* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0048D800,
        void,
        __initializeSRPQualityToggles_b__36_9,
        app::PerformanceDebugMenuPage_c* this_ptr,
        app::MoonRenderPipelineAsset_DofBlurType__Enum value
    )
    IL2CPP_REGISTER_METHOD(
        0x0048D830,
        app::MoonRenderPipelineDebugUI_TextureQuality__Enum,
        __initializeSRPQualityToggles_b__36_10,
        app::PerformanceDebugMenuPage_c* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0048D880,
        void,
        __initializeSRPQualityToggles_b__36_11,
        app::PerformanceDebugMenuPage_c* this_ptr,
        app::MoonRenderPipelineDebugUI_TextureQuality__Enum quality
    )
    IL2CPP_REGISTER_METHOD(0x0048D8D0, bool, __initializeSRPQualityToggles_b__36_12, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048D990, float, __initializeSRPQualityToggles_b__36_13, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048D9E0, void, __initializeSRPQualityToggles_b__36_14, app::PerformanceDebugMenuPage_c* this_ptr, float v)
    IL2CPP_REGISTER_METHOD(0x0048DC50, app::FilterMode__Enum, __initializeSRPQualityToggles_b__36_15, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048DCF0, void, __initializeSRPQualityToggles_b__36_16, app::PerformanceDebugMenuPage_c* this_ptr, app::FilterMode__Enum v)
    IL2CPP_REGISTER_METHOD(0x0048DED0, bool, __initializeAITweaks_b__37_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048DF70, void, __initializeAITweaks_b__37_1, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(
        0x0048E020,
        app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum,
        __initializeAITweaks_b__37_2,
        app::PerformanceDebugMenuPage_c* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0048E0B0,
        void,
        __initializeAITweaks_b__37_3,
        app::PerformanceDebugMenuPage_c* this_ptr,
        app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum value
    )
    IL2CPP_REGISTER_METHOD(0x0048E140, int32_t, __initializeAITweaks_b__37_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048E1D0, void, __initializeAITweaks_b__37_5, app::PerformanceDebugMenuPage_c* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0048E260, bool, __initializeAITweaks_b__37_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048E300, void, __initializeAITweaks_b__37_7, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0048E3B0, bool, __initializeAITweaks_b__37_8, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048E450, void, __initializeAITweaks_b__37_9, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x0048E500, int32_t, __initializeAITweaks_b__37_10, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048E5A0, void, __initializeAITweaks_b__37_11, app::PerformanceDebugMenuPage_c* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0048E640, float, __initializeAITweaks_b__37_12, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048E6E0, void, __initializeAITweaks_b__37_13, app::PerformanceDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0048E790, bool, __initializeAITweaks_b__37_14, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048E830, void, __initializeAITweaks_b__37_15, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x0048E8E0, bool, __initializeAITweaks_b__37_16, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048E980, void, __initializeAITweaks_b__37_17, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x0048EA30, float, __initializeAITweaks_b__37_18, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048EAD0, void, __initializeAITweaks_b__37_19, app::PerformanceDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0048EB90, bool, __initializeAITweaks_b__37_20, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048EC30, void, __initializeAITweaks_b__37_21, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x0048EE00, bool, __initializeAITweaks_b__37_22, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048EEA0, void, __initializeAITweaks_b__37_23, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x0048EF50, bool, __initializeAITweaks_b__37_24, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048EFF0, void, __initializeAITweaks_b__37_25, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x0048F0A0, bool, __initializeAITweaks_b__37_26, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048F2A0, bool, __initializeAITweaks_b__37_27, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048F4A0, bool, __initializeAITweaks_b__37_28, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048F640, bool, __initializeAITweaks_b__37_29, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048F6E0, void, __initializeAITweaks_b__37_30, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x0048F790, bool, __initializeAITweaks_b__37_31, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048F830, void, __initializeAITweaks_b__37_32, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x0048F8E0, bool, __initializeRaycastTweaks_b__38_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048F980, void, __initializeRaycastTweaks_b__38_1, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0048FA30, bool, __initializeRaycastTweaks_b__38_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048FAD0, void, __initializeRaycastTweaks_b__38_3, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0048FB80, bool, __initializeRaycastTweaks_b__38_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048FC20, void, __initializeRaycastTweaks_b__38_5, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0048FCD0, bool, __initializeRaycastTweaks_b__38_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048FD70, void, __initializeRaycastTweaks_b__38_7, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0048FE20, bool, __initializeRaycastTweaks_b__38_8, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0048FEC0, void, __initializeRaycastTweaks_b__38_9, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0048FF70, bool, __initializeRaycastTweaks_b__38_10, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00490010, void, __initializeRaycastTweaks_b__38_11, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004900C0, bool, __initializeRaycastTweaks_b__38_12, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00490160, void, __initializeRaycastTweaks_b__38_13, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00490210, bool, __initializeParticleTweaks_b__39_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00490410, bool, __initializeParticleTweaks_b__39_1, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00490460, void, __initializeParticleTweaks_b__39_2, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004904B0, bool, __initializeParticleTweaks_b__39_3, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00490550, void, __initializeParticleTweaks_b__39_4, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00490600, bool, __initializeParticleTweaks_b__39_5, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004906A0, void, __initializeParticleTweaks_b__39_6, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00490750, int32_t, __initializeParticleTweaks_b__39_7, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004907F0, void, __initializeParticleTweaks_b__39_8, app::PerformanceDebugMenuPage_c* this_ptr, int32_t v)
    IL2CPP_REGISTER_METHOD(0x00490890, int32_t, __initializeParticleTweaks_b__39_9, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00490930, void, __initializeParticleTweaks_b__39_10, app::PerformanceDebugMenuPage_c* this_ptr, int32_t v)
    IL2CPP_REGISTER_METHOD(0x004909E0, float, __initializeParticleTweaks_b__39_11, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00490A80, void, __initializeParticleTweaks_b__39_12, app::PerformanceDebugMenuPage_c* this_ptr, float v)
    IL2CPP_REGISTER_METHOD(0x00490B30, int32_t, __initializeParticleTweaks_b__39_13, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00490BD0, void, __initializeParticleTweaks_b__39_14, app::PerformanceDebugMenuPage_c* this_ptr, int32_t v)
    IL2CPP_REGISTER_METHOD(0x00490C70, int32_t, __initializeParticleTweaks_b__39_15, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00490D10, void, __initializeParticleTweaks_b__39_16, app::PerformanceDebugMenuPage_c* this_ptr, int32_t v)
    IL2CPP_REGISTER_METHOD(0x00490DC0, float, __initializeParticleTweaks_b__39_17, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00490E60, void, __initializeParticleTweaks_b__39_18, app::PerformanceDebugMenuPage_c* this_ptr, float v)
    IL2CPP_REGISTER_METHOD(0x00490F10, bool, __initializeParticleTweaks_b__39_19, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00490FB0, void, __initializeParticleTweaks_b__39_20, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00491060, bool, __initializeParticleTweaks_b__39_21, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00491100, void, __initializeParticleTweaks_b__39_22, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004911B0, bool, __initializeParticleTweaks_b__39_23, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00491250, void, __initializeParticleTweaks_b__39_24, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00491300, bool, __initializePickupTweaks_b__40_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004913A0, void, __initializePickupTweaks_b__40_1, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00491450, bool, __initializePickupTweaks_b__40_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004914F0, void, __initializePickupTweaks_b__40_3, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004915A0, app::GraphicsJobsSyncPoint__Enum, __initializeSyncingTweaks_b__41_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004915F0, void, __initializeSyncingTweaks_b__41_1, app::PerformanceDebugMenuPage_c* this_ptr, app::GraphicsJobsSyncPoint__Enum b)
    IL2CPP_REGISTER_METHOD(0x00491640, app::WaitForPresentSyncPoint__Enum, __initializeSyncingTweaks_b__41_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00491690, void, __initializeSyncingTweaks_b__41_3, app::PerformanceDebugMenuPage_c* this_ptr, app::WaitForPresentSyncPoint__Enum b)
    IL2CPP_REGISTER_METHOD(0x004916E0, bool, __initializeTimeTweaks_b__42_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00491790, void, __initializeTimeTweaks_b__42_1, app::PerformanceDebugMenuPage_c* this_ptr, bool v)
    IL2CPP_REGISTER_METHOD(0x004918C0, app::DeltaTimeManager_ControllerType__Enum, __initializeTimeTweaks_b__42_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00491970,
        void,
        __initializeTimeTweaks_b__42_3,
        app::PerformanceDebugMenuPage_c* this_ptr,
        app::DeltaTimeManager_ControllerType__Enum v
    )
    IL2CPP_REGISTER_METHOD(0x00491A50, int32_t, __initializeTimeTweaks_b__42_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00491AF0, void, __initializeTimeTweaks_b__42_5, app::PerformanceDebugMenuPage_c* this_ptr, int32_t v)
    IL2CPP_REGISTER_METHOD(0x00491B90, float, __initializeTimeTweaks_b__42_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00491C40, void, __initializeTimeTweaks_b__42_7, app::PerformanceDebugMenuPage_c* this_ptr, float v)
    IL2CPP_REGISTER_METHOD(0x00491D00, bool, __initializeWaterTweaks_b__43_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00491DA0, void, __initializeWaterTweaks_b__43_5, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00491E50, bool, __initializeThreadingTweaks_b__44_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00491EE0, void, __initializeThreadingTweaks_b__44_1, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(
        0x00492010,
        app::MainThreadWorkStealer_WorkStealingMode__Enum,
        __initializeThreadingTweaks_b__44_2,
        app::PerformanceDebugMenuPage_c* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x004920A0,
        void,
        __initializeThreadingTweaks_b__44_3,
        app::PerformanceDebugMenuPage_c* this_ptr,
        app::MainThreadWorkStealer_WorkStealingMode__Enum value
    )
    IL2CPP_REGISTER_METHOD(
        0x004921D0,
        app::MainThreadWorkStealer_TimeBudgetMode__Enum,
        __initializeThreadingTweaks_b__44_4,
        app::PerformanceDebugMenuPage_c* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00492260,
        void,
        __initializeThreadingTweaks_b__44_5,
        app::PerformanceDebugMenuPage_c* this_ptr,
        app::MainThreadWorkStealer_TimeBudgetMode__Enum value
    )
    IL2CPP_REGISTER_METHOD(0x00492390, float, __initializeThreadingTweaks_b__44_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00492430, void, __initializeThreadingTweaks_b__44_7, app::PerformanceDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004924E0, float, __initializeThreadingTweaks_b__44_8, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00492580, void, __initializeThreadingTweaks_b__44_9, app::PerformanceDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00492630, bool, __initializeRenderingTweaks_b__45_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00492680, void, __initializeRenderingTweaks_b__45_1, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004926D0, bool, __initializeRenderingTweaks_b__45_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00492720, void, __initializeRenderingTweaks_b__45_3, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00492770, bool, __initializeRenderingTweaks_b__45_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004927C0, void, __initializeRenderingTweaks_b__45_5, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00492810, bool, __initializeRenderingTweaks_b__45_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00492860, void, __initializeRenderingTweaks_b__45_7, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004928B0, bool, __initializeRenderingTweaks_b__45_8, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00492900, void, __initializeRenderingTweaks_b__45_9, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00492950, bool, __initializeRenderingTweaks_b__45_10, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004929A0, void, __initializeRenderingTweaks_b__45_11, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004929F0, bool, __initializeRenderingTweaks_b__45_12, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00492A40, void, __initializeRenderingTweaks_b__45_13, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00492A90, int32_t, __initializeRenderingTweaks_b__45_14, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00492AE0, void, __initializeRenderingTweaks_b__45_15, app::PerformanceDebugMenuPage_c* this_ptr, int32_t v)
    IL2CPP_REGISTER_METHOD(0x00492B30, bool, __initializeRenderingTweaks_b__45_18, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00492B80, void, __initializeRenderingTweaks_b__45_19, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00492BD0, bool, __initializeRenderingTweaks_b__45_20, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00492C60, void, __initializeRenderingTweaks_b__45_21, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00492D90, bool, __initializeRenderingTweaks_b__45_22, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00492DE0, void, __initializeRenderingTweaks_b__45_23, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00492E30, bool, __initializeRenderingTweaks_b__45_24, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00492ED0, void, __initializeRenderingTweaks_b__45_25, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00492F80, bool, __initializeRenderingTweaks_b__45_26, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00493020, void, __initializeRenderingTweaks_b__45_27, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004930D0, bool, __initializeRenderingTweaks_b__45_28, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00493170, void, __initializeRenderingTweaks_b__45_29, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00493220, bool, __initializeRenderingTweaks_b__45_36, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004932C0, void, __initializeRenderingTweaks_b__45_37, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00493370, bool, __initializeAbilityTweaks_b__47_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00493410, void, __initializeAbilityTweaks_b__47_1, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004934C0, bool, __initializeAbilityTweaks_b__47_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00493560, void, __initializeAbilityTweaks_b__47_3, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00493610, bool, __initializeAbilityTweaks_b__47_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004936B0, void, __initializeAbilityTweaks_b__47_5, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00493760, bool, __initializeCharacterMovementTweaks_b__48_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00493800, void, __initializeCharacterMovementTweaks_b__48_1, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004938B0, bool, __initializeCharacterMovementTweaks_b__48_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00493950, void, __initializeCharacterMovementTweaks_b__48_3, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00493A00, bool, __initializeCharacterMovementTweaks_b__48_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00493AA0, void, __initializeCharacterMovementTweaks_b__48_5, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00493B50, bool, __initializeCharacterMovementTweaks_b__48_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00493BF0, void, __initializeCharacterMovementTweaks_b__48_7, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00493CA0, bool, __initializeCharacterMovementTweaks_b__48_8, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00493D40, void, __initializeCharacterMovementTweaks_b__48_9, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00493DF0, bool, __initializeCharacterMovementTweaks_b__48_10, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00493E90, void, __initializeCharacterMovementTweaks_b__48_11, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00493F40, bool, __initializeCharacterMovementTweaks_b__48_12, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00493FE0, void, __initializeCharacterMovementTweaks_b__48_13, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00494090, bool, __initializeCharacterMovementTweaks_b__48_14, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00494130, void, __initializeCharacterMovementTweaks_b__48_15, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004941E0, float, __initializeCharacterMovementTweaks_b__48_16, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00494280, void, __initializeCharacterMovementTweaks_b__48_17, app::PerformanceDebugMenuPage_c* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00494330, bool, __initializeCharacterMovementTweaks_b__48_18, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004943D0, void, __initializeCharacterMovementTweaks_b__48_19, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00494480, bool, __initializeCharacterMovementTweaks_b__48_20, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00494520, void, __initializeCharacterMovementTweaks_b__48_21, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004945D0, bool, __initializeMiscTweaks_b__50_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00494670, void, __initializeMiscTweaks_b__50_1, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00494720, bool, __initializeMiscTweaks_b__50_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004947C0, void, __initializeMiscTweaks_b__50_3, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00494870, bool, __initializeMiscTweaks_b__50_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00494910, void, __initializeMiscTweaks_b__50_5, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004949C0, bool, __initializeMiscTweaks_b__50_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00494A60, void, __initializeMiscTweaks_b__50_7, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00494B10, bool, __initializeMiscTweaks_b__50_8, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00494BB0, void, __initializeMiscTweaks_b__50_9, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00494C60, bool, __initializeMiscTweaks_b__50_10, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00494D00, void, __initializeMiscTweaks_b__50_11, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00494DB0, float, __initializeMiscTweaks_b__50_12, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00494E50, void, __initializeMiscTweaks_b__50_13, app::PerformanceDebugMenuPage_c* this_ptr, float f)
    IL2CPP_REGISTER_METHOD(0x00494F00, bool, __initializeMiscTweaks_b__50_14, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00494FA0, void, __initializeMiscTweaks_b__50_15, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00495050, bool, __initializeMiscTweaks_b__50_16, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004950F0, void, __initializeMiscTweaks_b__50_17, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x004951A0, bool, __initializeMiscTweaks_b__50_18, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00495240, void, __initializeMiscTweaks_b__50_19, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x004952F0, bool, __initializeMiscTweaks_b__50_20, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00495410, void, __initializeMiscTweaks_b__50_21, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00495540, bool, __initializeMiscTweaks_b__50_22, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004955E0, void, __initializeMiscTweaks_b__50_23, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00495690, bool, __initializeMiscTweaks_b__50_24, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00495730, void, __initializeMiscTweaks_b__50_25, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x004957E0, bool, __initializeMiscTweaks_b__50_26, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00495880, void, __initializeMiscTweaks_b__50_27, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00495930, bool, __initializeMiscTweaks_b__50_28, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004959D0, void, __initializeMiscTweaks_b__50_29, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00495A80, bool, __initializePhysicsTweaks_b__51_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00495AD0, void, __initializePhysicsTweaks_b__51_1, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00495B20, bool, __initializePhysicsTweaks_b__51_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00495B70, void, __initializePhysicsTweaks_b__51_3, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00495BC0, bool, __initializePhysicsTweaks_b__51_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00495C60, void, __initializePhysicsTweaks_b__51_5, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00495D10, float, __initializePhysicsTweaks_b__51_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00495DB0, void, __initializePhysicsTweaks_b__51_7, app::PerformanceDebugMenuPage_c* this_ptr, float b)
    IL2CPP_REGISTER_METHOD(0x00495E60, bool, __initializePhysicsTweaks_b__51_8, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00495F00, void, __initializePhysicsTweaks_b__51_9, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00495FB0, bool, __initializePhysicsTweaks_b__51_10, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00496050, void, __initializePhysicsTweaks_b__51_11, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00496100, bool, __initializePhysicsTweaks_b__51_12, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004961A0, void, __initializePhysicsTweaks_b__51_13, app::PerformanceDebugMenuPage_c* this_ptr, bool b)
    IL2CPP_REGISTER_METHOD(0x00496250, app::JobMode__Enum, __initializePhysicalSystemTweaksList_b__52_0, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004962F0, void, __initializePhysicalSystemTweaksList_b__52_1, app::PerformanceDebugMenuPage_c* this_ptr, app::JobMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x00496390, bool, __initializePhysicalSystemTweaksList_b__52_2, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00496430, void, __initializePhysicalSystemTweaksList_b__52_3, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004964E0, app::JobMode__Enum, __initializePhysicalSystemTweaksList_b__52_4, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00496580, void, __initializePhysicalSystemTweaksList_b__52_5, app::PerformanceDebugMenuPage_c* this_ptr, app::JobMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x00496620, bool, __initializePhysicalSystemTweaksList_b__52_6, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004966C0, void, __initializePhysicalSystemTweaksList_b__52_7, app::PerformanceDebugMenuPage_c* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00496770, bool, __initializePhysicalSystemTweaksList_b__52_8, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00496810, void, __initializePhysicalSystemTweaksList_b__52_9, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x004968C0, bool, __initializePhysicalSystemTweaksList_b__52_10, app::PerformanceDebugMenuPage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00496960, void, __initializePhysicalSystemTweaksList_b__52_11, app::PerformanceDebugMenuPage_c* this_ptr, bool val)
} // namespace app::classes::PerformanceDebugMenuPage___c
