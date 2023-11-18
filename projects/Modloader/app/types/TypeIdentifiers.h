#pragma once
#include <Modloader/app/structs/TypeIdentifiers.h>
#include <Modloader/app/structs/TypeIdentifiers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeIdentifiers {
        inline app::TypeIdentifiers__Class** type_info() {
            static app::TypeIdentifiers__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeIdentifiers__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeIdentifiers__Class* get_class() {
            return il2cpp::get_class<app::TypeIdentifiers__Class>(type_info(), "System", "TypeIdentifiers");
        }
        inline app::TypeIdentifiers* create() {
            return il2cpp::create_object<app::TypeIdentifiers>(get_class());
        }
    } // namespace TypeIdentifiers
} // namespace app::classes::types
