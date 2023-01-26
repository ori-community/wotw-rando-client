#pragma once
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array.h>
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array {
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array__Class** type_info() {
            static app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array__Class**)(modloader::win::memory::resolve_rva(0x04763058));
            }
            return cache;
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array__Class* get_class() {
            return il2cpp::get_class<app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array__Class>(type_info(), "Moon.Timeline", "ExperimentalTransparencyAnimatorSystemStrategy+ComputedValue[]");
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array* create() {
            return il2cpp::create_object<app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array>(get_class());
        }
    } // namespace ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array
} // namespace app::classes::types
