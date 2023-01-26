#pragma once
#include <Modloader/app/structs/BasePrewarmOperation.h>
#include <Modloader/app/structs/BasePrewarmOperation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BasePrewarmOperation {
        inline app::BasePrewarmOperation__Class** type_info() {
            static app::BasePrewarmOperation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BasePrewarmOperation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BasePrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::BasePrewarmOperation__Class>(type_info(), "frameworks.loading.Prewarmers", "BasePrewarmOperation");
        }
        inline app::BasePrewarmOperation* create() {
            return il2cpp::create_object<app::BasePrewarmOperation>(get_class());
        }
    } // namespace BasePrewarmOperation
} // namespace app::classes::types
