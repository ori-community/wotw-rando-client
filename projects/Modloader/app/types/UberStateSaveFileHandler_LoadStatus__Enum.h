#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateSaveFileHandler_LoadStatus__Enum {
        namespace {
            inline app::UberStateSaveFileHandler_LoadStatus__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UberStateSaveFileHandler_LoadStatus__Enum__Class** type_info = &type_info_ref;
        inline app::UberStateSaveFileHandler_LoadStatus__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateSaveFileHandler_LoadStatus__Enum__Class>(type_info, "Moon", "UberStateSaveFileHandler", "LoadStatus");
        }
        inline app::UberStateSaveFileHandler_LoadStatus__Enum* create() {
            return il2cpp::create_object<app::UberStateSaveFileHandler_LoadStatus__Enum>(get_class());
        }
    } // namespace UberStateSaveFileHandler_LoadStatus__Enum
} // namespace app::classes::types
