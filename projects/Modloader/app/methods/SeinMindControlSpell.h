#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinMindControlSpell.h>

namespace app::classes::SeinMindControlSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinMindControlSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008ACB40, void, OnSetReferenceToSein, (app::SeinMindControlSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008ACB70, void, OnDestroy, (app::SeinMindControlSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinMindControlSpell * this_ptr))
} // namespace app::classes::SeinMindControlSpell
