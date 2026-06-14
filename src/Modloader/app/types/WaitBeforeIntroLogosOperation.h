#pragma once
#include <Modloader/app/structs/WaitBeforeIntroLogosOperation.h>
#include <Modloader/app/structs/WaitBeforeIntroLogosOperation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitBeforeIntroLogosOperation {
        inline app::WaitBeforeIntroLogosOperation__Class** type_info() {
            static app::WaitBeforeIntroLogosOperation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WaitBeforeIntroLogosOperation__Class**)(modloader::win::memory::resolve_rva(0x04797990));
            }
            return cache;
        }
        inline app::WaitBeforeIntroLogosOperation__Class* get_class() {
            return il2cpp::get_class<app::WaitBeforeIntroLogosOperation__Class>(type_info(), "frameworks.loading.Prewarmers", "WaitBeforeIntroLogosOperation");
        }
        inline app::WaitBeforeIntroLogosOperation* create() {
            return il2cpp::create_object<app::WaitBeforeIntroLogosOperation>(get_class());
        }
    } // namespace WaitBeforeIntroLogosOperation
} // namespace app::classes::types
