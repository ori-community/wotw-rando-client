#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleTest {
        namespace {
            inline app::TentacleTest__Class* type_info_ref = nullptr;
        }
        inline app::TentacleTest__Class** type_info = &type_info_ref;
        inline app::TentacleTest__Class* get_class() {
            return il2cpp::get_class<app::TentacleTest__Class>(type_info, "", "TentacleTest");
        }
        inline app::TentacleTest* create() {
            return il2cpp::create_object<app::TentacleTest>(get_class());
        }
    } // namespace TentacleTest
} // namespace app::classes::types
