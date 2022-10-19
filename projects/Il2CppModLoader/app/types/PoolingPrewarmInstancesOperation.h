#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PoolingPrewarmInstancesOperation {
        inline app::PoolingPrewarmInstancesOperation__Class** type_info = (app::PoolingPrewarmInstancesOperation__Class**)(modloader::win::memory::resolve_rva(0x047399C8));
        inline app::PoolingPrewarmInstancesOperation__Class* get_class() {
            return il2cpp::get_class<app::PoolingPrewarmInstancesOperation__Class>(type_info, "frameworks.loading.Prewarmers", "PoolingPrewarmInstancesOperation");
        }
        inline app::PoolingPrewarmInstancesOperation* create() {
            return il2cpp::create_object<app::PoolingPrewarmInstancesOperation>(get_class());
        }
    } // namespace PoolingPrewarmInstancesOperation
} // namespace app::classes::types
