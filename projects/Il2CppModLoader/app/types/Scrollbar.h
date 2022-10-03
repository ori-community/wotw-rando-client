#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Scrollbar {
        namespace {
            app::Scrollbar__Class* type_info_ref = nullptr;
        }
        app::Scrollbar__Class** type_info = &type_info_ref;
        inline app::Scrollbar__Class* get_class() {
            return il2cpp::get_class<app::Scrollbar__Class>(type_info, "UnityEngine.UI", "Scrollbar");
        }
        inline app::Scrollbar* create() {
            return il2cpp::create_object<app::Scrollbar>(get_class());
        }
    } // namespace Scrollbar
} // namespace app::classes::types
