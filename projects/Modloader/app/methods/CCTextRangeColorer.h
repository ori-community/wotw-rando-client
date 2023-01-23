#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CCTextRangeColorer.h>
#include <Modloader/app/structs/CCText.h>

namespace app::classes::CCTextRangeColorer {
    IL2CPP_REGISTER_METHOD(0x03162000, void, Modify, (app::CCTextRangeColorer * this_ptr, app::CCText* text))
    IL2CPP_REGISTER_METHOD(0x031622B0, void, ctor, (app::CCTextRangeColorer * this_ptr))
} // namespace app::classes::CCTextRangeColorer
