#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CageTextureUtility {
        namespace {
            app::CageTextureUtility__Class* type_info_ref = nullptr;
        }
        app::CageTextureUtility__Class** type_info = &type_info_ref;
        inline app::CageTextureUtility__Class* get_class() {
            return il2cpp::get_class<app::CageTextureUtility__Class>(type_info, "", "CageTextureUtility");
        }
        inline app::CageTextureUtility* create() {
            return il2cpp::create_object<app::CageTextureUtility>(get_class());
        }
    } // namespace CageTextureUtility
} // namespace app::classes::types
