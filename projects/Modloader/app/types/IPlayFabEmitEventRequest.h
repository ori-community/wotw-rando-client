#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPlayFabEmitEventRequest {
        namespace {
            inline app::IPlayFabEmitEventRequest__Class* type_info_ref = nullptr;
        }
        inline app::IPlayFabEmitEventRequest__Class** type_info = &type_info_ref;
        inline app::IPlayFabEmitEventRequest__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabEmitEventRequest__Class>(type_info, "PlayFab", "IPlayFabEmitEventRequest");
        }
        inline app::IPlayFabEmitEventRequest__Array* create_array(int size) {
            return il2cpp::array_new<app::IPlayFabEmitEventRequest__Array>(get_class(), size);
        }
        inline app::IPlayFabEmitEventRequest__Array* create_array(const std::vector<app::IPlayFabEmitEventRequest*>& items) {
            return il2cpp::array_new<app::IPlayFabEmitEventRequest__Array>(get_class(), items);
        }
    } // namespace IPlayFabEmitEventRequest
} // namespace app::classes::types
