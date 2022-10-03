#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreloadData {
        namespace {
            app::PreloadData__Class* type_info_ref = nullptr;
        }
        app::PreloadData__Class** type_info = &type_info_ref;
        inline app::PreloadData__Class* get_class() {
            return il2cpp::get_class<app::PreloadData__Class>(type_info, "UnityEngine", "PreloadData");
        }
        inline app::PreloadData* create() {
            return il2cpp::create_object<app::PreloadData>(get_class());
        }
    } // namespace PreloadData
} // namespace app::classes::types
