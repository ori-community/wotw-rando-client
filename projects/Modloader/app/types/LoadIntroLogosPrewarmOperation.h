#pragma once
#include <Modloader/app/structs/LoadIntroLogosPrewarmOperation.h>
#include <Modloader/app/structs/LoadIntroLogosPrewarmOperation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadIntroLogosPrewarmOperation {
        inline app::LoadIntroLogosPrewarmOperation__Class** type_info() {
            static app::LoadIntroLogosPrewarmOperation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadIntroLogosPrewarmOperation__Class**)(modloader::win::memory::resolve_rva(0x0472F648));
            }
            return cache;
        }
        inline app::LoadIntroLogosPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::LoadIntroLogosPrewarmOperation__Class>(type_info(), "frameworks.loading.Prewarmers", "LoadIntroLogosPrewarmOperation");
        }
        inline app::LoadIntroLogosPrewarmOperation* create() {
            return il2cpp::create_object<app::LoadIntroLogosPrewarmOperation>(get_class());
        }
    } // namespace LoadIntroLogosPrewarmOperation
} // namespace app::classes::types
