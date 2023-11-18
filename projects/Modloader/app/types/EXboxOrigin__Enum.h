#pragma once
#include <Modloader/app/structs/EXboxOrigin__Enum.h>
#include <Modloader/app/structs/EXboxOrigin__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EXboxOrigin__Enum {
        inline app::EXboxOrigin__Enum__Class** type_info() {
            static app::EXboxOrigin__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EXboxOrigin__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EXboxOrigin__Enum__Class* get_class() {
            return il2cpp::get_class<app::EXboxOrigin__Enum__Class>(type_info(), "Steamworks", "EXboxOrigin");
        }
        inline app::EXboxOrigin__Enum* create() {
            return il2cpp::create_object<app::EXboxOrigin__Enum>(get_class());
        }
    } // namespace EXboxOrigin__Enum
} // namespace app::classes::types
