#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurbulenceStateDefinition {
        namespace {
            inline app::TurbulenceStateDefinition__Class* type_info_ref = nullptr;
        }
        inline app::TurbulenceStateDefinition__Class** type_info = &type_info_ref;
        inline app::TurbulenceStateDefinition__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceStateDefinition__Class>(type_info, "", "TurbulenceStateDefinition");
        }
        inline app::TurbulenceStateDefinition* create() {
            return il2cpp::create_object<app::TurbulenceStateDefinition>(get_class());
        }
    } // namespace TurbulenceStateDefinition
} // namespace app::classes::types
