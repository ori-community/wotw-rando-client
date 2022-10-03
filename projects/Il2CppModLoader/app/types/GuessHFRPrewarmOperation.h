#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GuessHFRPrewarmOperation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GuessHFRPrewarmOperation__Class** type_info;
        inline app::GuessHFRPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::GuessHFRPrewarmOperation__Class>(type_info, "frameworks.loading.Prewarmers", "GuessHFRPrewarmOperation");
        }
        inline app::GuessHFRPrewarmOperation* create() {
            return il2cpp::create_object<app::GuessHFRPrewarmOperation>(get_class());
        }
    } // namespace GuessHFRPrewarmOperation
} // namespace app::classes::types
