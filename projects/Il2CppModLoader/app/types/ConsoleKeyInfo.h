#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConsoleKeyInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConsoleKeyInfo__Class** type_info;
        inline app::ConsoleKeyInfo__Class* get_class() {
            return il2cpp::get_class<app::ConsoleKeyInfo__Class>(type_info, "System", "ConsoleKeyInfo");
        }
        inline app::ConsoleKeyInfo* create() {
            return il2cpp::create_object<app::ConsoleKeyInfo>(get_class());
        }
        inline app::ConsoleKeyInfo__Boxed* box(app::ConsoleKeyInfo value) {
            return il2cpp::box_value<app::ConsoleKeyInfo__Boxed>(get_class(), value);
        }
    } // namespace ConsoleKeyInfo
} // namespace app::classes::types
