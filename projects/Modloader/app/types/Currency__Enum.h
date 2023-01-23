#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Currency__Enum__Class.h>
#include <Modloader/app/structs/Currency__Enum.h>

namespace app::classes::types {
    namespace Currency__Enum {
        inline app::Currency__Enum__Class** type_info = (app::Currency__Enum__Class**)(modloader::win::memory::resolve_rva(0x04730518));
        inline app::Currency__Enum__Class* get_class() {
            return il2cpp::get_class<app::Currency__Enum__Class>(type_info, "PlayFab.ClientModels", "Currency");
        }
        inline app::Currency__Enum* create() {
            return il2cpp::create_object<app::Currency__Enum>(get_class());
        }
    } // namespace Currency__Enum
} // namespace app::classes::types
