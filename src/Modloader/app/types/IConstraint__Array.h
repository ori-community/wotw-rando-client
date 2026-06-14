#pragma once
#include <Modloader/app/structs/IConstraint__Array.h>
#include <Modloader/app/structs/IConstraint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IConstraint__Array {
        inline app::IConstraint__Array__Class** type_info() {
            static app::IConstraint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IConstraint__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IConstraint__Array__Class* get_class() {
            return il2cpp::get_class<app::IConstraint__Array__Class>(type_info(), "Moon.Timeline.Constraints", "IConstraint[]");
        }
        inline app::IConstraint__Array* create() {
            return il2cpp::create_object<app::IConstraint__Array>(get_class());
        }
    } // namespace IConstraint__Array
} // namespace app::classes::types
