#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SeinTrapSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinTrapSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A9FCD0, void, OnSetReferenceToSein, (app::SeinTrapSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A9FD00, void, OnDestroy, (app::SeinTrapSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A9FD40, void, UpdateCharacterState, (app::SeinTrapSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AA00D0, void, DropTrap, (app::SeinTrapSpell * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04713420, SeinTrapSpell_DropTrap__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008ADAC0, void, ctor, (app::SeinTrapSpell * this_ptr))
} // namespace app::classes::SeinTrapSpell
