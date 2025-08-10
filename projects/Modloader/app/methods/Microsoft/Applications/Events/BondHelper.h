#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CsEvent.h>
#include <Modloader/app/structs/MemoryStream.h>

namespace app::classes::Microsoft::Applications::Events::BondHelper {
    IL2CPP_REGISTER_METHOD(0x002FA010, void, Serialize, app::CsEvent* obj_to_serialize, app::MemoryStream* out_stream)
}
