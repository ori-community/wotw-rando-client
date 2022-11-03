#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExperimentalTransparencyAnimatorSystemStrategy {
        inline app::ExperimentalTransparencyAnimatorSystemStrategy__Class** type_info = (app::ExperimentalTransparencyAnimatorSystemStrategy__Class**)(modloader::win::memory::resolve_rva(0x04763C48));
        inline app::ExperimentalTransparencyAnimatorSystemStrategy__Class* get_class() {
            return il2cpp::get_class<app::ExperimentalTransparencyAnimatorSystemStrategy__Class>(type_info, "Moon.Timeline", "ExperimentalTransparencyAnimatorSystemStrategy");
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy* create() {
            return il2cpp::create_object<app::ExperimentalTransparencyAnimatorSystemStrategy>(get_class());
        }
    } // namespace ExperimentalTransparencyAnimatorSystemStrategy
} // namespace app::classes::types
