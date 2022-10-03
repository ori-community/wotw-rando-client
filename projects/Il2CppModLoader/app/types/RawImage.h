#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RawImage {
        namespace {
            app::RawImage__Class* type_info_ref = nullptr;
        }
        app::RawImage__Class** type_info = &type_info_ref;
        inline app::RawImage__Class* get_class() {
            return il2cpp::get_class<app::RawImage__Class>(type_info, "UnityEngine.UI", "RawImage");
        }
        inline app::RawImage* create() {
            return il2cpp::create_object<app::RawImage>(get_class());
        }
    } // namespace RawImage
} // namespace app::classes::types
