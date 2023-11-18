#pragma once
#include <Modloader/app/structs/ProjectionAxis__Enum.h>
#include <Modloader/app/structs/ProjectionAxis__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProjectionAxis__Enum {
        inline app::ProjectionAxis__Enum__Class** type_info() {
            static app::ProjectionAxis__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProjectionAxis__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProjectionAxis__Enum__Class* get_class() {
            return il2cpp::get_class<app::ProjectionAxis__Enum__Class>(type_info(), "", "ProjectionAxis");
        }
        inline app::ProjectionAxis__Enum* create() {
            return il2cpp::create_object<app::ProjectionAxis__Enum>(get_class());
        }
    } // namespace ProjectionAxis__Enum
} // namespace app::classes::types
