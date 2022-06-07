#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Microsoft::Applications::Events::BondHelper {
    IL2CPP_REGISTER_METHOD(0x002FA010, void, Serialize, (app::CsEvent * obj_to_serialize, app::MemoryStream * out_stream))
}
