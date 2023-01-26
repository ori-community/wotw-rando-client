#pragma once
#include <Modloader/app/structs/TypedObject_DecimalStruct.h>
#include <Modloader/app/structs/TypedObject_DecimalStruct__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypedObject_DecimalStruct {
        inline app::TypedObject_DecimalStruct__Class** type_info() {
            static app::TypedObject_DecimalStruct__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypedObject_DecimalStruct__Class**)(modloader::win::memory::resolve_rva(0x04750268));
            }
            return cache;
        }
        inline app::TypedObject_DecimalStruct__Class* get_class() {
            return il2cpp::get_nested_class<app::TypedObject_DecimalStruct__Class>(type_info(), "System.Xml.Schema", "TypedObject", "DecimalStruct");
        }
        inline app::TypedObject_DecimalStruct* create() {
            return il2cpp::create_object<app::TypedObject_DecimalStruct>(get_class());
        }
    } // namespace TypedObject_DecimalStruct
} // namespace app::classes::types
