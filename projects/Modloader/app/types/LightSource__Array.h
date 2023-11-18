#pragma once
#include <Modloader/app/structs/LightSource__Array.h>
#include <Modloader/app/structs/LightSource__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightSource__Array {
        inline app::LightSource__Array__Class** type_info() {
            static app::LightSource__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightSource__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightSource__Array__Class* get_class() {
            return il2cpp::get_class<app::LightSource__Array__Class>(type_info(), "", "LightSource[]");
        }
        inline app::LightSource__Array* create() {
            return il2cpp::create_object<app::LightSource__Array>(get_class());
        }
    } // namespace LightSource__Array
} // namespace app::classes::types
