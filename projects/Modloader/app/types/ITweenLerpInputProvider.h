#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ITweenLerpInputProvider__Class.h>

namespace app::classes::types {
    namespace ITweenLerpInputProvider {
        inline app::ITweenLerpInputProvider__Class** type_info = (app::ITweenLerpInputProvider__Class**)(modloader::win::memory::resolve_rva(0x0476C1B0));
        inline app::ITweenLerpInputProvider__Class* get_class() {
            return il2cpp::get_class<app::ITweenLerpInputProvider__Class>(type_info, "Moon", "ITweenLerpInputProvider");
        }
    } // namespace ITweenLerpInputProvider
} // namespace app::classes::types
