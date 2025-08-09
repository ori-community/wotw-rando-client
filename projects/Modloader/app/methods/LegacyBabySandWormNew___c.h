#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/LegacyBabySandWormNew_c.h>

namespace app::classes::LegacyBabySandWormNew___c {
    IL2CPP_REGISTER_METHOD(0x015D7EF0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LegacyBabySandWormNew_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D8030, bool, _Awake_b__71_0, app::LegacyBabySandWormNew_c* this_ptr, app::Collider* col)
} // namespace app::classes::LegacyBabySandWormNew___c
