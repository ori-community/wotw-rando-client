#pragma once
#include <Modloader/app/structs/NintendoPlayFabSynchronizer.h>
#include <Modloader/app/structs/NintendoPlayFabSynchronizer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NintendoPlayFabSynchronizer {
        inline app::NintendoPlayFabSynchronizer__Class** type_info() {
            static app::NintendoPlayFabSynchronizer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NintendoPlayFabSynchronizer__Class**)(modloader::win::memory::resolve_rva(0x04773A18));
            }
            return cache;
        }
        inline app::NintendoPlayFabSynchronizer__Class* get_class() {
            return il2cpp::get_class<app::NintendoPlayFabSynchronizer__Class>(type_info(), "SystemIntegration", "NintendoPlayFabSynchronizer");
        }
        inline app::NintendoPlayFabSynchronizer* create() {
            return il2cpp::create_object<app::NintendoPlayFabSynchronizer>(get_class());
        }
    } // namespace NintendoPlayFabSynchronizer
} // namespace app::classes::types
