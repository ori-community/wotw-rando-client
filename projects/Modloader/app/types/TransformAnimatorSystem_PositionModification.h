#pragma once
#include <Modloader/app/structs/TransformAnimatorSystem_PositionModification.h>
#include <Modloader/app/structs/TransformAnimatorSystem_PositionModification__Boxed.h>
#include <Modloader/app/structs/TransformAnimatorSystem_PositionModification__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformAnimatorSystem_PositionModification {
        inline app::TransformAnimatorSystem_PositionModification__Class** type_info() {
            static app::TransformAnimatorSystem_PositionModification__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TransformAnimatorSystem_PositionModification__Class**)(modloader::win::memory::resolve_rva(0x047340C8));
            }
            return cache;
        }
        inline app::TransformAnimatorSystem_PositionModification__Class* get_class() {
            return il2cpp::get_nested_class<app::TransformAnimatorSystem_PositionModification__Class>(type_info(), "Moon.Timeline", "TransformAnimatorSystem", "PositionModification");
        }
        inline app::TransformAnimatorSystem_PositionModification* create() {
            return il2cpp::create_object<app::TransformAnimatorSystem_PositionModification>(get_class());
        }
        inline app::TransformAnimatorSystem_PositionModification__Boxed* box(app::TransformAnimatorSystem_PositionModification value) {
            return il2cpp::box_value<app::TransformAnimatorSystem_PositionModification__Boxed>(get_class(), value);
        }
    } // namespace TransformAnimatorSystem_PositionModification
} // namespace app::classes::types
