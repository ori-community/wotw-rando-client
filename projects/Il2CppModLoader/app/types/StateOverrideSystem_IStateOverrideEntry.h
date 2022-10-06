#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateOverrideSystem_IStateOverrideEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StateOverrideSystem_IStateOverrideEntry__Class** type_info;
        inline app::StateOverrideSystem_IStateOverrideEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::StateOverrideSystem_IStateOverrideEntry__Class>(type_info, "", "StateOverrideSystem", "IStateOverrideEntry");
        }
        inline app::StateOverrideSystem_IStateOverrideEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::StateOverrideSystem_IStateOverrideEntry__Array>(get_class(), size);
        }
        inline app::StateOverrideSystem_IStateOverrideEntry__Array* create_array(const std::vector<app::StateOverrideSystem_IStateOverrideEntry*>& items) {
            return il2cpp::array_new<app::StateOverrideSystem_IStateOverrideEntry__Array>(get_class(), items);
        }
    } // namespace StateOverrideSystem_IStateOverrideEntry
} // namespace app::classes::types
