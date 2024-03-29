#pragma once
#include <Modloader/app/structs/TransformAnimatorSystem_RotationModification.h>
#include <Modloader/app/structs/TransformAnimatorSystem_RotationModification__Boxed.h>
#include <Modloader/app/structs/TransformAnimatorSystem_RotationModification__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformAnimatorSystem_RotationModification {
        inline app::TransformAnimatorSystem_RotationModification__Class** type_info() {
            static app::TransformAnimatorSystem_RotationModification__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TransformAnimatorSystem_RotationModification__Class**)(modloader::win::memory::resolve_rva(0x04717D50));
            }
            return cache;
        }
        inline app::TransformAnimatorSystem_RotationModification__Class* get_class() {
            return il2cpp::get_nested_class<app::TransformAnimatorSystem_RotationModification__Class>(type_info(), "Moon.Timeline", "TransformAnimatorSystem", "RotationModification");
        }
        inline app::TransformAnimatorSystem_RotationModification* create() {
            return il2cpp::create_object<app::TransformAnimatorSystem_RotationModification>(get_class());
        }
        inline app::TransformAnimatorSystem_RotationModification__Boxed* box(app::TransformAnimatorSystem_RotationModification value) {
            return il2cpp::box_value<app::TransformAnimatorSystem_RotationModification__Boxed>(get_class(), value);
        }
    } // namespace TransformAnimatorSystem_RotationModification
} // namespace app::classes::types
