#pragma once
#include <Modloader/app/structs/RemoveGenericIDRequest.h>
#include <Modloader/app/structs/RemoveGenericIDRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoveGenericIDRequest {
        inline app::RemoveGenericIDRequest__Class** type_info() {
            static app::RemoveGenericIDRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemoveGenericIDRequest__Class**)(modloader::win::memory::resolve_rva(0x047963E8));
            }
            return cache;
        }
        inline app::RemoveGenericIDRequest__Class* get_class() {
            return il2cpp::get_class<app::RemoveGenericIDRequest__Class>(type_info(), "PlayFab.ClientModels", "RemoveGenericIDRequest");
        }
        inline app::RemoveGenericIDRequest* create() {
            return il2cpp::create_object<app::RemoveGenericIDRequest>(get_class());
        }
    } // namespace RemoveGenericIDRequest
} // namespace app::classes::types
