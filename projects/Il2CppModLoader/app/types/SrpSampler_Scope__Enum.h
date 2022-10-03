#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SrpSampler_Scope__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SrpSampler_Scope__Enum__Class** type_info;
        inline app::SrpSampler_Scope__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SrpSampler_Scope__Enum__Class>(type_info, "Moon.Rendering", "SrpSampler", "Scope");
        }
        inline app::SrpSampler_Scope__Enum* create() {
            return il2cpp::create_object<app::SrpSampler_Scope__Enum>(get_class());
        }
    } // namespace SrpSampler_Scope__Enum
} // namespace app::classes::types
