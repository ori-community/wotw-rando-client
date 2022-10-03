#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FBBIKSettings {
        namespace {
            app::FBBIKSettings__Class* type_info_ref = nullptr;
        }
        app::FBBIKSettings__Class** type_info = &type_info_ref;
        inline app::FBBIKSettings__Class* get_class() {
            return il2cpp::get_class<app::FBBIKSettings__Class>(type_info, "RootMotion.Demos", "FBBIKSettings");
        }
        inline app::FBBIKSettings* create() {
            return il2cpp::create_object<app::FBBIKSettings>(get_class());
        }
    } // namespace FBBIKSettings
} // namespace app::classes::types
