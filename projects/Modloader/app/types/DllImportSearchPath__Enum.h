#pragma once
#include <Modloader/app/structs/DllImportSearchPath__Enum.h>
#include <Modloader/app/structs/DllImportSearchPath__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DllImportSearchPath__Enum {
        inline app::DllImportSearchPath__Enum__Class** type_info() {
            static app::DllImportSearchPath__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DllImportSearchPath__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DllImportSearchPath__Enum__Class* get_class() {
            return il2cpp::get_class<app::DllImportSearchPath__Enum__Class>(type_info(), "System.Runtime.InteropServices", "DllImportSearchPath");
        }
        inline app::DllImportSearchPath__Enum* create() {
            return il2cpp::create_object<app::DllImportSearchPath__Enum>(get_class());
        }
    } // namespace DllImportSearchPath__Enum
} // namespace app::classes::types
