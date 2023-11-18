#pragma once
#include <Modloader/app/structs/TypeLibImportClassAttribute.h>
#include <Modloader/app/structs/TypeLibImportClassAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeLibImportClassAttribute {
        inline app::TypeLibImportClassAttribute__Class** type_info() {
            static app::TypeLibImportClassAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeLibImportClassAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeLibImportClassAttribute__Class* get_class() {
            return il2cpp::get_class<app::TypeLibImportClassAttribute__Class>(type_info(), "System.Runtime.InteropServices", "TypeLibImportClassAttribute");
        }
        inline app::TypeLibImportClassAttribute* create() {
            return il2cpp::create_object<app::TypeLibImportClassAttribute>(get_class());
        }
    } // namespace TypeLibImportClassAttribute
} // namespace app::classes::types
