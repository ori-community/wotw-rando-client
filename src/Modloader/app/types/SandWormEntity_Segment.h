#pragma once
#include <Modloader/app/structs/SandWormEntity_Segment.h>
#include <Modloader/app/structs/SandWormEntity_Segment__Array.h>
#include <Modloader/app/structs/SandWormEntity_Segment__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormEntity_Segment {
        inline app::SandWormEntity_Segment__Class** type_info() {
            static app::SandWormEntity_Segment__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormEntity_Segment__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormEntity_Segment__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormEntity_Segment__Class>(type_info(), "", "SandWormEntity", "Segment");
        }
        inline app::SandWormEntity_Segment* create() {
            return il2cpp::create_object<app::SandWormEntity_Segment>(get_class());
        }
        inline app::SandWormEntity_Segment__Array* create_array(int size) {
            return il2cpp::array_new<app::SandWormEntity_Segment__Array>(get_class(), size);
        }
        inline app::SandWormEntity_Segment__Array* create_array(const std::vector<app::SandWormEntity_Segment*>& items) {
            return il2cpp::array_new<app::SandWormEntity_Segment__Array>(get_class(), items);
        }
    } // namespace SandWormEntity_Segment
} // namespace app::classes::types
