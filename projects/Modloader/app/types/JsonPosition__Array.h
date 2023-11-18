#pragma once
#include <Modloader/app/structs/JsonPosition__Array.h>
#include <Modloader/app/structs/JsonPosition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonPosition__Array {
        inline app::JsonPosition__Array__Class** type_info() {
            static app::JsonPosition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JsonPosition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JsonPosition__Array__Class* get_class() {
            return il2cpp::get_class<app::JsonPosition__Array__Class>(type_info(), "Newtonsoft.Json", "JsonPosition[]");
        }
        inline app::JsonPosition__Array* create() {
            return il2cpp::create_object<app::JsonPosition__Array>(get_class());
        }
    } // namespace JsonPosition__Array
} // namespace app::classes::types
