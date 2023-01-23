#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RemoveGenericIDResult__Class.h>
#include <Modloader/app/structs/RemoveGenericIDResult.h>

namespace app::classes::types {
    namespace RemoveGenericIDResult {
        inline app::RemoveGenericIDResult__Class** type_info = (app::RemoveGenericIDResult__Class**)(modloader::win::memory::resolve_rva(0x04771760));
        inline app::RemoveGenericIDResult__Class* get_class() {
            return il2cpp::get_class<app::RemoveGenericIDResult__Class>(type_info, "PlayFab.ClientModels", "RemoveGenericIDResult");
        }
        inline app::RemoveGenericIDResult* create() {
            return il2cpp::create_object<app::RemoveGenericIDResult>(get_class());
        }
    } // namespace RemoveGenericIDResult
} // namespace app::classes::types
