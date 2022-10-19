#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetupStateModifierData__Array {
        namespace {
            inline app::SetupStateModifierData__Array__Class* type_info_ref = nullptr;
        }
        inline app::SetupStateModifierData__Array__Class** type_info = &type_info_ref;
        inline app::SetupStateModifierData__Array__Class* get_class() {
            return il2cpp::get_class<app::SetupStateModifierData__Array__Class>(type_info, "", "SetupStateModifierData[]");
        }
        inline app::SetupStateModifierData__Array* create() {
            return il2cpp::create_object<app::SetupStateModifierData__Array>(get_class());
        }
    } // namespace SetupStateModifierData__Array
} // namespace app::classes::types
