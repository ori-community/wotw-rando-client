#pragma once
#include <Modloader/app/structs/EControllerSource__Enum.h>
#include <Modloader/app/structs/EControllerSource__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EControllerSource__Enum {
        inline app::EControllerSource__Enum__Class** type_info() {
            static app::EControllerSource__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EControllerSource__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EControllerSource__Enum__Class* get_class() {
            return il2cpp::get_class<app::EControllerSource__Enum__Class>(type_info(), "Steamworks", "EControllerSource");
        }
        inline app::EControllerSource__Enum* create() {
            return il2cpp::create_object<app::EControllerSource__Enum>(get_class());
        }
    } // namespace EControllerSource__Enum
} // namespace app::classes::types
