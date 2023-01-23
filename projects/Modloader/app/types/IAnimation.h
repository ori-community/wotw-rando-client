#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IAnimation__Class.h>

namespace app::classes::types {
    namespace IAnimation {
        inline app::IAnimation__Class** type_info = (app::IAnimation__Class**)(modloader::win::memory::resolve_rva(0x047123D0));
        inline app::IAnimation__Class* get_class() {
            return il2cpp::get_class<app::IAnimation__Class>(type_info, "Moon", "IAnimation");
        }
    } // namespace IAnimation
} // namespace app::classes::types
