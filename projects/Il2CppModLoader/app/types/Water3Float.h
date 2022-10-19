#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Water3Float {
        namespace {
            inline app::Water3Float__Class* type_info_ref = nullptr;
        }
        inline app::Water3Float__Class** type_info = &type_info_ref;
        inline app::Water3Float__Class* get_class() {
            return il2cpp::get_class<app::Water3Float__Class>(type_info, "", "Water3Float");
        }
        inline app::Water3Float* create() {
            return il2cpp::create_object<app::Water3Float>(get_class());
        }
    } // namespace Water3Float
} // namespace app::classes::types
