#pragma once
#include <Modloader/app/structs/BuilderItem__Array.h>
#include <Modloader/app/structs/BuilderItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuilderItem__Array {
        inline app::BuilderItem__Array__Class** type_info() {
            static app::BuilderItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BuilderItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BuilderItem__Array__Class* get_class() {
            return il2cpp::get_class<app::BuilderItem__Array__Class>(type_info(), "", "BuilderItem[]");
        }
        inline app::BuilderItem__Array* create() {
            return il2cpp::create_object<app::BuilderItem__Array>(get_class());
        }
    } // namespace BuilderItem__Array
} // namespace app::classes::types
