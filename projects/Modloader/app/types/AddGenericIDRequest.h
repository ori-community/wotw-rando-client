#pragma once
#include <Modloader/app/structs/AddGenericIDRequest.h>
#include <Modloader/app/structs/AddGenericIDRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddGenericIDRequest {
        inline app::AddGenericIDRequest__Class** type_info() {
            static app::AddGenericIDRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddGenericIDRequest__Class**)(modloader::win::memory::resolve_rva(0x04781768));
            }
            return cache;
        }
        inline app::AddGenericIDRequest__Class* get_class() {
            return il2cpp::get_class<app::AddGenericIDRequest__Class>(type_info(), "PlayFab.ClientModels", "AddGenericIDRequest");
        }
        inline app::AddGenericIDRequest* create() {
            return il2cpp::create_object<app::AddGenericIDRequest>(get_class());
        }
    } // namespace AddGenericIDRequest
} // namespace app::classes::types
