#pragma once
#include <Modloader/app/structs/AlphaMaskChannelConfig__Enum.h>
#include <Modloader/app/structs/AlphaMaskChannelConfig__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AlphaMaskChannelConfig__Enum {
        inline app::AlphaMaskChannelConfig__Enum__Class** type_info() {
            static app::AlphaMaskChannelConfig__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AlphaMaskChannelConfig__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AlphaMaskChannelConfig__Enum__Class* get_class() {
            return il2cpp::get_class<app::AlphaMaskChannelConfig__Enum__Class>(type_info(), "", "AlphaMaskChannelConfig");
        }
        inline app::AlphaMaskChannelConfig__Enum* create() {
            return il2cpp::create_object<app::AlphaMaskChannelConfig__Enum>(get_class());
        }
    } // namespace AlphaMaskChannelConfig__Enum
} // namespace app::classes::types
