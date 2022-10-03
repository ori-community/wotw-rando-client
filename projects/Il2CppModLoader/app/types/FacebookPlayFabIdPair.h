#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FacebookPlayFabIdPair {
        namespace {
            app::FacebookPlayFabIdPair__Class* type_info_ref = nullptr;
        }
        app::FacebookPlayFabIdPair__Class** type_info = &type_info_ref;
        inline app::FacebookPlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::FacebookPlayFabIdPair__Class>(type_info, "PlayFab.ClientModels", "FacebookPlayFabIdPair");
        }
        inline app::FacebookPlayFabIdPair* create() {
            return il2cpp::create_object<app::FacebookPlayFabIdPair>(get_class());
        }
        inline app::FacebookPlayFabIdPair__Array* create_array(int size) {
            return il2cpp::array_new<app::FacebookPlayFabIdPair__Array>(get_class(), size);
        }
    } // namespace FacebookPlayFabIdPair
} // namespace app::classes::types
