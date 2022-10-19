#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Level2Map__Array {
        namespace {
            inline app::Level2Map__Array__Class* type_info_ref = nullptr;
        }
        inline app::Level2Map__Array__Class** type_info = &type_info_ref;
        inline app::Level2Map__Array__Class* get_class() {
            return il2cpp::get_class<app::Level2Map__Array__Class>(type_info, "Mono.Globalization.Unicode", "Level2Map[]");
        }
        inline app::Level2Map__Array* create() {
            return il2cpp::create_object<app::Level2Map__Array>(get_class());
        }
    } // namespace Level2Map__Array
} // namespace app::classes::types
