#pragma once
#include <Modloader/app/structs/CsEvent.h>
#include <Modloader/app/structs/CsEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CsEvent {
        inline app::CsEvent__Class** type_info() {
            static app::CsEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CsEvent__Class**)(modloader::win::memory::resolve_rva(0x04781B60));
            }
            return cache;
        }
        inline app::CsEvent__Class* get_class() {
            return il2cpp::get_class<app::CsEvent__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "CsEvent");
        }
        inline app::CsEvent* create() {
            return il2cpp::create_object<app::CsEvent>(get_class());
        }
    } // namespace CsEvent
} // namespace app::classes::types
