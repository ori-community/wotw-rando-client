#pragma once
#include <Modloader/app/structs/DefaultDllImportSearchPathsAttribute.h>
#include <Modloader/app/structs/DefaultDllImportSearchPathsAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultDllImportSearchPathsAttribute {
        inline app::DefaultDllImportSearchPathsAttribute__Class** type_info() {
            static app::DefaultDllImportSearchPathsAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DefaultDllImportSearchPathsAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DefaultDllImportSearchPathsAttribute__Class* get_class() {
            return il2cpp::get_class<app::DefaultDllImportSearchPathsAttribute__Class>(type_info(), "System.Runtime.InteropServices", "DefaultDllImportSearchPathsAttribute");
        }
        inline app::DefaultDllImportSearchPathsAttribute* create() {
            return il2cpp::create_object<app::DefaultDllImportSearchPathsAttribute>(get_class());
        }
    } // namespace DefaultDllImportSearchPathsAttribute
} // namespace app::classes::types
