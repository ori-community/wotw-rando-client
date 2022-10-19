#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LianaEntity_TongueJoint {
        namespace {
            inline app::LianaEntity_TongueJoint__Class* type_info_ref = nullptr;
        }
        inline app::LianaEntity_TongueJoint__Class** type_info = &type_info_ref;
        inline app::LianaEntity_TongueJoint__Class* get_class() {
            return il2cpp::get_nested_class<app::LianaEntity_TongueJoint__Class>(type_info, "", "LianaEntity", "TongueJoint");
        }
        inline app::LianaEntity_TongueJoint* create() {
            return il2cpp::create_object<app::LianaEntity_TongueJoint>(get_class());
        }
        inline app::LianaEntity_TongueJoint__Boxed* box(app::LianaEntity_TongueJoint value) {
            return il2cpp::box_value<app::LianaEntity_TongueJoint__Boxed>(get_class(), value);
        }
        inline app::LianaEntity_TongueJoint__Array* create_array(int size) {
            return il2cpp::array_new<app::LianaEntity_TongueJoint__Array>(get_class(), size);
        }
        inline app::LianaEntity_TongueJoint__Array* create_array(const std::vector<app::LianaEntity_TongueJoint>& items) {
            return il2cpp::array_new<app::LianaEntity_TongueJoint__Array>(get_class(), items);
        }
    } // namespace LianaEntity_TongueJoint
} // namespace app::classes::types
