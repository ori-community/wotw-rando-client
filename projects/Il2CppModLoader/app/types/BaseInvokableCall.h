#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaseInvokableCall {
        inline app::BaseInvokableCall__Class** type_info = (app::BaseInvokableCall__Class**)(modloader::win::memory::resolve_rva(0x0473FEF8));
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
