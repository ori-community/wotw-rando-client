#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IL2CPPPrewarmOperation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IL2CPPPrewarmOperation__Class** type_info;
        inline app::IL2CPPPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::IL2CPPPrewarmOperation__Class>(type_info, "frameworks.loading.Prewarmers", "IL2CPPPrewarmOperation");
        }
        inline app::IL2CPPPrewarmOperation* create() {
            return il2cpp::create_object<app::IL2CPPPrewarmOperation>(get_class());
        }
    } // namespace IL2CPPPrewarmOperation
} // namespace app::classes::types
