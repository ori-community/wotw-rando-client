#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Cursor {
        namespace {
            app::Cursor__Class* type_info_ref = nullptr;
        }
        app::Cursor__Class** type_info = &type_info_ref;
        inline app::Cursor__Class* get_class() {
            return il2cpp::get_class<app::Cursor__Class>(type_info, "UnityEngine", "Cursor");
        }
        inline app::Cursor* create() {
            return il2cpp::create_object<app::Cursor>(get_class());
        }
    } // namespace Cursor
} // namespace app::classes::types
