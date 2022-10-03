#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttributePSVIInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AttributePSVIInfo__Class** type_info;
        inline app::AttributePSVIInfo__Class* get_class() {
            return il2cpp::get_class<app::AttributePSVIInfo__Class>(type_info, "System.Xml", "AttributePSVIInfo");
        }
        inline app::AttributePSVIInfo* create() {
            return il2cpp::create_object<app::AttributePSVIInfo>(get_class());
        }
        inline app::AttributePSVIInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::AttributePSVIInfo__Array>(get_class(), size);
        }
    } // namespace AttributePSVIInfo
} // namespace app::classes::types
