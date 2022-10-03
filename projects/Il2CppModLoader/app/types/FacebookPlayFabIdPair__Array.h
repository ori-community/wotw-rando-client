#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FacebookPlayFabIdPair__Array {
        namespace {
            app::FacebookPlayFabIdPair__Array__Class* type_info_ref = nullptr;
        }
        app::FacebookPlayFabIdPair__Array__Class** type_info = &type_info_ref;
        inline app::FacebookPlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::FacebookPlayFabIdPair__Array__Class>(type_info, "PlayFab.ClientModels", "FacebookPlayFabIdPair[]");
        }
        inline app::FacebookPlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::FacebookPlayFabIdPair__Array>(get_class());
        }
    } // namespace FacebookPlayFabIdPair__Array
} // namespace app::classes::types
