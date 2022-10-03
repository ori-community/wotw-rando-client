#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssetBundle {
        namespace {
            app::AssetBundle__Class* type_info_ref = nullptr;
        }
        app::AssetBundle__Class** type_info = &type_info_ref;
        inline app::AssetBundle__Class* get_class() {
            return il2cpp::get_class<app::AssetBundle__Class>(type_info, "UnityEngine", "AssetBundle");
        }
        inline app::AssetBundle* create() {
            return il2cpp::create_object<app::AssetBundle>(get_class());
        }
    } // namespace AssetBundle
} // namespace app::classes::types
