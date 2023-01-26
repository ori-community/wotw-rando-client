#pragma once
#include <Modloader/app/structs/EVoiceResult__Enum.h>
#include <Modloader/app/structs/EVoiceResult__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVoiceResult__Enum {
        inline app::EVoiceResult__Enum__Class** type_info() {
            static app::EVoiceResult__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EVoiceResult__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EVoiceResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVoiceResult__Enum__Class>(type_info(), "Steamworks", "EVoiceResult");
        }
        inline app::EVoiceResult__Enum* create() {
            return il2cpp::create_object<app::EVoiceResult__Enum>(get_class());
        }
    } // namespace EVoiceResult__Enum
} // namespace app::classes::types
