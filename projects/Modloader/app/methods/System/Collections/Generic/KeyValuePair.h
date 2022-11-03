#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::KeyValuePair {
    IL2CPP_REGISTER_METHOD(0x020226F0, app::String*, PairToString, (app::Object * key, app::Object* value))
}
