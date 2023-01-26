#pragma once
#include <Modloader/app/structs/AkChannelConfigType__Enum.h>
#include <Modloader/app/structs/AkChannelConfigType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkChannelConfigType__Enum {
        inline app::AkChannelConfigType__Enum__Class** type_info() {
            static app::AkChannelConfigType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkChannelConfigType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkChannelConfigType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkChannelConfigType__Enum__Class>(type_info(), "", "AkChannelConfigType");
        }
        inline app::AkChannelConfigType__Enum* create() {
            return il2cpp::create_object<app::AkChannelConfigType__Enum>(get_class());
        }
    } // namespace AkChannelConfigType__Enum
} // namespace app::classes::types
