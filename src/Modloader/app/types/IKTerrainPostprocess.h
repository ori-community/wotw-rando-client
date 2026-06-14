#pragma once
#include <Modloader/app/structs/IKTerrainPostprocess.h>
#include <Modloader/app/structs/IKTerrainPostprocess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKTerrainPostprocess {
        inline app::IKTerrainPostprocess__Class** type_info() {
            static app::IKTerrainPostprocess__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IKTerrainPostprocess__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IKTerrainPostprocess__Class* get_class() {
            return il2cpp::get_class<app::IKTerrainPostprocess__Class>(type_info(), "Moon", "IKTerrainPostprocess");
        }
        inline app::IKTerrainPostprocess* create() {
            return il2cpp::create_object<app::IKTerrainPostprocess>(get_class());
        }
    } // namespace IKTerrainPostprocess
} // namespace app::classes::types
