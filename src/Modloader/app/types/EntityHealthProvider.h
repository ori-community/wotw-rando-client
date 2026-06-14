#pragma once
#include <Modloader/app/structs/EntityHealthProvider.h>
#include <Modloader/app/structs/EntityHealthProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityHealthProvider {
        inline app::EntityHealthProvider__Class** type_info() {
            static app::EntityHealthProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityHealthProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityHealthProvider__Class* get_class() {
            return il2cpp::get_class<app::EntityHealthProvider__Class>(type_info(), "", "EntityHealthProvider");
        }
        inline app::EntityHealthProvider* create() {
            return il2cpp::create_object<app::EntityHealthProvider>(get_class());
        }
    } // namespace EntityHealthProvider
} // namespace app::classes::types
