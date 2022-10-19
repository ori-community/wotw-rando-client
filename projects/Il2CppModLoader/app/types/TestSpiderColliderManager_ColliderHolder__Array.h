#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TestSpiderColliderManager_ColliderHolder__Array {
        namespace {
            inline app::TestSpiderColliderManager_ColliderHolder__Array__Class* type_info_ref = nullptr;
        }
        inline app::TestSpiderColliderManager_ColliderHolder__Array__Class** type_info = &type_info_ref;
        inline app::TestSpiderColliderManager_ColliderHolder__Array__Class* get_class() {
            return il2cpp::get_class<app::TestSpiderColliderManager_ColliderHolder__Array__Class>(type_info, "", "TestSpiderColliderManager+ColliderHolder[]");
        }
        inline app::TestSpiderColliderManager_ColliderHolder__Array* create() {
            return il2cpp::create_object<app::TestSpiderColliderManager_ColliderHolder__Array>(get_class());
        }
    } // namespace TestSpiderColliderManager_ColliderHolder__Array
} // namespace app::classes::types
