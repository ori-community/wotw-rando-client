#pragma once
#include <Modloader/app/structs/ITweenLerpInputProvider.h>
#include <Modloader/app/structs/ITweenLerpInputProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITweenLerpInputProvider {
        inline app::ITweenLerpInputProvider__Class** type_info() {
            static app::ITweenLerpInputProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITweenLerpInputProvider__Class**)(modloader::win::memory::resolve_rva(0x0476C1B0));
            }
            return cache;
        }
        inline app::ITweenLerpInputProvider__Class* get_class() {
            return il2cpp::get_class<app::ITweenLerpInputProvider__Class>(type_info(), "Moon", "ITweenLerpInputProvider");
        }
    } // namespace ITweenLerpInputProvider
} // namespace app::classes::types
