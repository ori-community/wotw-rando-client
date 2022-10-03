#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::HierarchyPerformanceTest::HierarchyTestBulkTool {
    IL2CPP_REGISTER_METHOD(0x014A0850, app::HierarchyTestBulkTool*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x014A08F0, bool, get_IsStopped, ())
    IL2CPP_REGISTER_METHOD(0x014A0990, void, set_IsStopped, (bool value))
    IL2CPP_REGISTER_METHOD(0x014A0A40, bool, get_IsRunning, ())
    IL2CPP_REGISTER_METHOD(0x014A0B60, void, Scan_1, (int32_t start_scene_index, int32_t max_scenes, int32_t max_objects_to_scan))
    IL2CPP_REGISTER_METHOD(0x014A1000, void, Start, (app::List_1_RuntimeSceneMetaData_ * scenes, int32_t max_objects_to_scan))
    IL2CPP_REGISTER_METHOD(0x014A1180, void, Stop, ())
    IL2CPP_REGISTER_METHOD(0x014A1220, app::HierarchyTestBulkTool*, CreateInstance, ())
    IL2CPP_REGISTER_METHOD(0x014A13B0, void, Scan_2, (app::HierarchyTestBulkTool * this_ptr, app::List_1_RuntimeSceneMetaData_* scenes, int32_t max_objects_to_scan))
    IL2CPP_REGISTER_METHOD(0x014A17B0, void, Update, (app::HierarchyTestBulkTool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A18A0, void, OnGUI, (app::HierarchyTestBulkTool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A1C90, void, UpdateState, (app::HierarchyTestBulkTool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A2050, void, ChangeState, (app::HierarchyTestBulkTool * this_ptr, app::HierarchyTestBulkTool_State__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x014A2C30, void, LoadLevel, (app::HierarchyTestBulkTool * this_ptr, app::RuntimeSceneMetaData* scene))
    IL2CPP_REGISTER_METHOD(0x014A2D00, void, LoadEmptyLevel, (app::HierarchyTestBulkTool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A2E00, void, ctor, (app::HierarchyTestBulkTool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A3310, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x014A3390, void, _ChangeState_b__32_0, (app::HierarchyTestBulkTool * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477E6F0, HierarchyTestBulkTool__ChangeState_b__32_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014A3450, void, _ChangeState_b__32_1, (app::HierarchyTestBulkTool * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04766AD0, HierarchyTestBulkTool__ChangeState_b__32_1__MethodInfo)
} // namespace app::classes::Moon::HierarchyPerformanceTest::HierarchyTestBulkTool
