#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OperatorInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OperatorInfo__Class** type_info;
        inline app::OperatorInfo__Class* get_class() {
            return il2cpp::get_class<app::OperatorInfo__Class>(type_info, "System.Data", "OperatorInfo");
        }
        inline app::OperatorInfo* create() {
            return il2cpp::create_object<app::OperatorInfo>(get_class());
        }
        inline app::OperatorInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::OperatorInfo__Array>(get_class(), size);
        }
    } // namespace OperatorInfo
} // namespace app::classes::types
