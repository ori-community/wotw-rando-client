#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::EventSystems::AbstractEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AbstractEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00531660, void, Reset, (app::AbstractEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B80D80, void, Use, (app::AbstractEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F19AD0, bool, get_used, (app::AbstractEventData * this_ptr))
}
