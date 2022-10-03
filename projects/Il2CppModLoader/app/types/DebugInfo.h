#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugInfo__Class** type_info;
        inline app::DebugInfo__Class* get_class() {
            return il2cpp::get_class<app::DebugInfo__Class>(type_info, "System.Linq.Expressions.Interpreter", "DebugInfo");
        }
        inline app::DebugInfo* create() {
            return il2cpp::create_object<app::DebugInfo>(get_class());
        }
        inline app::DebugInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::DebugInfo__Array>(get_class(), size);
        }
    } // namespace DebugInfo
} // namespace app::classes::types
