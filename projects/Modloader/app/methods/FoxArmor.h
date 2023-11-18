#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FoxArmor.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::FoxArmor {
    IL2CPP_REGISTER_METHOD(0x01281CC0, void, Start, (app::FoxArmor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01282170, void, Reset, (app::FoxArmor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01282710, void, BreakArmor, (app::FoxArmor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01282C70, app::IEnumerator*, HidePiecesTemp, (app::FoxArmor * this_ptr, float seconds))
    IL2CPP_REGISTER_METHOD(0x01282DD0, void, HidePieces, (app::FoxArmor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FoxArmor * this_ptr))
} // namespace app::classes::FoxArmor
