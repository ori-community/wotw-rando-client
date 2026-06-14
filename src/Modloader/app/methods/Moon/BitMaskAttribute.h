#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BitMaskAttribute.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Moon::BitMaskAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::BitMaskAttribute* this_ptr, app::Type* a_type)
}
