#pragma once
#include <Modloader/app/structs/TypeNames.h>
#include <Modloader/app/structs/TypeNames__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeNames {
        inline app::TypeNames__Class** type_info() {
            static app::TypeNames__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeNames__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeNames__Class* get_class() {
            return il2cpp::get_class<app::TypeNames__Class>(type_info(), "System", "TypeNames");
        }
        inline app::TypeNames* create() {
            return il2cpp::create_object<app::TypeNames>(get_class());
        }
    } // namespace TypeNames
} // namespace app::classes::types
