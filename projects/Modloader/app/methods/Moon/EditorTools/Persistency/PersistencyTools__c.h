#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PersistencyTools_c.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::Moon::EditorTools::Persistency::PersistencyTools___c {
    IL2CPP_REGISTER_METHOD(0x01208290, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PersistencyTools_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor_b__4_0, (app::PersistencyTools_c * this_ptr, app::GameObject* _p0_, app::GameObject* _p1_))
    IL2CPP_REGISTER_METHODINFO(0x047509A8, PersistencyTools_c___cctor_b__4_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor_b__4_1, (app::PersistencyTools_c * this_ptr, app::GameObject* _p0_))
    IL2CPP_REGISTER_METHODINFO(0x04725FC0, PersistencyTools_c___cctor_b__4_1__MethodInfo)
} // namespace app::classes::Moon::EditorTools::Persistency::PersistencyTools___c
