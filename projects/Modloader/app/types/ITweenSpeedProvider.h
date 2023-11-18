#pragma once
#include <Modloader/app/structs/ITweenSpeedProvider.h>
#include <Modloader/app/structs/ITweenSpeedProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITweenSpeedProvider {
        inline app::ITweenSpeedProvider__Class** type_info() {
            static app::ITweenSpeedProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITweenSpeedProvider__Class**)(modloader::win::memory::resolve_rva(0x047687E8));
            }
            return cache;
        }
        inline app::ITweenSpeedProvider__Class* get_class() {
            return il2cpp::get_class<app::ITweenSpeedProvider__Class>(type_info(), "Moon", "ITweenSpeedProvider");
        }
    } // namespace ITweenSpeedProvider
} // namespace app::classes::types
