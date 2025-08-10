#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/SimpleCameraSampler_c.h>

namespace app::classes::Moon::HierarchyPerformanceTest::SimpleCameraSampler___c {
    IL2CPP_REGISTER_METHOD(0x014AB850, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SimpleCameraSampler_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01349FE0, app::Rect, __ctor_b__2_0, app::SimpleCameraSampler_c* this_ptr, app::SceneMetaData* meta)
} // namespace app::classes::Moon::HierarchyPerformanceTest::SimpleCameraSampler___c
