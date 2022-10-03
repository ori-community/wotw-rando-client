#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AtlasPrewarmOperation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AtlasPrewarmOperation__Class** type_info;
        inline app::AtlasPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::AtlasPrewarmOperation__Class>(type_info, "frameworks.loading.Prewarmers", "AtlasPrewarmOperation");
        }
        inline app::AtlasPrewarmOperation* create() {
            return il2cpp::create_object<app::AtlasPrewarmOperation>(get_class());
        }
    } // namespace AtlasPrewarmOperation
} // namespace app::classes::types
