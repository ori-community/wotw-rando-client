#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericPlayFabIdPair__Array {
        namespace {
            app::GenericPlayFabIdPair__Array__Class* type_info_ref = nullptr;
        }
        app::GenericPlayFabIdPair__Array__Class** type_info = &type_info_ref;
        inline app::GenericPlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::GenericPlayFabIdPair__Array__Class>(type_info, "PlayFab.ClientModels", "GenericPlayFabIdPair[]");
        }
        inline app::GenericPlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::GenericPlayFabIdPair__Array>(get_class());
        }
    } // namespace GenericPlayFabIdPair__Array
} // namespace app::classes::types
