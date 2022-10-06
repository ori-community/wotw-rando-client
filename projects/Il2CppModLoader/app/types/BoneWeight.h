#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BoneWeight {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BoneWeight__Class** type_info;
        inline app::BoneWeight__Class* get_class() {
            return il2cpp::get_class<app::BoneWeight__Class>(type_info, "UnityEngine", "BoneWeight");
        }
        inline app::BoneWeight* create() {
            return il2cpp::create_object<app::BoneWeight>(get_class());
        }
        inline app::BoneWeight__Boxed* box(app::BoneWeight value) {
            return il2cpp::box_value<app::BoneWeight__Boxed>(get_class(), value);
        }
        inline app::BoneWeight__Array* create_array(int size) {
            return il2cpp::array_new<app::BoneWeight__Array>(get_class(), size);
        }
        inline app::BoneWeight__Array* create_array(const std::vector<app::BoneWeight__Boxed>& items) {
            return il2cpp::array_new<app::BoneWeight__Array>(get_class(), items);
        }
    } // namespace BoneWeight
} // namespace app::classes::types
