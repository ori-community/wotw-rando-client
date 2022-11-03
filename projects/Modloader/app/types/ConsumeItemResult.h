#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConsumeItemResult {
        inline app::ConsumeItemResult__Class** type_info = (app::ConsumeItemResult__Class**)(modloader::win::memory::resolve_rva(0x0472AF78));
        inline app::ConsumeItemResult__Class* get_class() {
            return il2cpp::get_class<app::ConsumeItemResult__Class>(type_info, "PlayFab.ClientModels", "ConsumeItemResult");
        }
        inline app::ConsumeItemResult* create() {
            return il2cpp::create_object<app::ConsumeItemResult>(get_class());
        }
    } // namespace ConsumeItemResult
} // namespace app::classes::types
