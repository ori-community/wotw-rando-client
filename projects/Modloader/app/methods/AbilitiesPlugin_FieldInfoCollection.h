#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilitiesPlugin_FieldInfoCollection.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::AbilitiesPlugin_FieldInfoCollection {
    IL2CPP_REGISTER_METHOD(0x004AD0C0, void, ctor, app::AbilitiesPlugin_FieldInfoCollection* this_ptr, app::Object* obj)
}
