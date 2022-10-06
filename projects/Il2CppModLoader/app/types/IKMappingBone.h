#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKMappingBone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKMappingBone__Class** type_info;
        inline app::IKMappingBone__Class* get_class() {
            return il2cpp::get_class<app::IKMappingBone__Class>(type_info, "RootMotion.FinalIK", "IKMappingBone");
        }
        inline app::IKMappingBone* create() {
            return il2cpp::create_object<app::IKMappingBone>(get_class());
        }
        inline app::IKMappingBone__Array* create_array(int size) {
            return il2cpp::array_new<app::IKMappingBone__Array>(get_class(), size);
        }
        inline app::IKMappingBone__Array* create_array(const std::vector<app::IKMappingBone*>& items) {
            return il2cpp::array_new<app::IKMappingBone__Array>(get_class(), items);
        }
    } // namespace IKMappingBone
} // namespace app::classes::types
