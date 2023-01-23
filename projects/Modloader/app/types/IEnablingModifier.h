#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IEnablingModifier__Class.h>

namespace app::classes::types {
    namespace IEnablingModifier {
        inline app::IEnablingModifier__Class** type_info = (app::IEnablingModifier__Class**)(modloader::win::memory::resolve_rva(0x04751A00));
        inline app::IEnablingModifier__Class* get_class() {
            return il2cpp::get_class<app::IEnablingModifier__Class>(type_info, "Moon.TimeSlicer", "IEnablingModifier");
        }
    } // namespace IEnablingModifier
} // namespace app::classes::types
