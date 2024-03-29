#pragma once
#include <Modloader/app/structs/AddGenericIDResult.h>
#include <Modloader/app/structs/AddGenericIDResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddGenericIDResult {
        inline app::AddGenericIDResult__Class** type_info() {
            static app::AddGenericIDResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddGenericIDResult__Class**)(modloader::win::memory::resolve_rva(0x0472A748));
            }
            return cache;
        }
        inline app::AddGenericIDResult__Class* get_class() {
            return il2cpp::get_class<app::AddGenericIDResult__Class>(type_info(), "PlayFab.ClientModels", "AddGenericIDResult");
        }
        inline app::AddGenericIDResult* create() {
            return il2cpp::create_object<app::AddGenericIDResult>(get_class());
        }
    } // namespace AddGenericIDResult
} // namespace app::classes::types
