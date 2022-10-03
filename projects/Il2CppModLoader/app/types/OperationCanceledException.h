#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OperationCanceledException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OperationCanceledException__Class** type_info;
        inline app::OperationCanceledException__Class* get_class() {
            return il2cpp::get_class<app::OperationCanceledException__Class>(type_info, "System", "OperationCanceledException");
        }
        inline app::OperationCanceledException* create() {
            return il2cpp::create_object<app::OperationCanceledException>(get_class());
        }
    } // namespace OperationCanceledException
} // namespace app::classes::types
