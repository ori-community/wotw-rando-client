#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array {
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array__Class** type_info = (app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array__Class**)(modloader::win::memory::resolve_rva(0x04770A78));
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array__Class* get_class() {
            return il2cpp::get_class<app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array__Class>(type_info, "Moon.Timeline", "ExperimentalTransparencyAnimatorSystemStrategy+AlphaState[]");
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array* create() {
            return il2cpp::create_object<app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array>(get_class());
        }
    } // namespace ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array
} // namespace app::classes::types
