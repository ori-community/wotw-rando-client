#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ModifyItemUsesResult__Class.h>
#include <Modloader/app/structs/ModifyItemUsesResult.h>

namespace app::classes::types {
    namespace ModifyItemUsesResult {
        inline app::ModifyItemUsesResult__Class** type_info = (app::ModifyItemUsesResult__Class**)(modloader::win::memory::resolve_rva(0x04759E08));
        inline app::ModifyItemUsesResult__Class* get_class() {
            return il2cpp::get_class<app::ModifyItemUsesResult__Class>(type_info, "PlayFab.ServerModels", "ModifyItemUsesResult");
        }
        inline app::ModifyItemUsesResult* create() {
            return il2cpp::create_object<app::ModifyItemUsesResult>(get_class());
        }
    } // namespace ModifyItemUsesResult
} // namespace app::classes::types
