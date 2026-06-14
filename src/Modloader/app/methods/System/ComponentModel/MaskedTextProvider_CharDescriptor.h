#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MaskedTextProvider_CharDescriptor.h>
#include <Modloader/app/structs/MaskedTextProvider_CharType__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ComponentModel::MaskedTextProvider_CharDescriptor {
    IL2CPP_REGISTER_METHOD(
        0x0298D290,
        void,
        ctor,
        app::MaskedTextProvider_CharDescriptor* this_ptr,
        int32_t mask_pos,
        app::MaskedTextProvider_CharType__Enum char_type
    )
    IL2CPP_REGISTER_METHOD(0x0298D2A0, app::String*, ToString, app::MaskedTextProvider_CharDescriptor* this_ptr)
} // namespace app::classes::System::ComponentModel::MaskedTextProvider_CharDescriptor
