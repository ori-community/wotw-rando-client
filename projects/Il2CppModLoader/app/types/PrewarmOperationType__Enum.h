#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PrewarmOperationType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PrewarmOperationType__Enum__Class** type_info;
        inline app::PrewarmOperationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::PrewarmOperationType__Enum__Class>(type_info, "frameworks.loading.Prewarmers", "PrewarmOperationType");
        }
        inline app::PrewarmOperationType__Enum* create() {
            return il2cpp::create_object<app::PrewarmOperationType__Enum>(get_class());
        }
    } // namespace PrewarmOperationType__Enum
} // namespace app::classes::types
