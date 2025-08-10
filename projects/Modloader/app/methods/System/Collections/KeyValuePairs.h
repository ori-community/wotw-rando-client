#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePairs.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::KeyValuePairs {
    IL2CPP_REGISTER_METHOD(0x02028E40, void, ctor, app::KeyValuePairs* this_ptr, app::Object* key, app::Object* value)
}
