#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TestSpiderColliderManager_ColliderHolder {
        namespace {
            inline app::TestSpiderColliderManager_ColliderHolder__Class* type_info_ref = nullptr;
        }
        inline app::TestSpiderColliderManager_ColliderHolder__Class** type_info = &type_info_ref;
        inline app::TestSpiderColliderManager_ColliderHolder__Class* get_class() {
            return il2cpp::get_nested_class<app::TestSpiderColliderManager_ColliderHolder__Class>(type_info, "", "TestSpiderColliderManager", "ColliderHolder");
        }
        inline app::TestSpiderColliderManager_ColliderHolder* create() {
            return il2cpp::create_object<app::TestSpiderColliderManager_ColliderHolder>(get_class());
        }
        inline app::TestSpiderColliderManager_ColliderHolder__Array* create_array(int size) {
            return il2cpp::array_new<app::TestSpiderColliderManager_ColliderHolder__Array>(get_class(), size);
        }
        inline app::TestSpiderColliderManager_ColliderHolder__Array* create_array(const std::vector<app::TestSpiderColliderManager_ColliderHolder*>& items) {
            return il2cpp::array_new<app::TestSpiderColliderManager_ColliderHolder__Array>(get_class(), items);
        }
    } // namespace TestSpiderColliderManager_ColliderHolder
} // namespace app::classes::types
