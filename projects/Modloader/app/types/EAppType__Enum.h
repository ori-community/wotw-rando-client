#pragma once
#include <Modloader/app/structs/EAppType__Enum.h>
#include <Modloader/app/structs/EAppType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EAppType__Enum {
        inline app::EAppType__Enum__Class** type_info() {
            static app::EAppType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EAppType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EAppType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EAppType__Enum__Class>(type_info(), "Steamworks", "EAppType");
        }
        inline app::EAppType__Enum* create() {
            return il2cpp::create_object<app::EAppType__Enum>(get_class());
        }
    } // namespace EAppType__Enum
} // namespace app::classes::types
