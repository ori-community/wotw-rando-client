#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem.h>
#include <Modloader/app/structs/HierarchySuspensionTest.h>
#include <Modloader/app/structs/HierarchySuspensionTest_State__Enum.h>

namespace app::classes::HierarchySuspensionTest {
    IL2CPP_REGISTER_METHOD(0x00B54420, void, Scan, app::HierarchySuspensionTest* this_ptr, app::HierarchyDebugMenu_GameObjectItem* item)
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_IsRunning, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B54520, int32_t, get_ObjectsLeft, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B545B0, void, ChangeState, app::HierarchySuspensionTest* this_ptr, app::HierarchySuspensionTest_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x00B54910, void, Update, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B54AB0, void, UpdateState, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B54BE0, void, StartTest, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B54CE0, void, EndTest, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B54E70, void, OnEnterIdle, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B54F10, void, OnEnterMeasureBaseline, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B54FB0, void, OnEnterPrepare, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B55170, void, OnEnterProcess, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B55210, void, OnEnterPost, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitIdle, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B55610, void, OnExitMeasureBaseline, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitPrepare, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B557C0, void, OnExitProcess, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitPost, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B55860, void, OnIdleUpdate, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B559F0, void, OnMeasureBaselineUpdate, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B55A10, void, OnPrepareUpdate, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B55A30, void, OnProcessUpdate, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPostUpdate, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B55A50, double, GetCurrentCapturedCPUTime, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B55B00, double, GetCurrentCapturedGPUTime, app::HierarchySuspensionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B55BB0, void, ctor, app::HierarchySuspensionTest* this_ptr)
} // namespace app::classes::HierarchySuspensionTest
