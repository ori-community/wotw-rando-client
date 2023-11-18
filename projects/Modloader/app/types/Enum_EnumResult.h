#pragma once
#include <Modloader/app/structs/Enum_EnumResult.h>
#include <Modloader/app/structs/Enum_EnumResult__Boxed.h>
#include <Modloader/app/structs/Enum_EnumResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Enum_EnumResult {
        inline app::Enum_EnumResult__Class** type_info() {
            static app::Enum_EnumResult__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Enum_EnumResult__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Enum_EnumResult__Class* get_class() {
            return il2cpp::get_nested_class<app::Enum_EnumResult__Class>(type_info(), "System", "Enum", "EnumResult");
        }
        inline app::Enum_EnumResult* create() {
            return il2cpp::create_object<app::Enum_EnumResult>(get_class());
        }
        inline app::Enum_EnumResult__Boxed* box(app::Enum_EnumResult value) {
            return il2cpp::box_value<app::Enum_EnumResult__Boxed>(get_class(), value);
        }
    } // namespace Enum_EnumResult
} // namespace app::classes::types
