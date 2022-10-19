#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StateOverrideSystem_IStateOverrideEntry__Array {
        namespace {
            inline app::StateOverrideSystem_IStateOverrideEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::StateOverrideSystem_IStateOverrideEntry__Array__Class** type_info = &type_info_ref;
        inline app::StateOverrideSystem_IStateOverrideEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::StateOverrideSystem_IStateOverrideEntry__Array__Class>(type_info, "", "StateOverrideSystem+IStateOverrideEntry[]");
        }
        inline app::StateOverrideSystem_IStateOverrideEntry__Array* create() {
            return il2cpp::create_object<app::StateOverrideSystem_IStateOverrideEntry__Array>(get_class());
        }
    } // namespace StateOverrideSystem_IStateOverrideEntry__Array
} // namespace app::classes::types
