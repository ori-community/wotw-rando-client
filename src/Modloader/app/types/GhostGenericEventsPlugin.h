#pragma once
#include <Modloader/app/structs/GhostGenericEventsPlugin.h>
#include <Modloader/app/structs/GhostGenericEventsPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostGenericEventsPlugin {
        inline app::GhostGenericEventsPlugin__Class** type_info() {
            static app::GhostGenericEventsPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostGenericEventsPlugin__Class**)(modloader::win::memory::resolve_rva(0x04713B98));
            }
            return cache;
        }
        inline app::GhostGenericEventsPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostGenericEventsPlugin__Class>(type_info(), "", "GhostGenericEventsPlugin");
        }
        inline app::GhostGenericEventsPlugin* create() {
            return il2cpp::create_object<app::GhostGenericEventsPlugin>(get_class());
        }
    } // namespace GhostGenericEventsPlugin
} // namespace app::classes::types
