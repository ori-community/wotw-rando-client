#pragma once
#include <Modloader/app/structs/ModifyItemUsesRequest.h>
#include <Modloader/app/structs/ModifyItemUsesRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ModifyItemUsesRequest {
        inline app::ModifyItemUsesRequest__Class** type_info() {
            static app::ModifyItemUsesRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ModifyItemUsesRequest__Class**)(modloader::win::memory::resolve_rva(0x0475F1F8));
            }
            return cache;
        }
        inline app::ModifyItemUsesRequest__Class* get_class() {
            return il2cpp::get_class<app::ModifyItemUsesRequest__Class>(type_info(), "PlayFab.ServerModels", "ModifyItemUsesRequest");
        }
        inline app::ModifyItemUsesRequest* create() {
            return il2cpp::create_object<app::ModifyItemUsesRequest>(get_class());
        }
    } // namespace ModifyItemUsesRequest
} // namespace app::classes::types
