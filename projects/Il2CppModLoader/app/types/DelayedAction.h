#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DelayedAction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DelayedAction__Class** type_info;
        inline app::DelayedAction__Class* get_class() {
            return il2cpp::get_class<app::DelayedAction__Class>(type_info, "", "DelayedAction");
        }
        inline app::DelayedAction* create() {
            return il2cpp::create_object<app::DelayedAction>(get_class());
        }
        inline app::DelayedAction__Array* create_array(int size) {
            return il2cpp::array_new<app::DelayedAction__Array>(get_class(), size);
        }
        inline app::DelayedAction__Array* create_array(const std::vector<app::DelayedAction*>& items) {
            return il2cpp::array_new<app::DelayedAction__Array>(get_class(), items);
        }
    } // namespace DelayedAction
} // namespace app::classes::types
