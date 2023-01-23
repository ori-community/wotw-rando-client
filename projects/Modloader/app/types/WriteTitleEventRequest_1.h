#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WriteTitleEventRequest_1__Class.h>
#include <Modloader/app/structs/WriteTitleEventRequest_1.h>

namespace app::classes::types {
    namespace WriteTitleEventRequest_1 {
        inline app::WriteTitleEventRequest_1__Class** type_info = (app::WriteTitleEventRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0477C380));
        inline app::WriteTitleEventRequest_1__Class* get_class() {
            return il2cpp::get_class<app::WriteTitleEventRequest_1__Class>(type_info, "PlayFab.ServerModels", "WriteTitleEventRequest");
        }
        inline app::WriteTitleEventRequest_1* create() {
            return il2cpp::create_object<app::WriteTitleEventRequest_1>(get_class());
        }
    } // namespace WriteTitleEventRequest_1
} // namespace app::classes::types
