#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PoolingPrewarmOperation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PoolingPrewarmOperation__Class** type_info;
        inline app::PoolingPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::PoolingPrewarmOperation__Class>(type_info, "frameworks.loading.Prewarmers", "PoolingPrewarmOperation");
        }
        inline app::PoolingPrewarmOperation* create() {
            return il2cpp::create_object<app::PoolingPrewarmOperation>(get_class());
        }
    } // namespace PoolingPrewarmOperation
} // namespace app::classes::types
