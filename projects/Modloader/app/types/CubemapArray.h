#pragma once
#include <Modloader/app/structs/CubemapArray.h>
#include <Modloader/app/structs/CubemapArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CubemapArray {
        inline app::CubemapArray__Class** type_info() {
            static app::CubemapArray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CubemapArray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CubemapArray__Class* get_class() {
            return il2cpp::get_class<app::CubemapArray__Class>(type_info(), "UnityEngine", "CubemapArray");
        }
        inline app::CubemapArray* create() {
            return il2cpp::create_object<app::CubemapArray>(get_class());
        }
    } // namespace CubemapArray
} // namespace app::classes::types
