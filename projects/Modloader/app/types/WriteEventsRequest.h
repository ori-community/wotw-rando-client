#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WriteEventsRequest__Class.h>
#include <Modloader/app/structs/WriteEventsRequest.h>

namespace app::classes::types {
    namespace WriteEventsRequest {
        inline app::WriteEventsRequest__Class** type_info = (app::WriteEventsRequest__Class**)(modloader::win::memory::resolve_rva(0x04707B80));
        inline app::WriteEventsRequest__Class* get_class() {
            return il2cpp::get_class<app::WriteEventsRequest__Class>(type_info, "PlayFab.EventsModels", "WriteEventsRequest");
        }
        inline app::WriteEventsRequest* create() {
            return il2cpp::create_object<app::WriteEventsRequest>(get_class());
        }
    } // namespace WriteEventsRequest
} // namespace app::classes::types
