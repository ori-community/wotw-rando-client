#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CCTextVerticalColorer.h>
#include <Modloader/app/structs/CCText.h>

namespace app::classes::CCTextVerticalColorer {
    IL2CPP_REGISTER_METHOD(0x03162D70, void, Modify, (app::CCTextVerticalColorer * this_ptr, app::CCText* text))
    IL2CPP_REGISTER_METHOD(0x03163070, void, ctor, (app::CCTextVerticalColorer * this_ptr))
} // namespace app::classes::CCTextVerticalColorer
