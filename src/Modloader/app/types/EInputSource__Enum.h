#pragma once
#include <Modloader/app/structs/EInputSource__Enum.h>
#include <Modloader/app/structs/EInputSource__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EInputSource__Enum {
        inline app::EInputSource__Enum__Class** type_info() {
            static app::EInputSource__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EInputSource__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EInputSource__Enum__Class* get_class() {
            return il2cpp::get_class<app::EInputSource__Enum__Class>(type_info(), "Steamworks", "EInputSource");
        }
        inline app::EInputSource__Enum* create() {
            return il2cpp::create_object<app::EInputSource__Enum>(get_class());
        }
    } // namespace EInputSource__Enum
} // namespace app::classes::types
