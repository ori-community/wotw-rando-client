#pragma once
#include <Modloader/app/structs/UnlinkCustomIDRequest.h>
#include <Modloader/app/structs/UnlinkCustomIDRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkCustomIDRequest {
        inline app::UnlinkCustomIDRequest__Class** type_info() {
            static app::UnlinkCustomIDRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkCustomIDRequest__Class**)(modloader::win::memory::resolve_rva(0x04726960));
            }
            return cache;
        }
        inline app::UnlinkCustomIDRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkCustomIDRequest__Class>(type_info(), "PlayFab.ClientModels", "UnlinkCustomIDRequest");
        }
        inline app::UnlinkCustomIDRequest* create() {
            return il2cpp::create_object<app::UnlinkCustomIDRequest>(get_class());
        }
    } // namespace UnlinkCustomIDRequest
} // namespace app::classes::types
