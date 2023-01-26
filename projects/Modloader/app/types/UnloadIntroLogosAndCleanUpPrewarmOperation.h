#pragma once
#include <Modloader/app/structs/UnloadIntroLogosAndCleanUpPrewarmOperation.h>
#include <Modloader/app/structs/UnloadIntroLogosAndCleanUpPrewarmOperation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnloadIntroLogosAndCleanUpPrewarmOperation {
        inline app::UnloadIntroLogosAndCleanUpPrewarmOperation__Class** type_info() {
            static app::UnloadIntroLogosAndCleanUpPrewarmOperation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnloadIntroLogosAndCleanUpPrewarmOperation__Class**)(modloader::win::memory::resolve_rva(0x0470CB80));
            }
            return cache;
        }
        inline app::UnloadIntroLogosAndCleanUpPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::UnloadIntroLogosAndCleanUpPrewarmOperation__Class>(type_info(), "frameworks.loading.Prewarmers", "UnloadIntroLogosAndCleanUpPrewarmOperation");
        }
        inline app::UnloadIntroLogosAndCleanUpPrewarmOperation* create() {
            return il2cpp::create_object<app::UnloadIntroLogosAndCleanUpPrewarmOperation>(get_class());
        }
    } // namespace UnloadIntroLogosAndCleanUpPrewarmOperation
} // namespace app::classes::types
