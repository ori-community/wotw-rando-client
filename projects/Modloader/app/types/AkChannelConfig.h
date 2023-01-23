#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkChannelConfig__Class.h>
#include <Modloader/app/structs/AkChannelConfig.h>

namespace app::classes::types {
    namespace AkChannelConfig {
        inline app::AkChannelConfig__Class** type_info = (app::AkChannelConfig__Class**)(modloader::win::memory::resolve_rva(0x04756568));
        inline app::AkChannelConfig__Class* get_class() {
            return il2cpp::get_class<app::AkChannelConfig__Class>(type_info, "", "AkChannelConfig");
        }
        inline app::AkChannelConfig* create() {
            return il2cpp::create_object<app::AkChannelConfig>(get_class());
        }
    } // namespace AkChannelConfig
} // namespace app::classes::types
