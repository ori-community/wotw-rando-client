#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/VerletStructure.h>
#include <Modloader/app/structs/VerletStructure_SystemWithMonoBehaviour_c.h>

namespace app::classes::VerletStructure_SystemWithMonoBehaviour___c {
    IL2CPP_REGISTER_METHOD(0x013CFE90, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::VerletStructure_SystemWithMonoBehaviour_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013CFFD0, app::Transform*, __ctor_b__4_0, app::VerletStructure_SystemWithMonoBehaviour_c* this_ptr, app::VerletStructure* i)
} // namespace app::classes::VerletStructure_SystemWithMonoBehaviour___c
