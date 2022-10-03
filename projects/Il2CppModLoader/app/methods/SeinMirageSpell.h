#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SeinMirageSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinMirageSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008ADAE0, void, OnSetReferenceToSein, (app::SeinMirageSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008ADB10, void, OnDestroy, (app::SeinMirageSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinMirageSpell * this_ptr))
} // namespace app::classes::SeinMirageSpell
