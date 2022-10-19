#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransformAnimatorSystem_PositionModification {
        inline app::TransformAnimatorSystem_PositionModification__Class** type_info = (app::TransformAnimatorSystem_PositionModification__Class**)(modloader::win::memory::resolve_rva(0x047340C8));
        inline app::TransformAnimatorSystem_PositionModification__Class* get_class() {
            return il2cpp::get_nested_class<app::TransformAnimatorSystem_PositionModification__Class>(type_info, "Moon.Timeline", "TransformAnimatorSystem", "PositionModification");
        }
        inline app::TransformAnimatorSystem_PositionModification* create() {
            return il2cpp::create_object<app::TransformAnimatorSystem_PositionModification>(get_class());
        }
        inline app::TransformAnimatorSystem_PositionModification__Boxed* box(app::TransformAnimatorSystem_PositionModification value) {
            return il2cpp::box_value<app::TransformAnimatorSystem_PositionModification__Boxed>(get_class(), value);
        }
    } // namespace TransformAnimatorSystem_PositionModification
} // namespace app::classes::types
