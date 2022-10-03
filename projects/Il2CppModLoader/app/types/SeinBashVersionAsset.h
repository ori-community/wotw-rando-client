#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinBashVersionAsset {
        namespace {
            app::SeinBashVersionAsset__Class* type_info_ref = nullptr;
        }
        app::SeinBashVersionAsset__Class** type_info = &type_info_ref;
        inline app::SeinBashVersionAsset__Class* get_class() {
            return il2cpp::get_class<app::SeinBashVersionAsset__Class>(type_info, "", "SeinBashVersionAsset");
        }
        inline app::SeinBashVersionAsset* create() {
            return il2cpp::create_object<app::SeinBashVersionAsset>(get_class());
        }
    } // namespace SeinBashVersionAsset
} // namespace app::classes::types
