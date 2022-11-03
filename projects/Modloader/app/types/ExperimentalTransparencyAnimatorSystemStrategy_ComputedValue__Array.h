#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array {
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array__Class** type_info = (app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array__Class**)(modloader::win::memory::resolve_rva(0x04763058));
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array__Class* get_class() {
            return il2cpp::get_class<app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array__Class>(type_info, "Moon.Timeline", "ExperimentalTransparencyAnimatorSystemStrategy+ComputedValue[]");
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array* create() {
            return il2cpp::create_object<app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array>(get_class());
        }
    } // namespace ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array
} // namespace app::classes::types
