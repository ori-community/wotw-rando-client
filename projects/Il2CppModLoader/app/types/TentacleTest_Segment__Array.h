#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleTest_Segment__Array {
        namespace {
            app::TentacleTest_Segment__Array__Class* type_info_ref = nullptr;
        }
        app::TentacleTest_Segment__Array__Class** type_info = &type_info_ref;
        inline app::TentacleTest_Segment__Array__Class* get_class() {
            return il2cpp::get_class<app::TentacleTest_Segment__Array__Class>(type_info, "", "TentacleTest+Segment[]");
        }
        inline app::TentacleTest_Segment__Array* create() {
            return il2cpp::create_object<app::TentacleTest_Segment__Array>(get_class());
        }
    } // namespace TentacleTest_Segment__Array
} // namespace app::classes::types
