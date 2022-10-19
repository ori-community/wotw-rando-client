#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostServerEventsPlugin_ServerEventData {
        inline app::GhostServerEventsPlugin_ServerEventData__Class** type_info = (app::GhostServerEventsPlugin_ServerEventData__Class**)(modloader::win::memory::resolve_rva(0x047825E0));
        inline app::GhostServerEventsPlugin_ServerEventData__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostServerEventsPlugin_ServerEventData__Class>(type_info, "", "GhostServerEventsPlugin", "ServerEventData");
        }
        inline app::GhostServerEventsPlugin_ServerEventData* create() {
            return il2cpp::create_object<app::GhostServerEventsPlugin_ServerEventData>(get_class());
        }
    } // namespace GhostServerEventsPlugin_ServerEventData
} // namespace app::classes::types
