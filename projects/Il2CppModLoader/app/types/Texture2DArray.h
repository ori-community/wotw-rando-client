#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Texture2DArray {
        namespace {
            app::Texture2DArray__Class* type_info_ref = nullptr;
        }
        app::Texture2DArray__Class** type_info = &type_info_ref;
        inline app::Texture2DArray__Class* get_class() {
            return il2cpp::get_class<app::Texture2DArray__Class>(type_info, "UnityEngine", "Texture2DArray");
        }
        inline app::Texture2DArray* create() {
            return il2cpp::create_object<app::Texture2DArray>(get_class());
        }
    } // namespace Texture2DArray
} // namespace app::classes::types
