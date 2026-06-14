#pragma once
#include <Modloader/app/structs/RemoveGenericIDResult.h>
#include <Modloader/app/structs/RemoveGenericIDResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoveGenericIDResult {
        inline app::RemoveGenericIDResult__Class** type_info() {
            static app::RemoveGenericIDResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemoveGenericIDResult__Class**)(modloader::win::memory::resolve_rva(0x04771760));
            }
            return cache;
        }
        inline app::RemoveGenericIDResult__Class* get_class() {
            return il2cpp::get_class<app::RemoveGenericIDResult__Class>(type_info(), "PlayFab.ClientModels", "RemoveGenericIDResult");
        }
        inline app::RemoveGenericIDResult* create() {
            return il2cpp::create_object<app::RemoveGenericIDResult>(get_class());
        }
    } // namespace RemoveGenericIDResult
} // namespace app::classes::types
