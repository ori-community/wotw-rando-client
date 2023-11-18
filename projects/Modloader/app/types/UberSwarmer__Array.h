#pragma once
#include <Modloader/app/structs/UberSwarmer__Array.h>
#include <Modloader/app/structs/UberSwarmer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberSwarmer__Array {
        inline app::UberSwarmer__Array__Class** type_info() {
            static app::UberSwarmer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberSwarmer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberSwarmer__Array__Class* get_class() {
            return il2cpp::get_class<app::UberSwarmer__Array__Class>(type_info(), "", "UberSwarmer[]");
        }
        inline app::UberSwarmer__Array* create() {
            return il2cpp::create_object<app::UberSwarmer__Array>(get_class());
        }
    } // namespace UberSwarmer__Array
} // namespace app::classes::types
