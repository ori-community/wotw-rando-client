#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CCText.h>
#include <Modloader/app/structs/CCTextMarkedColorer.h>

namespace app::classes::CCTextMarkedColorer {
    IL2CPP_REGISTER_METHOD(0x03161A10, void, Modify, app::CCTextMarkedColorer* this_ptr, app::CCText* text)
    IL2CPP_REGISTER_METHOD(0x03161D90, void, ctor, app::CCTextMarkedColorer* this_ptr)
} // namespace app::classes::CCTextMarkedColorer
