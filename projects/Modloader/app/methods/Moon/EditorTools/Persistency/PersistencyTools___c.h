#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PersistencyTools_c.h>

namespace app::classes::Moon::EditorTools::Persistency::PersistencyTools___c {
    IL2CPP_REGISTER_METHOD(0x01208290, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PersistencyTools_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor_b__4_0, app::PersistencyTools_c* this_ptr, app::GameObject* _p0_, app::GameObject* _p1_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor_b__4_1, app::PersistencyTools_c* this_ptr, app::GameObject* _p0_)
} // namespace app::classes::Moon::EditorTools::Persistency::PersistencyTools___c
