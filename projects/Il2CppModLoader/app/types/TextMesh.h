#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextMesh {
        namespace {
            app::TextMesh__Class* type_info_ref = nullptr;
        }
        app::TextMesh__Class** type_info = &type_info_ref;
        inline app::TextMesh__Class* get_class() {
            return il2cpp::get_class<app::TextMesh__Class>(type_info, "UnityEngine", "TextMesh");
        }
        inline app::TextMesh* create() {
            return il2cpp::create_object<app::TextMesh>(get_class());
        }
    } // namespace TextMesh
} // namespace app::classes::types
