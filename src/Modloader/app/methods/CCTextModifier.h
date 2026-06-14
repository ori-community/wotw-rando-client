#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CCTextModifier.h>

namespace app::classes::CCTextModifier {
    IL2CPP_REGISTER_METHOD(0x03161E20, void, UpdateAllCCText, app::CCTextModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::CCTextModifier* this_ptr)
} // namespace app::classes::CCTextModifier
