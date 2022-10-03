#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadPoolingPrewarmOperation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadPoolingPrewarmOperation__Class** type_info;
        inline app::LoadPoolingPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::LoadPoolingPrewarmOperation__Class>(type_info, "frameworks.loading.Prewarmers", "LoadPoolingPrewarmOperation");
        }
        inline app::LoadPoolingPrewarmOperation* create() {
            return il2cpp::create_object<app::LoadPoolingPrewarmOperation>(get_class());
        }
    } // namespace LoadPoolingPrewarmOperation
} // namespace app::classes::types
