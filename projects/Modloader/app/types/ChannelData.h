#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChannelData__Class.h>
#include <Modloader/app/structs/ChannelData.h>

namespace app::classes::types {
    namespace ChannelData {
        inline app::ChannelData__Class** type_info = (app::ChannelData__Class**)(modloader::win::memory::resolve_rva(0x0476DD90));
        inline app::ChannelData__Class* get_class() {
            return il2cpp::get_class<app::ChannelData__Class>(type_info, "System.Runtime.Remoting", "ChannelData");
        }
        inline app::ChannelData* create() {
            return il2cpp::create_object<app::ChannelData>(get_class());
        }
    } // namespace ChannelData
} // namespace app::classes::types
