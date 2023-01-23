#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ITweenSpeedProvider__Class.h>

namespace app::classes::types {
    namespace ITweenSpeedProvider {
        inline app::ITweenSpeedProvider__Class** type_info = (app::ITweenSpeedProvider__Class**)(modloader::win::memory::resolve_rva(0x047687E8));
        inline app::ITweenSpeedProvider__Class* get_class() {
            return il2cpp::get_class<app::ITweenSpeedProvider__Class>(type_info, "Moon", "ITweenSpeedProvider");
        }
    } // namespace ITweenSpeedProvider
} // namespace app::classes::types
