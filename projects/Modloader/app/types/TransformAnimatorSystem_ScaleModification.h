#pragma once
#include <Modloader/app/structs/TransformAnimatorSystem_ScaleModification.h>
#include <Modloader/app/structs/TransformAnimatorSystem_ScaleModification__Boxed.h>
#include <Modloader/app/structs/TransformAnimatorSystem_ScaleModification__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformAnimatorSystem_ScaleModification {
        inline app::TransformAnimatorSystem_ScaleModification__Class** type_info() {
            static app::TransformAnimatorSystem_ScaleModification__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TransformAnimatorSystem_ScaleModification__Class**)(modloader::win::memory::resolve_rva(0x04760030));
            }
            return cache;
        }
        inline app::TransformAnimatorSystem_ScaleModification__Class* get_class() {
            return il2cpp::get_nested_class<app::TransformAnimatorSystem_ScaleModification__Class>(type_info(), "Moon.Timeline", "TransformAnimatorSystem", "ScaleModification");
        }
        inline app::TransformAnimatorSystem_ScaleModification* create() {
            return il2cpp::create_object<app::TransformAnimatorSystem_ScaleModification>(get_class());
        }
        inline app::TransformAnimatorSystem_ScaleModification__Boxed* box(app::TransformAnimatorSystem_ScaleModification value) {
            return il2cpp::box_value<app::TransformAnimatorSystem_ScaleModification__Boxed>(get_class(), value);
        }
    } // namespace TransformAnimatorSystem_ScaleModification
} // namespace app::classes::types
