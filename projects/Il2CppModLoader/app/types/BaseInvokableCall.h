#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseInvokableCall {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BaseInvokableCall__Class** type_info;
        inline app::BaseInvokableCall__Class* get_class() {
            return il2cpp::get_class<app::BaseInvokableCall__Class>(type_info, "UnityEngine.Events", "BaseInvokableCall");
        }
        inline app::BaseInvokableCall* create() {
            return il2cpp::create_object<app::BaseInvokableCall>(get_class());
        }
        inline app::BaseInvokableCall__Array* create_array(int size) {
            return il2cpp::array_new<app::BaseInvokableCall__Array>(get_class(), size);
        }
        inline app::BaseInvokableCall__Array* create_array(const std::vector<app::BaseInvokableCall*>& items) {
            return il2cpp::array_new<app::BaseInvokableCall__Array>(get_class(), items);
        }
    } // namespace BaseInvokableCall
} // namespace app::classes::types
