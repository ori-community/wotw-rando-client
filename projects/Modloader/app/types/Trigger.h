#pragma once
#include <Modloader/app/structs/Trigger.h>
#include <Modloader/app/structs/Trigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Trigger {
        inline app::Trigger__Class** type_info() {
            static app::Trigger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Trigger__Class**)(modloader::win::memory::resolve_rva(0x047267B8));
            }
            return cache;
        }
        inline app::Trigger__Class* get_class() {
            return il2cpp::get_class<app::Trigger__Class>(type_info(), "AK.Wwise", "Trigger");
        }
        inline app::Trigger* create() {
            return il2cpp::create_object<app::Trigger>(get_class());
        }
    } // namespace Trigger
} // namespace app::classes::types
