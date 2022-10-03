#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompilerGeneratedAttribute {
        namespace {
            app::CompilerGeneratedAttribute__Class* type_info_ref = nullptr;
        }
        app::CompilerGeneratedAttribute__Class** type_info = &type_info_ref;
        inline app::CompilerGeneratedAttribute__Class* get_class() {
            return il2cpp::get_class<app::CompilerGeneratedAttribute__Class>(type_info, "System.Runtime.CompilerServices", "CompilerGeneratedAttribute");
        }
        inline app::CompilerGeneratedAttribute* create() {
            return il2cpp::create_object<app::CompilerGeneratedAttribute>(get_class());
        }
    } // namespace CompilerGeneratedAttribute
} // namespace app::classes::types
