#pragma once
#include <Modloader/app/structs/QosServer__Array.h>
#include <Modloader/app/structs/QosServer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QosServer__Array {
        inline app::QosServer__Array__Class** type_info() {
            static app::QosServer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QosServer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QosServer__Array__Class* get_class() {
            return il2cpp::get_class<app::QosServer__Array__Class>(type_info(), "PlayFab.MultiplayerModels", "QosServer[]");
        }
        inline app::QosServer__Array* create() {
            return il2cpp::create_object<app::QosServer__Array>(get_class());
        }
    } // namespace QosServer__Array
} // namespace app::classes::types
