#pragma once
#include <Modloader/app/structs/AtlasPrewarmOperation.h>
#include <Modloader/app/structs/AtlasPrewarmOperation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AtlasPrewarmOperation {
        inline app::AtlasPrewarmOperation__Class** type_info() {
            static app::AtlasPrewarmOperation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AtlasPrewarmOperation__Class**)(modloader::win::memory::resolve_rva(0x04754ED0));
            }
            return cache;
        }
        inline app::AtlasPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::AtlasPrewarmOperation__Class>(type_info(), "frameworks.loading.Prewarmers", "AtlasPrewarmOperation");
        }
        inline app::AtlasPrewarmOperation* create() {
            return il2cpp::create_object<app::AtlasPrewarmOperation>(get_class());
        }
    } // namespace AtlasPrewarmOperation
} // namespace app::classes::types
