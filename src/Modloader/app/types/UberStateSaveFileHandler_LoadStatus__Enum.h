#pragma once
#include <Modloader/app/structs/UberStateSaveFileHandler_LoadStatus__Enum.h>
#include <Modloader/app/structs/UberStateSaveFileHandler_LoadStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateSaveFileHandler_LoadStatus__Enum {
        inline app::UberStateSaveFileHandler_LoadStatus__Enum__Class** type_info() {
            static app::UberStateSaveFileHandler_LoadStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateSaveFileHandler_LoadStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateSaveFileHandler_LoadStatus__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateSaveFileHandler_LoadStatus__Enum__Class>(type_info(), "Moon", "UberStateSaveFileHandler", "LoadStatus");
        }
        inline app::UberStateSaveFileHandler_LoadStatus__Enum* create() {
            return il2cpp::create_object<app::UberStateSaveFileHandler_LoadStatus__Enum>(get_class());
        }
    } // namespace UberStateSaveFileHandler_LoadStatus__Enum
} // namespace app::classes::types
