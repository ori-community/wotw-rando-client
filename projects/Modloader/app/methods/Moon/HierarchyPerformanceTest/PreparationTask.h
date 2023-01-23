#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PreparationTask.h>

namespace app::classes::Moon::HierarchyPerformanceTest::PreparationTask {
    IL2CPP_REGISTER_METHOD(0x014A9AB0, void, Update, (app::PreparationTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A9BA0, void, Prepare, ())
    IL2CPP_REGISTER_METHOD(0x014AA0F0, void, Finish, ())
    IL2CPP_REGISTER_METHOD(0x014AA480, void, SuspendGameplay, ())
    IL2CPP_REGISTER_METHOD(0x014AA5C0, void, ResumeGameplay, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PreparationTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014AA700, void, cctor, ())
} // namespace app::classes::Moon::HierarchyPerformanceTest::PreparationTask
