#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivateIntroLogosPrewarmOperation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActivateIntroLogosPrewarmOperation__Class** type_info;
        inline app::ActivateIntroLogosPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::ActivateIntroLogosPrewarmOperation__Class>(type_info, "frameworks.loading.Prewarmers", "ActivateIntroLogosPrewarmOperation");
        }
        inline app::ActivateIntroLogosPrewarmOperation* create() {
            return il2cpp::create_object<app::ActivateIntroLogosPrewarmOperation>(get_class());
        }
    } // namespace ActivateIntroLogosPrewarmOperation
} // namespace app::classes::types
