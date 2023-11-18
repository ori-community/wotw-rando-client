#pragma once
#include <Modloader/app/structs/ChannelSwapper_Channel__Enum.h>
#include <Modloader/app/structs/ChannelSwapper_Channel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChannelSwapper_Channel__Enum {
        inline app::ChannelSwapper_Channel__Enum__Class** type_info() {
            static app::ChannelSwapper_Channel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChannelSwapper_Channel__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChannelSwapper_Channel__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ChannelSwapper_Channel__Enum__Class>(type_info(), "Colorful", "ChannelSwapper", "Channel");
        }
        inline app::ChannelSwapper_Channel__Enum* create() {
            return il2cpp::create_object<app::ChannelSwapper_Channel__Enum>(get_class());
        }
    } // namespace ChannelSwapper_Channel__Enum
} // namespace app::classes::types
