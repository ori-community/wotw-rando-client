#pragma once
#include <Modloader/app/structs/IPlayFabEmitEventRequest__Array.h>
#include <Modloader/app/structs/IPlayFabEmitEventRequest__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPlayFabEmitEventRequest__Array {
        inline app::IPlayFabEmitEventRequest__Array__Class** type_info() {
            static app::IPlayFabEmitEventRequest__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IPlayFabEmitEventRequest__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IPlayFabEmitEventRequest__Array__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabEmitEventRequest__Array__Class>(type_info(), "PlayFab", "IPlayFabEmitEventRequest[]");
        }
        inline app::IPlayFabEmitEventRequest__Array* create() {
            return il2cpp::create_object<app::IPlayFabEmitEventRequest__Array>(get_class());
        }
    } // namespace IPlayFabEmitEventRequest__Array
} // namespace app::classes::types
