#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GuessHFRPrewarmOperation {
        inline app::GuessHFRPrewarmOperation__Class** type_info = (app::GuessHFRPrewarmOperation__Class**)(modloader::win::memory::resolve_rva(0x0472CA48));
        inline app::GuessHFRPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::GuessHFRPrewarmOperation__Class>(type_info, "frameworks.loading.Prewarmers", "GuessHFRPrewarmOperation");
        }
        inline app::GuessHFRPrewarmOperation* create() {
            return il2cpp::create_object<app::GuessHFRPrewarmOperation>(get_class());
        }
    } // namespace GuessHFRPrewarmOperation
} // namespace app::classes::types
