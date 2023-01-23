#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PoolingPrewarmOperation__Class.h>
#include <Modloader/app/structs/PoolingPrewarmOperation.h>

namespace app::classes::types {
    namespace PoolingPrewarmOperation {
        inline app::PoolingPrewarmOperation__Class** type_info = (app::PoolingPrewarmOperation__Class**)(modloader::win::memory::resolve_rva(0x04751438));
        inline app::PoolingPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::PoolingPrewarmOperation__Class>(type_info, "frameworks.loading.Prewarmers", "PoolingPrewarmOperation");
        }
        inline app::PoolingPrewarmOperation* create() {
            return il2cpp::create_object<app::PoolingPrewarmOperation>(get_class());
        }
    } // namespace PoolingPrewarmOperation
} // namespace app::classes::types
