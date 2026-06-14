#pragma once
#include <Modloader/app/structs/TriggerContext.h>
#include <Modloader/app/structs/TriggerContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriggerContext {
        inline app::TriggerContext__Class** type_info() {
            static app::TriggerContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TriggerContext__Class**)(modloader::win::memory::resolve_rva(0x0477EFC0));
            }
            return cache;
        }
        inline app::TriggerContext__Class* get_class() {
            return il2cpp::get_class<app::TriggerContext__Class>(type_info(), "", "TriggerContext");
        }
        inline app::TriggerContext* create() {
            return il2cpp::create_object<app::TriggerContext>(get_class());
        }
    } // namespace TriggerContext
} // namespace app::classes::types
