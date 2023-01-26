#pragma once
#include <Modloader/app/structs/GhostUberStatePlugin_UberStateData.h>
#include <Modloader/app/structs/GhostUberStatePlugin_UberStateData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostUberStatePlugin_UberStateData {
        inline app::GhostUberStatePlugin_UberStateData__Class** type_info() {
            static app::GhostUberStatePlugin_UberStateData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostUberStatePlugin_UberStateData__Class**)(modloader::win::memory::resolve_rva(0x04719370));
            }
            return cache;
        }
        inline app::GhostUberStatePlugin_UberStateData__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostUberStatePlugin_UberStateData__Class>(type_info(), "", "GhostUberStatePlugin", "UberStateData");
        }
        inline app::GhostUberStatePlugin_UberStateData* create() {
            return il2cpp::create_object<app::GhostUberStatePlugin_UberStateData>(get_class());
        }
    } // namespace GhostUberStatePlugin_UberStateData
} // namespace app::classes::types
