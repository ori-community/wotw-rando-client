#pragma once
#include <Modloader/app/structs/GhostService.h>
#include <Modloader/app/structs/GhostService__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostService {
        inline app::GhostService__Class** type_info() {
            static app::GhostService__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostService__Class**)(modloader::win::memory::resolve_rva(0x0474FB78));
            }
            return cache;
        }
        inline app::GhostService__Class* get_class() {
            return il2cpp::get_class<app::GhostService__Class>(type_info(), "", "GhostService");
        }
        inline app::GhostService* create() {
            return il2cpp::create_object<app::GhostService>(get_class());
        }
    } // namespace GhostService
} // namespace app::classes::types
