#pragma once
#include <Modloader/app/structs/IPlayFabEmitEventRequest.h>
#include <Modloader/app/structs/IPlayFabEmitEventRequest__Array.h>
#include <Modloader/app/structs/IPlayFabEmitEventRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPlayFabEmitEventRequest {
        inline app::IPlayFabEmitEventRequest__Class** type_info() {
            static app::IPlayFabEmitEventRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IPlayFabEmitEventRequest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IPlayFabEmitEventRequest__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabEmitEventRequest__Class>(type_info(), "PlayFab", "IPlayFabEmitEventRequest");
        }
        inline app::IPlayFabEmitEventRequest__Array* create_array(int size) {
            return il2cpp::array_new<app::IPlayFabEmitEventRequest__Array>(get_class(), size);
        }
        inline app::IPlayFabEmitEventRequest__Array* create_array(const std::vector<app::IPlayFabEmitEventRequest*>& items) {
            return il2cpp::array_new<app::IPlayFabEmitEventRequest__Array>(get_class(), items);
        }
    } // namespace IPlayFabEmitEventRequest
} // namespace app::classes::types
