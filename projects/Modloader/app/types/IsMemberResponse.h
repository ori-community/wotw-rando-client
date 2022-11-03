#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsMemberResponse {
        inline app::IsMemberResponse__Class** type_info = (app::IsMemberResponse__Class**)(modloader::win::memory::resolve_rva(0x04785BD8));
        inline app::IsMemberResponse__Class* get_class() {
            return il2cpp::get_class<app::IsMemberResponse__Class>(type_info, "PlayFab.GroupsModels", "IsMemberResponse");
        }
        inline app::IsMemberResponse* create() {
            return il2cpp::create_object<app::IsMemberResponse>(get_class());
        }
    } // namespace IsMemberResponse
} // namespace app::classes::types
