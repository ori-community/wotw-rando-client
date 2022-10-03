#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NpcProject {
        namespace {
            app::NpcProject__Class* type_info_ref = nullptr;
        }
        app::NpcProject__Class** type_info = &type_info_ref;
        inline app::NpcProject__Class* get_class() {
            return il2cpp::get_class<app::NpcProject__Class>(type_info, "", "NpcProject");
        }
        inline app::NpcProject* create() {
            return il2cpp::create_object<app::NpcProject>(get_class());
        }
    } // namespace NpcProject
} // namespace app::classes::types
