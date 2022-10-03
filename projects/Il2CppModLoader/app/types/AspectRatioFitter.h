#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AspectRatioFitter {
        namespace {
            app::AspectRatioFitter__Class* type_info_ref = nullptr;
        }
        app::AspectRatioFitter__Class** type_info = &type_info_ref;
        inline app::AspectRatioFitter__Class* get_class() {
            return il2cpp::get_class<app::AspectRatioFitter__Class>(type_info, "UnityEngine.UI", "AspectRatioFitter");
        }
        inline app::AspectRatioFitter* create() {
            return il2cpp::create_object<app::AspectRatioFitter>(get_class());
        }
    } // namespace AspectRatioFitter
} // namespace app::classes::types
