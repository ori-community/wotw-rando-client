#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Cursor {
        namespace {
            inline app::Cursor__Class* type_info_ref = nullptr;
        }
        inline app::Cursor__Class** type_info = &type_info_ref;
        inline app::Cursor__Class* get_class() {
            return il2cpp::get_class<app::Cursor__Class>(type_info, "UnityEngine", "Cursor");
        }
        inline app::Cursor* create() {
            return il2cpp::create_object<app::Cursor>(get_class());
        }
    } // namespace Cursor
} // namespace app::classes::types
