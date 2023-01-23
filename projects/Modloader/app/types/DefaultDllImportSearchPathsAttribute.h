#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DefaultDllImportSearchPathsAttribute__Class.h>
#include <Modloader/app/structs/DefaultDllImportSearchPathsAttribute.h>

namespace app::classes::types {
    namespace DefaultDllImportSearchPathsAttribute {
        namespace {
            inline app::DefaultDllImportSearchPathsAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DefaultDllImportSearchPathsAttribute__Class** type_info = &type_info_ref;
        inline app::DefaultDllImportSearchPathsAttribute__Class* get_class() {
            return il2cpp::get_class<app::DefaultDllImportSearchPathsAttribute__Class>(type_info, "System.Runtime.InteropServices", "DefaultDllImportSearchPathsAttribute");
        }
        inline app::DefaultDllImportSearchPathsAttribute* create() {
            return il2cpp::create_object<app::DefaultDllImportSearchPathsAttribute>(get_class());
        }
    } // namespace DefaultDllImportSearchPathsAttribute
} // namespace app::classes::types
