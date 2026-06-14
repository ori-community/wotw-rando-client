#pragma once
#include <Modloader/app/structs/EUniverse__Enum.h>
#include <Modloader/app/structs/EUniverse__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EUniverse__Enum {
        inline app::EUniverse__Enum__Class** type_info() {
            static app::EUniverse__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EUniverse__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EUniverse__Enum__Class* get_class() {
            return il2cpp::get_class<app::EUniverse__Enum__Class>(type_info(), "Steamworks", "EUniverse");
        }
        inline app::EUniverse__Enum* create() {
            return il2cpp::create_object<app::EUniverse__Enum>(get_class());
        }
    } // namespace EUniverse__Enum
} // namespace app::classes::types
