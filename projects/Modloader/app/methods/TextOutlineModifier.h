#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TextOutlineModifier.h>

namespace app::classes::TextOutlineModifier {
    IL2CPP_REGISTER_METHOD(0x010E84E0, void, SetProperties, app::TextOutlineModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010E85D0, void, ctor, app::TextOutlineModifier* this_ptr)
} // namespace app::classes::TextOutlineModifier
