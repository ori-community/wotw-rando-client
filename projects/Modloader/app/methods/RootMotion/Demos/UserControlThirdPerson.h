#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserControlThirdPerson.h>

namespace app::classes::RootMotion::Demos::UserControlThirdPerson {
    IL2CPP_REGISTER_METHOD(0x0204ABD0, void, Start, app::UserControlThirdPerson* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0204AC90, void, Update, app::UserControlThirdPerson* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0204B380, void, ctor, app::UserControlThirdPerson* this_ptr)
} // namespace app::classes::RootMotion::Demos::UserControlThirdPerson
