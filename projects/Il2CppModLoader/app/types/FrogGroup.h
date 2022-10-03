#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrogGroup {
        namespace {
            app::FrogGroup__Class* type_info_ref = nullptr;
        }
        app::FrogGroup__Class** type_info = &type_info_ref;
        inline app::FrogGroup__Class* get_class() {
            return il2cpp::get_class<app::FrogGroup__Class>(type_info, "", "FrogGroup");
        }
        inline app::FrogGroup* create() {
            return il2cpp::create_object<app::FrogGroup>(get_class());
        }
    } // namespace FrogGroup
} // namespace app::classes::types
