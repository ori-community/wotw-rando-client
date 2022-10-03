#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameplaySystemsScenePreloadPrewarmOperation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameplaySystemsScenePreloadPrewarmOperation__Class** type_info;
        inline app::GameplaySystemsScenePreloadPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::GameplaySystemsScenePreloadPrewarmOperation__Class>(type_info, "frameworks.loading.Prewarmers", "GameplaySystemsScenePreloadPrewarmOperation");
        }
        inline app::GameplaySystemsScenePreloadPrewarmOperation* create() {
            return il2cpp::create_object<app::GameplaySystemsScenePreloadPrewarmOperation>(get_class());
        }
    } // namespace GameplaySystemsScenePreloadPrewarmOperation
} // namespace app::classes::types
