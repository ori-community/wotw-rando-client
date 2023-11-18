#pragma once
#include <Modloader/app/structs/EmitEventResult__Enum.h>
#include <Modloader/app/structs/EmitEventResult__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EmitEventResult__Enum {
        inline app::EmitEventResult__Enum__Class** type_info() {
            static app::EmitEventResult__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EmitEventResult__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EmitEventResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::EmitEventResult__Enum__Class>(type_info(), "PlayFab", "EmitEventResult");
        }
        inline app::EmitEventResult__Enum* create() {
            return il2cpp::create_object<app::EmitEventResult__Enum>(get_class());
        }
    } // namespace EmitEventResult__Enum
} // namespace app::classes::types
