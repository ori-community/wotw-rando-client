#pragma once
#include <Modloader/app/structs/IsMemberResponse.h>
#include <Modloader/app/structs/IsMemberResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsMemberResponse {
        inline app::IsMemberResponse__Class** type_info() {
            static app::IsMemberResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IsMemberResponse__Class**)(modloader::win::memory::resolve_rva(0x04785BD8));
            }
            return cache;
        }
        inline app::IsMemberResponse__Class* get_class() {
            return il2cpp::get_class<app::IsMemberResponse__Class>(type_info(), "PlayFab.GroupsModels", "IsMemberResponse");
        }
        inline app::IsMemberResponse* create() {
            return il2cpp::create_object<app::IsMemberResponse>(get_class());
        }
    } // namespace IsMemberResponse
} // namespace app::classes::types
