#pragma once
#include <Modloader/app/structs/ClearPoolingRefsPrewarmOperation.h>
#include <Modloader/app/structs/ClearPoolingRefsPrewarmOperation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClearPoolingRefsPrewarmOperation {
        inline app::ClearPoolingRefsPrewarmOperation__Class** type_info() {
            static app::ClearPoolingRefsPrewarmOperation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ClearPoolingRefsPrewarmOperation__Class**)(modloader::win::memory::resolve_rva(0x0470AC20));
            }
            return cache;
        }
        inline app::ClearPoolingRefsPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::ClearPoolingRefsPrewarmOperation__Class>(type_info(), "frameworks.loading.Prewarmers", "ClearPoolingRefsPrewarmOperation");
        }
        inline app::ClearPoolingRefsPrewarmOperation* create() {
            return il2cpp::create_object<app::ClearPoolingRefsPrewarmOperation>(get_class());
        }
    } // namespace ClearPoolingRefsPrewarmOperation
} // namespace app::classes::types
