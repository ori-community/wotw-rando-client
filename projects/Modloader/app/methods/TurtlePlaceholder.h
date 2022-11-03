#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TurtlePlaceholder {
    IL2CPP_REGISTER_METHOD(0x006253D0, app::GameObject*, get_Prefab, (app::TurtlePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D83A0, app::LizardEntity*, get_CurrentEntity, (app::TurtlePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006253E0, void, ClearPrefabLinks, (app::TurtlePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D8460, void, Spawn, (app::TurtlePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsUsingVariations, (app::TurtlePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D8540, void, ctor, (app::TurtlePlaceholder * this_ptr))
} // namespace app::classes::TurtlePlaceholder
