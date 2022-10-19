#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AcceptGroupApplicationRequest {
        inline app::AcceptGroupApplicationRequest__Class** type_info = (app::AcceptGroupApplicationRequest__Class**)(modloader::win::memory::resolve_rva(0x04757FF0));
        inline app::AcceptGroupApplicationRequest__Class* get_class() {
            return il2cpp::get_class<app::AcceptGroupApplicationRequest__Class>(type_info, "PlayFab.GroupsModels", "AcceptGroupApplicationRequest");
        }
        inline app::AcceptGroupApplicationRequest* create() {
            return il2cpp::create_object<app::AcceptGroupApplicationRequest>(get_class());
        }
    } // namespace AcceptGroupApplicationRequest
} // namespace app::classes::types
