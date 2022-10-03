#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PSNAccountPlayFabIdPair_1 {
        namespace {
            app::PSNAccountPlayFabIdPair_1__Class* type_info_ref = nullptr;
        }
        app::PSNAccountPlayFabIdPair_1__Class** type_info = &type_info_ref;
        inline app::PSNAccountPlayFabIdPair_1__Class* get_class() {
            return il2cpp::get_class<app::PSNAccountPlayFabIdPair_1__Class>(type_info, "PlayFab.ServerModels", "PSNAccountPlayFabIdPair");
        }
        inline app::PSNAccountPlayFabIdPair_1* create() {
            return il2cpp::create_object<app::PSNAccountPlayFabIdPair_1>(get_class());
        }
        inline app::PSNAccountPlayFabIdPair_1__Array* create_array(int size) {
            return il2cpp::array_new<app::PSNAccountPlayFabIdPair_1__Array>(get_class(), size);
        }
    } // namespace PSNAccountPlayFabIdPair_1
} // namespace app::classes::types
