#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActionSequence {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActionSequence__Class** type_info;
        inline app::ActionSequence__Class* get_class() {
            return il2cpp::get_class<app::ActionSequence__Class>(type_info, "", "ActionSequence");
        }
        inline app::ActionSequence* create() {
            return il2cpp::create_object<app::ActionSequence>(get_class());
        }
        inline app::ActionSequence__Array* create_array(int size) {
            return il2cpp::array_new<app::ActionSequence__Array>(get_class(), size);
        }
        inline app::ActionSequence__Array* create_array(const std::vector<app::ActionSequence*>& items) {
            return il2cpp::array_new<app::ActionSequence__Array>(get_class(), items);
        }
    } // namespace ActionSequence
} // namespace app::classes::types
