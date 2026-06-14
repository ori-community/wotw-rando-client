#pragma once
#include <Modloader/app/structs/StatSetting__Array.h>
#include <Modloader/app/structs/StatSetting__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatSetting__Array {
        inline app::StatSetting__Array__Class** type_info() {
            static app::StatSetting__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatSetting__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatSetting__Array__Class* get_class() {
            return il2cpp::get_class<app::StatSetting__Array__Class>(type_info(), "", "StatSetting[]");
        }
        inline app::StatSetting__Array* create() {
            return il2cpp::create_object<app::StatSetting__Array>(get_class());
        }
    } // namespace StatSetting__Array
} // namespace app::classes::types
