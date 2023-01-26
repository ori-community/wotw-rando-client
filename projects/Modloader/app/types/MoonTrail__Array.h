#pragma once
#include <Modloader/app/structs/MoonTrail__Array.h>
#include <Modloader/app/structs/MoonTrail__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTrail__Array {
        inline app::MoonTrail__Array__Class** type_info() {
            static app::MoonTrail__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTrail__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTrail__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTrail__Array__Class>(type_info(), "Moon", "MoonTrail[]");
        }
        inline app::MoonTrail__Array* create() {
            return il2cpp::create_object<app::MoonTrail__Array>(get_class());
        }
    } // namespace MoonTrail__Array
} // namespace app::classes::types
