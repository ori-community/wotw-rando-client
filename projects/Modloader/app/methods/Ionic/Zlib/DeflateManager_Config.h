#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CompressionLevel__Enum.h>
#include <Modloader/app/structs/DeflateFlavor__Enum.h>
#include <Modloader/app/structs/DeflateManager_Config.h>

namespace app::classes::Ionic::Zlib::DeflateManager_Config {
    IL2CPP_REGISTER_METHOD(
        0x0306C120,
        void,
        ctor,
        app::DeflateManager_Config* this_ptr,
        int32_t good_length,
        int32_t max_lazy,
        int32_t nice_length,
        int32_t max_chain_length,
        app::DeflateFlavor__Enum flavor
    )
    IL2CPP_REGISTER_METHOD(0x0306C140, app::DeflateManager_Config*, Lookup, app::CompressionLevel__Enum level)
    IL2CPP_REGISTER_METHOD(0x0306C210, void, cctor, )
} // namespace app::classes::Ionic::Zlib::DeflateManager_Config
