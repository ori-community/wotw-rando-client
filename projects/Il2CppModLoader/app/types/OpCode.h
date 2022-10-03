#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OpCode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OpCode__Class** type_info;
        inline app::OpCode__Class* get_class() {
            return il2cpp::get_class<app::OpCode__Class>(type_info, "System.Reflection.Emit", "OpCode");
        }
        inline app::OpCode* create() {
            return il2cpp::create_object<app::OpCode>(get_class());
        }
        inline app::OpCode__Boxed* box(app::OpCode value) {
            return il2cpp::box_value<app::OpCode__Boxed>(get_class(), value);
        }
    } // namespace OpCode
} // namespace app::classes::types
