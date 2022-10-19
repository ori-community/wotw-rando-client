#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnblockEntityRequest {
        inline app::UnblockEntityRequest__Class** type_info = (app::UnblockEntityRequest__Class**)(modloader::win::memory::resolve_rva(0x04721C80));
        inline app::UnblockEntityRequest__Class* get_class() {
            return il2cpp::get_class<app::UnblockEntityRequest__Class>(type_info, "PlayFab.GroupsModels", "UnblockEntityRequest");
        }
        inline app::UnblockEntityRequest* create() {
            return il2cpp::create_object<app::UnblockEntityRequest>(get_class());
        }
    } // namespace UnblockEntityRequest
} // namespace app::classes::types
