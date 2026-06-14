#pragma once
#include <Modloader/app/structs/ChannelInfo.h>
#include <Modloader/app/structs/ChannelInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChannelInfo {
        inline app::ChannelInfo__Class** type_info() {
            static app::ChannelInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ChannelInfo__Class**)(modloader::win::memory::resolve_rva(0x04764090));
            }
            return cache;
        }
        inline app::ChannelInfo__Class* get_class() {
            return il2cpp::get_class<app::ChannelInfo__Class>(type_info(), "System.Runtime.Remoting", "ChannelInfo");
        }
        inline app::ChannelInfo* create() {
            return il2cpp::create_object<app::ChannelInfo>(get_class());
        }
    } // namespace ChannelInfo
} // namespace app::classes::types
