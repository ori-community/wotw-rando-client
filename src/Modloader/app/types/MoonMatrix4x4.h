#pragma once
#include <Modloader/app/structs/MoonMatrix4x4.h>
#include <Modloader/app/structs/MoonMatrix4x4__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonMatrix4x4 {
        inline app::MoonMatrix4x4__Class** type_info() {
            static app::MoonMatrix4x4__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonMatrix4x4__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonMatrix4x4__Class* get_class() {
            return il2cpp::get_class<app::MoonMatrix4x4__Class>(type_info(), "Moon", "MoonMatrix4x4");
        }
        inline app::MoonMatrix4x4* create() {
            return il2cpp::create_object<app::MoonMatrix4x4>(get_class());
        }
    } // namespace MoonMatrix4x4
} // namespace app::classes::types
