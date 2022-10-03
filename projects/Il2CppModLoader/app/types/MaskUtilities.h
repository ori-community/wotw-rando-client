#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaskUtilities {
        namespace {
            app::MaskUtilities__Class* type_info_ref = nullptr;
        }
        app::MaskUtilities__Class** type_info = &type_info_ref;
        inline app::MaskUtilities__Class* get_class() {
            return il2cpp::get_class<app::MaskUtilities__Class>(type_info, "UnityEngine.UI", "MaskUtilities");
        }
        inline app::MaskUtilities* create() {
            return il2cpp::create_object<app::MaskUtilities>(get_class());
        }
    } // namespace MaskUtilities
} // namespace app::classes::types
