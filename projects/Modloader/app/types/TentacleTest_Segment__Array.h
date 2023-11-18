#pragma once
#include <Modloader/app/structs/TentacleTest_Segment__Array.h>
#include <Modloader/app/structs/TentacleTest_Segment__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleTest_Segment__Array {
        inline app::TentacleTest_Segment__Array__Class** type_info() {
            static app::TentacleTest_Segment__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleTest_Segment__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleTest_Segment__Array__Class* get_class() {
            return il2cpp::get_class<app::TentacleTest_Segment__Array__Class>(type_info(), "", "TentacleTest+Segment[]");
        }
        inline app::TentacleTest_Segment__Array* create() {
            return il2cpp::create_object<app::TentacleTest_Segment__Array>(get_class());
        }
    } // namespace TentacleTest_Segment__Array
} // namespace app::classes::types
