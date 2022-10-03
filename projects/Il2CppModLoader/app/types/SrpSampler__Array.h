#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SrpSampler__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SrpSampler__Array__Class** type_info;
        inline app::SrpSampler__Array__Class* get_class() {
            return il2cpp::get_class<app::SrpSampler__Array__Class>(type_info, "Moon.Rendering", "SrpSampler[]");
        }
        inline app::SrpSampler__Array* create() {
            return il2cpp::create_object<app::SrpSampler__Array>(get_class());
        }
    } // namespace SrpSampler__Array
} // namespace app::classes::types
