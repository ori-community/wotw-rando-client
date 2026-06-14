#pragma once
#include <Modloader/app/structs/LoadPoolingPrewarmOperation.h>
#include <Modloader/app/structs/LoadPoolingPrewarmOperation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadPoolingPrewarmOperation {
        inline app::LoadPoolingPrewarmOperation__Class** type_info() {
            static app::LoadPoolingPrewarmOperation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadPoolingPrewarmOperation__Class**)(modloader::win::memory::resolve_rva(0x047498C8));
            }
            return cache;
        }
        inline app::LoadPoolingPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::LoadPoolingPrewarmOperation__Class>(type_info(), "frameworks.loading.Prewarmers", "LoadPoolingPrewarmOperation");
        }
        inline app::LoadPoolingPrewarmOperation* create() {
            return il2cpp::create_object<app::LoadPoolingPrewarmOperation>(get_class());
        }
    } // namespace LoadPoolingPrewarmOperation
} // namespace app::classes::types
