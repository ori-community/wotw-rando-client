#pragma once
#include <Modloader/app/structs/TeleportRestrictZone.h>
#include <Modloader/app/structs/TeleportRestrictZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TeleportRestrictZone {
        inline app::TeleportRestrictZone__Class** type_info() {
            static app::TeleportRestrictZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TeleportRestrictZone__Class**)(modloader::win::memory::resolve_rva(0x047681B8));
            }
            return cache;
        }
        inline app::TeleportRestrictZone__Class* get_class() {
            return il2cpp::get_class<app::TeleportRestrictZone__Class>(type_info(), "", "TeleportRestrictZone");
        }
        inline app::TeleportRestrictZone* create() {
            return il2cpp::create_object<app::TeleportRestrictZone>(get_class());
        }
    } // namespace TeleportRestrictZone
} // namespace app::classes::types
