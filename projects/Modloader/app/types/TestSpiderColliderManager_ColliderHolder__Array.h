#pragma once
#include <Modloader/app/structs/TestSpiderColliderManager_ColliderHolder__Array.h>
#include <Modloader/app/structs/TestSpiderColliderManager_ColliderHolder__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TestSpiderColliderManager_ColliderHolder__Array {
        inline app::TestSpiderColliderManager_ColliderHolder__Array__Class** type_info() {
            static app::TestSpiderColliderManager_ColliderHolder__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TestSpiderColliderManager_ColliderHolder__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TestSpiderColliderManager_ColliderHolder__Array__Class* get_class() {
            return il2cpp::get_class<app::TestSpiderColliderManager_ColliderHolder__Array__Class>(type_info(), "", "TestSpiderColliderManager+ColliderHolder[]");
        }
        inline app::TestSpiderColliderManager_ColliderHolder__Array* create() {
            return il2cpp::create_object<app::TestSpiderColliderManager_ColliderHolder__Array>(get_class());
        }
    } // namespace TestSpiderColliderManager_ColliderHolder__Array
} // namespace app::classes::types
