#pragma once
#include <Modloader/app/structs/Currency__Enum.h>
#include <Modloader/app/structs/Currency__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Currency__Enum {
        inline app::Currency__Enum__Class** type_info() {
            static app::Currency__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Currency__Enum__Class**)(modloader::win::memory::resolve_rva(0x04730518));
            }
            return cache;
        }
        inline app::Currency__Enum__Class* get_class() {
            return il2cpp::get_class<app::Currency__Enum__Class>(type_info(), "PlayFab.ClientModels", "Currency");
        }
        inline app::Currency__Enum* create() {
            return il2cpp::create_object<app::Currency__Enum>(get_class());
        }
    } // namespace Currency__Enum
} // namespace app::classes::types
