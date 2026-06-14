#pragma once
#include <Modloader/app/structs/AreaMapCanvas__Array.h>
#include <Modloader/app/structs/AreaMapCanvas__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AreaMapCanvas__Array {
        inline app::AreaMapCanvas__Array__Class** type_info() {
            static app::AreaMapCanvas__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AreaMapCanvas__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AreaMapCanvas__Array__Class* get_class() {
            return il2cpp::get_class<app::AreaMapCanvas__Array__Class>(type_info(), "", "AreaMapCanvas[]");
        }
        inline app::AreaMapCanvas__Array* create() {
            return il2cpp::create_object<app::AreaMapCanvas__Array>(get_class());
        }
    } // namespace AreaMapCanvas__Array
} // namespace app::classes::types
