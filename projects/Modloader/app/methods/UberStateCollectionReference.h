#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberStateCollection.h>
#include <Modloader/app/structs/UberStateCollectionReference.h>

namespace app::classes::UberStateCollectionReference {
    IL2CPP_REGISTER_METHOD(0x03149500, app::UberStateCollection*, get_Collection, ())
    IL2CPP_REGISTER_METHOD(0x03149580, void, Awake, (app::UberStateCollectionReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03149580, void, Initialize, (app::UberStateCollectionReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberStateCollectionReference * this_ptr))
} // namespace app::classes::UberStateCollectionReference
