#pragma once
#include <Modloader/app/structs/StatScreenDisplayFilter__Array.h>
#include <Modloader/app/structs/StatScreenDisplayFilter__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatScreenDisplayFilter__Array {
        inline app::StatScreenDisplayFilter__Array__Class** type_info() {
            static app::StatScreenDisplayFilter__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatScreenDisplayFilter__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatScreenDisplayFilter__Array__Class* get_class() {
            return il2cpp::get_class<app::StatScreenDisplayFilter__Array__Class>(type_info(), "", "StatScreenDisplayFilter[]");
        }
        inline app::StatScreenDisplayFilter__Array* create() {
            return il2cpp::create_object<app::StatScreenDisplayFilter__Array>(get_class());
        }
    } // namespace StatScreenDisplayFilter__Array
} // namespace app::classes::types
