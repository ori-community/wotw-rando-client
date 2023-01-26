#pragma once
#include <Modloader/app/structs/MoonVector4.h>
#include <Modloader/app/structs/MoonVector4__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonVector4 {
        inline app::MoonVector4__Class** type_info() {
            static app::MoonVector4__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonVector4__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonVector4__Class* get_class() {
            return il2cpp::get_class<app::MoonVector4__Class>(type_info(), "Moon", "MoonVector4");
        }
        inline app::MoonVector4* create() {
            return il2cpp::create_object<app::MoonVector4>(get_class());
        }
    } // namespace MoonVector4
} // namespace app::classes::types
