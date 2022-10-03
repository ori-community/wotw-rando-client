#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttributePSVIInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AttributePSVIInfo__Array__Class** type_info;
        inline app::AttributePSVIInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::AttributePSVIInfo__Array__Class>(type_info, "System.Xml", "AttributePSVIInfo[]");
        }
        inline app::AttributePSVIInfo__Array* create() {
            return il2cpp::create_object<app::AttributePSVIInfo__Array>(get_class());
        }
    } // namespace AttributePSVIInfo__Array
} // namespace app::classes::types
