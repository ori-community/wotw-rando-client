#pragma once
#include <Modloader/app/structs/TypeNames_ATypeName.h>
#include <Modloader/app/structs/TypeNames_ATypeName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeNames_ATypeName {
        inline app::TypeNames_ATypeName__Class** type_info() {
            static app::TypeNames_ATypeName__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeNames_ATypeName__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeNames_ATypeName__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeNames_ATypeName__Class>(type_info(), "System", "TypeNames", "ATypeName");
        }
        inline app::TypeNames_ATypeName* create() {
            return il2cpp::create_object<app::TypeNames_ATypeName>(get_class());
        }
    } // namespace TypeNames_ATypeName
} // namespace app::classes::types
