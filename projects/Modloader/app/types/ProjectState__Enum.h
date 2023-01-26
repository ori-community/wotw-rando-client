#pragma once
#include <Modloader/app/structs/ProjectState__Enum.h>
#include <Modloader/app/structs/ProjectState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProjectState__Enum {
        inline app::ProjectState__Enum__Class** type_info() {
            static app::ProjectState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProjectState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProjectState__Enum__Class* get_class() {
            return il2cpp::get_class<app::ProjectState__Enum__Class>(type_info(), "", "ProjectState");
        }
        inline app::ProjectState__Enum* create() {
            return il2cpp::create_object<app::ProjectState__Enum>(get_class());
        }
    } // namespace ProjectState__Enum
} // namespace app::classes::types
