#pragma once
#include <Modloader/app/structs/IUberStateVisualizable.h>
#include <Modloader/app/structs/IUberStateVisualizable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUberStateVisualizable {
        inline app::IUberStateVisualizable__Class** type_info() {
            static app::IUberStateVisualizable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IUberStateVisualizable__Class**)(modloader::win::memory::resolve_rva(0x0476EB88));
            }
            return cache;
        }
        inline app::IUberStateVisualizable__Class* get_class() {
            return il2cpp::get_class<app::IUberStateVisualizable__Class>(type_info(), "Moon", "IUberStateVisualizable");
        }
    } // namespace IUberStateVisualizable
} // namespace app::classes::types
