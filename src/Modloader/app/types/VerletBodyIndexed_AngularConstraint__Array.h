#pragma once
#include <Modloader/app/structs/VerletBodyIndexed_AngularConstraint__Array.h>
#include <Modloader/app/structs/VerletBodyIndexed_AngularConstraint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletBodyIndexed_AngularConstraint__Array {
        inline app::VerletBodyIndexed_AngularConstraint__Array__Class** type_info() {
            static app::VerletBodyIndexed_AngularConstraint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VerletBodyIndexed_AngularConstraint__Array__Class**)(modloader::win::memory::resolve_rva(0x0471E978));
            }
            return cache;
        }
        inline app::VerletBodyIndexed_AngularConstraint__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletBodyIndexed_AngularConstraint__Array__Class>(type_info(), "Moon", "VerletBodyIndexed+AngularConstraint[]");
        }
        inline app::VerletBodyIndexed_AngularConstraint__Array* create() {
            return il2cpp::create_object<app::VerletBodyIndexed_AngularConstraint__Array>(get_class());
        }
    } // namespace VerletBodyIndexed_AngularConstraint__Array
} // namespace app::classes::types
