#pragma once
#include <Modloader/app/structs/StrippableBuildContex_Platform__Enum.h>
#include <Modloader/app/structs/StrippableBuildContex_Platform__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StrippableBuildContex_Platform__Enum {
        inline app::StrippableBuildContex_Platform__Enum__Class** type_info() {
            static app::StrippableBuildContex_Platform__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StrippableBuildContex_Platform__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StrippableBuildContex_Platform__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StrippableBuildContex_Platform__Enum__Class>(type_info(), "", "StrippableBuildContex", "Platform");
        }
        inline app::StrippableBuildContex_Platform__Enum* create() {
            return il2cpp::create_object<app::StrippableBuildContex_Platform__Enum>(get_class());
        }
    } // namespace StrippableBuildContex_Platform__Enum
} // namespace app::classes::types
