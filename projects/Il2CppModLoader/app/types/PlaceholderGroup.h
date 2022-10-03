#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlaceholderGroup {
        namespace {
            app::PlaceholderGroup__Class* type_info_ref = nullptr;
        }
        app::PlaceholderGroup__Class** type_info = &type_info_ref;
        inline app::PlaceholderGroup__Class* get_class() {
            return il2cpp::get_class<app::PlaceholderGroup__Class>(type_info, "", "PlaceholderGroup");
        }
        inline app::PlaceholderGroup* create() {
            return il2cpp::create_object<app::PlaceholderGroup>(get_class());
        }
    } // namespace PlaceholderGroup
} // namespace app::classes::types
