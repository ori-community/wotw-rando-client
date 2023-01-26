#pragma once
#include <Modloader/app/structs/EnvironmentType__Enum.h>
#include <Modloader/app/structs/EnvironmentType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnvironmentType__Enum {
        inline app::EnvironmentType__Enum__Class** type_info() {
            static app::EnvironmentType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnvironmentType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnvironmentType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentType__Enum__Class>(type_info(), "", "EnvironmentType");
        }
        inline app::EnvironmentType__Enum* create() {
            return il2cpp::create_object<app::EnvironmentType__Enum>(get_class());
        }
    } // namespace EnvironmentType__Enum
} // namespace app::classes::types
