#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TypeLibImportClassAttribute__Class.h>
#include <Modloader/app/structs/TypeLibImportClassAttribute.h>

namespace app::classes::types {
    namespace TypeLibImportClassAttribute {
        namespace {
            inline app::TypeLibImportClassAttribute__Class* type_info_ref = nullptr;
        }
        inline app::TypeLibImportClassAttribute__Class** type_info = &type_info_ref;
        inline app::TypeLibImportClassAttribute__Class* get_class() {
            return il2cpp::get_class<app::TypeLibImportClassAttribute__Class>(type_info, "System.Runtime.InteropServices", "TypeLibImportClassAttribute");
        }
        inline app::TypeLibImportClassAttribute* create() {
            return il2cpp::create_object<app::TypeLibImportClassAttribute>(get_class());
        }
    } // namespace TypeLibImportClassAttribute
} // namespace app::classes::types
