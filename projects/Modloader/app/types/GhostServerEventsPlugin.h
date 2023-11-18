#pragma once
#include <Modloader/app/structs/GhostServerEventsPlugin.h>
#include <Modloader/app/structs/GhostServerEventsPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostServerEventsPlugin {
        inline app::GhostServerEventsPlugin__Class** type_info() {
            static app::GhostServerEventsPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostServerEventsPlugin__Class**)(modloader::win::memory::resolve_rva(0x0477AEB0));
            }
            return cache;
        }
        inline app::GhostServerEventsPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostServerEventsPlugin__Class>(type_info(), "", "GhostServerEventsPlugin");
        }
        inline app::GhostServerEventsPlugin* create() {
            return il2cpp::create_object<app::GhostServerEventsPlugin>(get_class());
        }
    } // namespace GhostServerEventsPlugin
} // namespace app::classes::types
