#pragma once
#include <Modloader/app/structs/AreaMapScrollLimit__Array.h>
#include <Modloader/app/structs/AreaMapScrollLimit__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AreaMapScrollLimit__Array {
        inline app::AreaMapScrollLimit__Array__Class** type_info() {
            static app::AreaMapScrollLimit__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AreaMapScrollLimit__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AreaMapScrollLimit__Array__Class* get_class() {
            return il2cpp::get_class<app::AreaMapScrollLimit__Array__Class>(type_info(), "", "AreaMapScrollLimit[]");
        }
        inline app::AreaMapScrollLimit__Array* create() {
            return il2cpp::create_object<app::AreaMapScrollLimit__Array>(get_class());
        }
    } // namespace AreaMapScrollLimit__Array
} // namespace app::classes::types
