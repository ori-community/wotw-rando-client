#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FinishTask.h>

namespace app::classes::Moon::HierarchyPerformanceTest::FinishTask {
    IL2CPP_REGISTER_METHOD(0x0149BB50, void, Update, (app::FinishTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FinishTask * this_ptr))
} // namespace app::classes::Moon::HierarchyPerformanceTest::FinishTask
