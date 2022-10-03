#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderOrder__Enum {
        namespace {
            app::UberShaderOrder__Enum__Class* type_info_ref = nullptr;
        }
        app::UberShaderOrder__Enum__Class** type_info = &type_info_ref;
        inline app::UberShaderOrder__Enum__Class* get_class() {
            return il2cpp::get_class<app::UberShaderOrder__Enum__Class>(type_info, "", "UberShaderOrder");
        }
        inline app::UberShaderOrder__Enum* create() {
            return il2cpp::create_object<app::UberShaderOrder__Enum>(get_class());
        }
    } // namespace UberShaderOrder__Enum
} // namespace app::classes::types
