#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SplitFlameMenuItem {
        namespace {
            app::SplitFlameMenuItem__Class* type_info_ref = nullptr;
        }
        app::SplitFlameMenuItem__Class** type_info = &type_info_ref;
        inline app::SplitFlameMenuItem__Class* get_class() {
            return il2cpp::get_class<app::SplitFlameMenuItem__Class>(type_info, "", "SplitFlameMenuItem");
        }
        inline app::SplitFlameMenuItem* create() {
            return il2cpp::create_object<app::SplitFlameMenuItem>(get_class());
        }
    } // namespace SplitFlameMenuItem
} // namespace app::classes::types
