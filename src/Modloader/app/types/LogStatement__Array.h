#pragma once
#include <Modloader/app/structs/LogStatement__Array.h>
#include <Modloader/app/structs/LogStatement__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LogStatement__Array {
        inline app::LogStatement__Array__Class** type_info() {
            static app::LogStatement__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LogStatement__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LogStatement__Array__Class* get_class() {
            return il2cpp::get_class<app::LogStatement__Array__Class>(type_info(), "PlayFab.ClientModels", "LogStatement[]");
        }
        inline app::LogStatement__Array* create() {
            return il2cpp::create_object<app::LogStatement__Array>(get_class());
        }
    } // namespace LogStatement__Array
} // namespace app::classes::types
