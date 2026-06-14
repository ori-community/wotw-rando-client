#pragma once
#include <Modloader/app/structs/LogStatement_3__Array.h>
#include <Modloader/app/structs/LogStatement_3__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LogStatement_3__Array {
        inline app::LogStatement_3__Array__Class** type_info() {
            static app::LogStatement_3__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LogStatement_3__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LogStatement_3__Array__Class* get_class() {
            return il2cpp::get_class<app::LogStatement_3__Array__Class>(type_info(), "PlayFab.PlayStreamModels", "LogStatement[]");
        }
        inline app::LogStatement_3__Array* create() {
            return il2cpp::create_object<app::LogStatement_3__Array>(get_class());
        }
    } // namespace LogStatement_3__Array
} // namespace app::classes::types
