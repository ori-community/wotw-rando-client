#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandWormEntity_Segment {
        namespace {
            inline app::SandWormEntity_Segment__Class* type_info_ref = nullptr;
        }
        inline app::SandWormEntity_Segment__Class** type_info = &type_info_ref;
        inline app::SandWormEntity_Segment__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormEntity_Segment__Class>(type_info, "", "SandWormEntity", "Segment");
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
