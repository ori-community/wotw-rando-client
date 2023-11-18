#pragma once
#include <Modloader/app/structs/TentacleTest_Segment.h>
#include <Modloader/app/structs/TentacleTest_Segment__Array.h>
#include <Modloader/app/structs/TentacleTest_Segment__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleTest_Segment {
        inline app::TentacleTest_Segment__Class** type_info() {
            static app::TentacleTest_Segment__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleTest_Segment__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleTest_Segment__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleTest_Segment__Class>(type_info(), "", "TentacleTest", "Segment");
        }
        inline app::TentacleTest_Segment* create() {
            return il2cpp::create_object<app::TentacleTest_Segment>(get_class());
        }
        inline app::TentacleTest_Segment__Array* create_array(int size) {
            return il2cpp::array_new<app::TentacleTest_Segment__Array>(get_class(), size);
        }
        inline app::TentacleTest_Segment__Array* create_array(const std::vector<app::TentacleTest_Segment*>& items) {
            return il2cpp::array_new<app::TentacleTest_Segment__Array>(get_class(), items);
        }
    } // namespace TentacleTest_Segment
} // namespace app::classes::types
