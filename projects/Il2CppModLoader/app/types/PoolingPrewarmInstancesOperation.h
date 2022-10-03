#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PoolingPrewarmInstancesOperation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PoolingPrewarmInstancesOperation__Class** type_info;
        inline app::PoolingPrewarmInstancesOperation__Class* get_class() {
            return il2cpp::get_class<app::PoolingPrewarmInstancesOperation__Class>(type_info, "frameworks.loading.Prewarmers", "PoolingPrewarmInstancesOperation");
        }
        inline app::PoolingPrewarmInstancesOperation* create() {
            return il2cpp::create_object<app::PoolingPrewarmInstancesOperation>(get_class());
        }
    } // namespace PoolingPrewarmInstancesOperation
} // namespace app::classes::types
