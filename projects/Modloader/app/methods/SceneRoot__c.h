#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SceneRoot_c.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/SceneRoot.h>

namespace app::classes::SceneRoot___c {
    IL2CPP_REGISTER_METHOD(0x00BB8A60, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SceneRoot_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB8BA0, bool, _OnValidate_b__31_0, (app::SceneRoot_c * this_ptr, app::Component_1* a))
    IL2CPP_REGISTER_METHODINFO(0x04738EC8, SceneRoot_c__OnValidate_b__31_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BB8CC0, void, __unloadScene_b__60_0, (app::SceneRoot_c * this_ptr, bool success))
    IL2CPP_REGISTER_METHODINFO(0x0471FE50, SceneRoot_c___unloadScene_b__60_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BB8D50, void, _UnloadSceneCoroutine_b__61_0, (app::SceneRoot_c * this_ptr, bool success))
    IL2CPP_REGISTER_METHODINFO(0x04799720, SceneRoot_c__UnloadSceneCoroutine_b__61_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor_b__108_0, (app::SceneRoot_c * this_ptr, app::SceneRoot* _p0_))
    IL2CPP_REGISTER_METHODINFO(0x04788820, SceneRoot_c___cctor_b__108_0__MethodInfo)
} // namespace app::classes::SceneRoot___c
