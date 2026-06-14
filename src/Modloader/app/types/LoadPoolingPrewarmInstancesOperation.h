#pragma once
#include <Modloader/app/structs/LoadPoolingPrewarmInstancesOperation.h>
#include <Modloader/app/structs/LoadPoolingPrewarmInstancesOperation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadPoolingPrewarmInstancesOperation {
        inline app::LoadPoolingPrewarmInstancesOperation__Class** type_info() {
            static app::LoadPoolingPrewarmInstancesOperation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadPoolingPrewarmInstancesOperation__Class**)(modloader::win::memory::resolve_rva(0x04709708));
            }
            return cache;
        }
        inline app::LoadPoolingPrewarmInstancesOperation__Class* get_class() {
            return il2cpp::get_class<app::LoadPoolingPrewarmInstancesOperation__Class>(type_info(), "frameworks.loading.Prewarmers", "LoadPoolingPrewarmInstancesOperation");
        }
        inline app::LoadPoolingPrewarmInstancesOperation* create() {
            return il2cpp::create_object<app::LoadPoolingPrewarmInstancesOperation>(get_class());
        }
    } // namespace LoadPoolingPrewarmInstancesOperation
} // namespace app::classes::types
