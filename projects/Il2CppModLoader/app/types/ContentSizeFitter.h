#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContentSizeFitter {
        namespace {
            app::ContentSizeFitter__Class* type_info_ref = nullptr;
        }
        app::ContentSizeFitter__Class** type_info = &type_info_ref;
        inline app::ContentSizeFitter__Class* get_class() {
            return il2cpp::get_class<app::ContentSizeFitter__Class>(type_info, "UnityEngine.UI", "ContentSizeFitter");
        }
        inline app::ContentSizeFitter* create() {
            return il2cpp::create_object<app::ContentSizeFitter>(get_class());
        }
    } // namespace ContentSizeFitter
} // namespace app::classes::types
