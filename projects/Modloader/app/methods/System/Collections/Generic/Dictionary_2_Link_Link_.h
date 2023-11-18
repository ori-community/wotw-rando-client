#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Link_Link_.h>
#include <Modloader/app/structs/Link.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Link_Link_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_Link_Link_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::Link*, get_Item, (app::Dictionary_2_Link_Link_ * this_ptr, app::Link* key))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_Link_Link_ * this_ptr, app::Link* key, app::Link* value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_Link_Link_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Link_Link_
