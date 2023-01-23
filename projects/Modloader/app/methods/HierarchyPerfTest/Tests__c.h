#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Tests_c.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HierarchyPerfTestsSceneRoot.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::HierarchyPerfTest::Tests___c {
    IL2CPP_REGISTER_METHOD(0x01978DA0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Tests_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01978EE0, app::GameObject*, _RunTests_b__5_0, (app::Tests_c * this_ptr, app::HierarchyPerfTestsSceneRoot* x))
    IL2CPP_REGISTER_METHODINFO(0x0473EF78, Tests_c__RunTests_b__5_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01978F50, app::Transform*, _RunTests_b__5_1, (app::Tests_c * this_ptr, app::GameObject* x))
    IL2CPP_REGISTER_METHODINFO(0x0476E1A8, Tests_c__RunTests_b__5_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01978F50, app::Transform*, _RunTests_b__5_2, (app::Tests_c * this_ptr, app::GameObject* x))
    IL2CPP_REGISTER_METHODINFO(0x04787378, Tests_c__RunTests_b__5_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01978F50, app::Transform*, _RunTests_b__5_3, (app::Tests_c * this_ptr, app::GameObject* x))
    IL2CPP_REGISTER_METHODINFO(0x04706AD0, Tests_c__RunTests_b__5_3__MethodInfo)
} // namespace app::classes::HierarchyPerfTest::Tests___c
