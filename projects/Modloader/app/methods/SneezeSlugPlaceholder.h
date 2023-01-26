#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SneezeSlugPlaceholder.h>

namespace app::classes::SneezeSlugPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00EDFD40, void, ctor, (app::SneezeSlugPlaceholder * this_ptr))
}
