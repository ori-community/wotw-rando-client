#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TalkVariant.h>

namespace app::classes::TalkVariant {
    IL2CPP_REGISTER_METHOD(0x00CE0920, void, Finalize, app::TalkVariant* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TalkVariant* this_ptr)
} // namespace app::classes::TalkVariant
