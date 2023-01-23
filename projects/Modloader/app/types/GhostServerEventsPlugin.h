#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GhostServerEventsPlugin__Class.h>
#include <Modloader/app/structs/GhostServerEventsPlugin.h>

namespace app::classes::types {
    namespace GhostServerEventsPlugin {
        inline app::GhostServerEventsPlugin__Class** type_info = (app::GhostServerEventsPlugin__Class**)(modloader::win::memory::resolve_rva(0x0477AEB0));
        inline app::GhostServerEventsPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostServerEventsPlugin__Class>(type_info, "", "GhostServerEventsPlugin");
        }
        inline app::GhostServerEventsPlugin* create() {
            return il2cpp::create_object<app::GhostServerEventsPlugin>(get_class());
        }
    } // namespace GhostServerEventsPlugin
} // namespace app::classes::types
