#pragma once
#include <Modloader/app/structs/GhostServerEventsPlugin_ServerEventData.h>
#include <Modloader/app/structs/GhostServerEventsPlugin_ServerEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostServerEventsPlugin_ServerEventData {
        inline app::GhostServerEventsPlugin_ServerEventData__Class** type_info() {
            static app::GhostServerEventsPlugin_ServerEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostServerEventsPlugin_ServerEventData__Class**)(modloader::win::memory::resolve_rva(0x047825E0));
            }
            return cache;
        }
        inline app::GhostServerEventsPlugin_ServerEventData__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostServerEventsPlugin_ServerEventData__Class>(type_info(), "", "GhostServerEventsPlugin", "ServerEventData");
        }
        inline app::GhostServerEventsPlugin_ServerEventData* create() {
            return il2cpp::create_object<app::GhostServerEventsPlugin_ServerEventData>(get_class());
        }
    } // namespace GhostServerEventsPlugin_ServerEventData
} // namespace app::classes::types
