#pragma once
#include <Modloader/app/structs/Texture2DArray.h>
#include <Modloader/app/structs/Texture2DArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Texture2DArray {
        inline app::Texture2DArray__Class** type_info() {
            static app::Texture2DArray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Texture2DArray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Texture2DArray__Class* get_class() {
            return il2cpp::get_class<app::Texture2DArray__Class>(type_info(), "UnityEngine", "Texture2DArray");
        }
        inline app::Texture2DArray* create() {
            return il2cpp::create_object<app::Texture2DArray>(get_class());
        }
    } // namespace Texture2DArray
} // namespace app::classes::types
