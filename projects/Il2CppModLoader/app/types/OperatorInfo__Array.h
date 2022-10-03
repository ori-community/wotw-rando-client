#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OperatorInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OperatorInfo__Array__Class** type_info;
        inline app::OperatorInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::OperatorInfo__Array__Class>(type_info, "System.Data", "OperatorInfo[]");
        }
        inline app::OperatorInfo__Array* create() {
            return il2cpp::create_object<app::OperatorInfo__Array>(get_class());
        }
    } // namespace OperatorInfo__Array
} // namespace app::classes::types
