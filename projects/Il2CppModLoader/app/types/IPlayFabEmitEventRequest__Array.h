#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPlayFabEmitEventRequest__Array {
        namespace {
            app::IPlayFabEmitEventRequest__Array__Class* type_info_ref = nullptr;
        }
        app::IPlayFabEmitEventRequest__Array__Class** type_info = &type_info_ref;
        inline app::IPlayFabEmitEventRequest__Array__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabEmitEventRequest__Array__Class>(type_info, "PlayFab", "IPlayFabEmitEventRequest[]");
        }
        inline app::IPlayFabEmitEventRequest__Array* create() {
            return il2cpp::create_object<app::IPlayFabEmitEventRequest__Array>(get_class());
        }
    } // namespace IPlayFabEmitEventRequest__Array
} // namespace app::classes::types
