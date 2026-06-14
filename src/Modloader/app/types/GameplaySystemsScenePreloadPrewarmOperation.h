#pragma once
#include <Modloader/app/structs/GameplaySystemsScenePreloadPrewarmOperation.h>
#include <Modloader/app/structs/GameplaySystemsScenePreloadPrewarmOperation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameplaySystemsScenePreloadPrewarmOperation {
        inline app::GameplaySystemsScenePreloadPrewarmOperation__Class** type_info() {
            static app::GameplaySystemsScenePreloadPrewarmOperation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameplaySystemsScenePreloadPrewarmOperation__Class**)(modloader::win::memory::resolve_rva(0x04777F20));
            }
            return cache;
        }
        inline app::GameplaySystemsScenePreloadPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::GameplaySystemsScenePreloadPrewarmOperation__Class>(type_info(), "frameworks.loading.Prewarmers", "GameplaySystemsScenePreloadPrewarmOperation");
        }
        inline app::GameplaySystemsScenePreloadPrewarmOperation* create() {
            return il2cpp::create_object<app::GameplaySystemsScenePreloadPrewarmOperation>(get_class());
        }
    } // namespace GameplaySystemsScenePreloadPrewarmOperation
} // namespace app::classes::types
