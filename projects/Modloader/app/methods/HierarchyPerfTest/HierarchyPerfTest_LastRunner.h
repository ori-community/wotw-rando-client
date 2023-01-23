#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HierarchyPerfTest_LastRunner.h>

namespace app::classes::HierarchyPerfTest::HierarchyPerfTest_LastRunner {
    IL2CPP_REGISTER_METHOD(0x01973E70, void, Awake, (app::HierarchyPerfTest_LastRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01973F10, void, Start, (app::HierarchyPerfTest_LastRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01973FB0, void, Update, (app::HierarchyPerfTest_LastRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01974050, void, FixedUpdate, (app::HierarchyPerfTest_LastRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019740F0, void, LateUpdate, (app::HierarchyPerfTest_LastRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01974190, void, OnEnable, (app::HierarchyPerfTest_LastRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01974230, void, OnDisable, (app::HierarchyPerfTest_LastRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019742D0, void, OnDestroy, (app::HierarchyPerfTest_LastRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HierarchyPerfTest_LastRunner * this_ptr))
} // namespace app::classes::HierarchyPerfTest::HierarchyPerfTest_LastRunner
