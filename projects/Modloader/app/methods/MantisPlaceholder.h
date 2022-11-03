#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MantisPlaceholder {
    IL2CPP_REGISTER_METHOD(0x006253D0, app::GameObject*, get_Prefab, (app::MantisPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006253E0, void, ClearPrefabLinks, (app::MantisPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsUsingVariations, (app::MantisPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A09250, void, Spawn, (app::MantisPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A09360, void, ctor, (app::MantisPlaceholder * this_ptr))
} // namespace app::classes::MantisPlaceholder
