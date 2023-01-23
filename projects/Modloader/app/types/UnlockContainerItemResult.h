#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnlockContainerItemResult__Class.h>
#include <Modloader/app/structs/UnlockContainerItemResult.h>

namespace app::classes::types {
    namespace UnlockContainerItemResult {
        inline app::UnlockContainerItemResult__Class** type_info = (app::UnlockContainerItemResult__Class**)(modloader::win::memory::resolve_rva(0x0476AE38));
        inline app::UnlockContainerItemResult__Class* get_class() {
            return il2cpp::get_class<app::UnlockContainerItemResult__Class>(type_info, "PlayFab.ClientModels", "UnlockContainerItemResult");
        }
        inline app::UnlockContainerItemResult* create() {
            return il2cpp::create_object<app::UnlockContainerItemResult>(get_class());
        }
    } // namespace UnlockContainerItemResult
} // namespace app::classes::types
