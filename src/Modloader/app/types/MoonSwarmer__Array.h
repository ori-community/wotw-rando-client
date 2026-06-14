#pragma once
#include <Modloader/app/structs/MoonSwarmer__Array.h>
#include <Modloader/app/structs/MoonSwarmer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonSwarmer__Array {
        inline app::MoonSwarmer__Array__Class** type_info() {
            static app::MoonSwarmer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonSwarmer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonSwarmer__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonSwarmer__Array__Class>(type_info(), "", "MoonSwarmer[]");
        }
        inline app::MoonSwarmer__Array* create() {
            return il2cpp::create_object<app::MoonSwarmer__Array>(get_class());
        }
    } // namespace MoonSwarmer__Array
} // namespace app::classes::types
