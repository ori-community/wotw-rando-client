#pragma once
#include <Modloader/app/structs/GuessHFRPrewarmOperation.h>
#include <Modloader/app/structs/GuessHFRPrewarmOperation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GuessHFRPrewarmOperation {
        inline app::GuessHFRPrewarmOperation__Class** type_info() {
            static app::GuessHFRPrewarmOperation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GuessHFRPrewarmOperation__Class**)(modloader::win::memory::resolve_rva(0x0472CA48));
            }
            return cache;
        }
        inline app::GuessHFRPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::GuessHFRPrewarmOperation__Class>(type_info(), "frameworks.loading.Prewarmers", "GuessHFRPrewarmOperation");
        }
        inline app::GuessHFRPrewarmOperation* create() {
            return il2cpp::create_object<app::GuessHFRPrewarmOperation>(get_class());
        }
    } // namespace GuessHFRPrewarmOperation
} // namespace app::classes::types
