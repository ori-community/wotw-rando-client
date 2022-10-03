#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ILGenerator {
        namespace {
            app::ILGenerator__Class* type_info_ref = nullptr;
        }
        app::ILGenerator__Class** type_info = &type_info_ref;
        inline app::ILGenerator__Class* get_class() {
            return il2cpp::get_class<app::ILGenerator__Class>(type_info, "System.Reflection.Emit", "ILGenerator");
        }
        inline app::ILGenerator* create() {
            return il2cpp::create_object<app::ILGenerator>(get_class());
        }
    } // namespace ILGenerator
} // namespace app::classes::types
