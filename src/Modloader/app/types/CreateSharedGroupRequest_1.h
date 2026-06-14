#pragma once
#include <Modloader/app/structs/CreateSharedGroupRequest_1.h>
#include <Modloader/app/structs/CreateSharedGroupRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateSharedGroupRequest_1 {
        inline app::CreateSharedGroupRequest_1__Class** type_info() {
            static app::CreateSharedGroupRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CreateSharedGroupRequest_1__Class**)(modloader::win::memory::resolve_rva(0x047843D0));
            }
            return cache;
        }
        inline app::CreateSharedGroupRequest_1__Class* get_class() {
            return il2cpp::get_class<app::CreateSharedGroupRequest_1__Class>(type_info(), "PlayFab.ServerModels", "CreateSharedGroupRequest");
        }
        inline app::CreateSharedGroupRequest_1* create() {
            return il2cpp::create_object<app::CreateSharedGroupRequest_1>(get_class());
        }
    } // namespace CreateSharedGroupRequest_1
} // namespace app::classes::types
