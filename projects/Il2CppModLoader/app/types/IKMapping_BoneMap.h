#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKMapping_BoneMap {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKMapping_BoneMap__Class** type_info;
        inline app::IKMapping_BoneMap__Class* get_class() {
            return il2cpp::get_nested_class<app::IKMapping_BoneMap__Class>(type_info, "RootMotion.FinalIK", "IKMapping", "BoneMap");
        }
        inline app::IKMapping_BoneMap* create() {
            return il2cpp::create_object<app::IKMapping_BoneMap>(get_class());
        }
        inline app::IKMapping_BoneMap__Array* create_array(int size) {
            return il2cpp::array_new<app::IKMapping_BoneMap__Array>(get_class(), size);
        }
        inline app::IKMapping_BoneMap__Array* create_array(const std::vector<app::IKMapping_BoneMap*>& items) {
            return il2cpp::array_new<app::IKMapping_BoneMap__Array>(get_class(), items);
        }
    } // namespace IKMapping_BoneMap
} // namespace app::classes::types
