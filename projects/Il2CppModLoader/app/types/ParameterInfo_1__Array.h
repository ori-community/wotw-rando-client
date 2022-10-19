#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParameterInfo_1__Array {
        inline app::ParameterInfo_1__Array__Class** type_info = (app::ParameterInfo_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04729930));
        inline app::ParameterInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::ParameterInfo_1__Array__Class>(type_info, "System.Reflection", "ParameterInfo[]");
        }
        inline app::ParameterInfo_1__Array* create() {
            return il2cpp::create_object<app::ParameterInfo_1__Array>(get_class());
        }
    } // namespace ParameterInfo_1__Array
} // namespace app::classes::types
