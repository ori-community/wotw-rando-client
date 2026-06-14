#pragma once
#include <Modloader/app/structs/GhostCharacterStatesData.h>
#include <Modloader/app/structs/GhostCharacterStatesData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostCharacterStatesData {
        inline app::GhostCharacterStatesData__Class** type_info() {
            static app::GhostCharacterStatesData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostCharacterStatesData__Class**)(modloader::win::memory::resolve_rva(0x0471B8D8));
            }
            return cache;
        }
        inline app::GhostCharacterStatesData__Class* get_class() {
            return il2cpp::get_class<app::GhostCharacterStatesData__Class>(type_info(), "", "GhostCharacterStatesData");
        }
        inline app::GhostCharacterStatesData* create() {
            return il2cpp::create_object<app::GhostCharacterStatesData>(get_class());
        }
    } // namespace GhostCharacterStatesData
} // namespace app::classes::types
