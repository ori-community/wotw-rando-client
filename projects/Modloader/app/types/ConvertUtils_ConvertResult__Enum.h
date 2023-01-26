#pragma once
#include <Modloader/app/structs/ConvertUtils_ConvertResult__Enum.h>
#include <Modloader/app/structs/ConvertUtils_ConvertResult__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConvertUtils_ConvertResult__Enum {
        inline app::ConvertUtils_ConvertResult__Enum__Class** type_info() {
            static app::ConvertUtils_ConvertResult__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConvertUtils_ConvertResult__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConvertUtils_ConvertResult__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ConvertUtils_ConvertResult__Enum__Class>(type_info(), "Newtonsoft.Json.Utilities", "ConvertUtils", "ConvertResult");
        }
        inline app::ConvertUtils_ConvertResult__Enum* create() {
            return il2cpp::create_object<app::ConvertUtils_ConvertResult__Enum>(get_class());
        }
    } // namespace ConvertUtils_ConvertResult__Enum
} // namespace app::classes::types
