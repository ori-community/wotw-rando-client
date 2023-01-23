#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LoadPoolingPrewarmInstancesOperation__Class.h>
#include <Modloader/app/structs/LoadPoolingPrewarmInstancesOperation.h>

namespace app::classes::types {
    namespace LoadPoolingPrewarmInstancesOperation {
        inline app::LoadPoolingPrewarmInstancesOperation__Class** type_info = (app::LoadPoolingPrewarmInstancesOperation__Class**)(modloader::win::memory::resolve_rva(0x04709708));
        inline app::LoadPoolingPrewarmInstancesOperation__Class* get_class() {
            return il2cpp::get_class<app::LoadPoolingPrewarmInstancesOperation__Class>(type_info, "frameworks.loading.Prewarmers", "LoadPoolingPrewarmInstancesOperation");
        }
        inline app::LoadPoolingPrewarmInstancesOperation* create() {
            return il2cpp::create_object<app::LoadPoolingPrewarmInstancesOperation>(get_class());
        }
    } // namespace LoadPoolingPrewarmInstancesOperation
} // namespace app::classes::types
