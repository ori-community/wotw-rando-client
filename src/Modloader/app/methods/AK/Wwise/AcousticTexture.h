#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AcousticTexture.h>
#include <Modloader/app/structs/WwiseObjectType__Enum.h>

namespace app::classes::AK::Wwise::AcousticTexture {
    IL2CPP_REGISTER_METHOD(0x00D51450, app::WwiseObjectType__Enum, get_WwiseObjectType, app::AcousticTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C1170, void, ctor, app::AcousticTexture* this_ptr)
} // namespace app::classes::AK::Wwise::AcousticTexture
