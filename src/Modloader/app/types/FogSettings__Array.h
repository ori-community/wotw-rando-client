#pragma once
#include <Modloader/app/structs/FogSettings__Array.h>
#include <Modloader/app/structs/FogSettings__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FogSettings__Array {
        inline app::FogSettings__Array__Class** type_info() {
            static app::FogSettings__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FogSettings__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FogSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::FogSettings__Array__Class>(type_info(), "", "FogSettings[]");
        }
        inline app::FogSettings__Array* create() {
            return il2cpp::create_object<app::FogSettings__Array>(get_class());
        }
    } // namespace FogSettings__Array
} // namespace app::classes::types
