#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterController3rdPerson.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::Demos::CharacterController3rdPerson {
    IL2CPP_REGISTER_METHOD(0x02211BC0, void, Start, (app::CharacterController3rdPerson * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02211CA0, void, LateUpdate, (app::CharacterController3rdPerson * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022122C0, app::Vector3, get_inputVector, ())
    IL2CPP_REGISTER_METHOD(0x022123F0, app::Vector3, get_inputVectorRaw, ())
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CharacterController3rdPerson * this_ptr))
} // namespace app::classes::RootMotion::Demos::CharacterController3rdPerson
