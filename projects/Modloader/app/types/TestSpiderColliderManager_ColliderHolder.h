#pragma once
#include <Modloader/app/structs/TestSpiderColliderManager_ColliderHolder.h>
#include <Modloader/app/structs/TestSpiderColliderManager_ColliderHolder__Array.h>
#include <Modloader/app/structs/TestSpiderColliderManager_ColliderHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TestSpiderColliderManager_ColliderHolder {
        inline app::TestSpiderColliderManager_ColliderHolder__Class** type_info() {
            static app::TestSpiderColliderManager_ColliderHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TestSpiderColliderManager_ColliderHolder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TestSpiderColliderManager_ColliderHolder__Class* get_class() {
            return il2cpp::get_nested_class<app::TestSpiderColliderManager_ColliderHolder__Class>(type_info(), "", "TestSpiderColliderManager", "ColliderHolder");
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
