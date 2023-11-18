#pragma once
#include <Modloader/app/structs/ActivateIntroLogosPrewarmOperation.h>
#include <Modloader/app/structs/ActivateIntroLogosPrewarmOperation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivateIntroLogosPrewarmOperation {
        inline app::ActivateIntroLogosPrewarmOperation__Class** type_info() {
            static app::ActivateIntroLogosPrewarmOperation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ActivateIntroLogosPrewarmOperation__Class**)(modloader::win::memory::resolve_rva(0x04780580));
            }
            return cache;
        }
        inline app::ActivateIntroLogosPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::ActivateIntroLogosPrewarmOperation__Class>(type_info(), "frameworks.loading.Prewarmers", "ActivateIntroLogosPrewarmOperation");
        }
        inline app::ActivateIntroLogosPrewarmOperation* create() {
            return il2cpp::create_object<app::ActivateIntroLogosPrewarmOperation>(get_class());
        }
    } // namespace ActivateIntroLogosPrewarmOperation
} // namespace app::classes::types
