#pragma once
#include <Modloader/app/structs/LightCanvas__Array.h>
#include <Modloader/app/structs/LightCanvas__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCanvas__Array {
        inline app::LightCanvas__Array__Class** type_info() {
            static app::LightCanvas__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightCanvas__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightCanvas__Array__Class* get_class() {
            return il2cpp::get_class<app::LightCanvas__Array__Class>(type_info(), "", "LightCanvas[]");
        }
        inline app::LightCanvas__Array* create() {
            return il2cpp::create_object<app::LightCanvas__Array>(get_class());
        }
    } // namespace LightCanvas__Array
} // namespace app::classes::types
