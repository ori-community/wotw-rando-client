#pragma once
#include <Modloader/app/structs/PoolingPrewarmInstancesOperation.h>
#include <Modloader/app/structs/PoolingPrewarmInstancesOperation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PoolingPrewarmInstancesOperation {
        inline app::PoolingPrewarmInstancesOperation__Class** type_info() {
            static app::PoolingPrewarmInstancesOperation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PoolingPrewarmInstancesOperation__Class**)(modloader::win::memory::resolve_rva(0x047399C8));
            }
            return cache;
        }
        inline app::PoolingPrewarmInstancesOperation__Class* get_class() {
            return il2cpp::get_class<app::PoolingPrewarmInstancesOperation__Class>(type_info(), "frameworks.loading.Prewarmers", "PoolingPrewarmInstancesOperation");
        }
        inline app::PoolingPrewarmInstancesOperation* create() {
            return il2cpp::create_object<app::PoolingPrewarmInstancesOperation>(get_class());
        }
    } // namespace PoolingPrewarmInstancesOperation
} // namespace app::classes::types
