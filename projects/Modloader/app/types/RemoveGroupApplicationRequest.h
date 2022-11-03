#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoveGroupApplicationRequest {
        inline app::RemoveGroupApplicationRequest__Class** type_info = (app::RemoveGroupApplicationRequest__Class**)(modloader::win::memory::resolve_rva(0x047643E8));
        inline app::RemoveGroupApplicationRequest__Class* get_class() {
            return il2cpp::get_class<app::RemoveGroupApplicationRequest__Class>(type_info, "PlayFab.GroupsModels", "RemoveGroupApplicationRequest");
        }
        inline app::RemoveGroupApplicationRequest* create() {
            return il2cpp::create_object<app::RemoveGroupApplicationRequest>(get_class());
        }
    } // namespace RemoveGroupApplicationRequest
} // namespace app::classes::types
