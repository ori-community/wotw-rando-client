#pragma once
#include <Modloader/app/structs/MoonFloat__Array.h>
#include <Modloader/app/structs/MoonFloat__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonFloat__Array {
        inline app::MoonFloat__Array__Class** type_info() {
            static app::MoonFloat__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonFloat__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonFloat__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonFloat__Array__Class>(type_info(), "Moon", "MoonFloat[]");
        }
        inline app::MoonFloat__Array* create() {
            return il2cpp::create_object<app::MoonFloat__Array>(get_class());
        }
    } // namespace MoonFloat__Array
} // namespace app::classes::types
