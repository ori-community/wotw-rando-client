#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericPlayFabIdPair {
        namespace {
            app::GenericPlayFabIdPair__Class* type_info_ref = nullptr;
        }
        app::GenericPlayFabIdPair__Class** type_info = &type_info_ref;
        inline app::GenericPlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::GenericPlayFabIdPair__Class>(type_info, "PlayFab.ClientModels", "GenericPlayFabIdPair");
        }
        inline app::GenericPlayFabIdPair* create() {
            return il2cpp::create_object<app::GenericPlayFabIdPair>(get_class());
        }
        inline app::GenericPlayFabIdPair__Array* create_array(int size) {
            return il2cpp::array_new<app::GenericPlayFabIdPair__Array>(get_class(), size);
        }
    } // namespace GenericPlayFabIdPair
} // namespace app::classes::types
