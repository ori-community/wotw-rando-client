#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SurfaceMaterialSoundPair.h>

namespace app::classes::SurfaceMaterialSoundPair {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SurfaceMaterialSoundPair* this_ptr)
}
