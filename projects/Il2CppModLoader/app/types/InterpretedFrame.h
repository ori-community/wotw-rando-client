#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InterpretedFrame {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InterpretedFrame__Class** type_info;
        inline app::InterpretedFrame__Class* get_class() {
            return il2cpp::get_class<app::InterpretedFrame__Class>(type_info, "System.Linq.Expressions.Interpreter", "InterpretedFrame");
        }
        inline app::InterpretedFrame* create() {
            return il2cpp::create_object<app::InterpretedFrame>(get_class());
        }
    } // namespace InterpretedFrame
} // namespace app::classes::types
