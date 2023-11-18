#pragma once
#include <Modloader/app/structs/ArtManagerData.h>
#include <Modloader/app/structs/ArtManagerData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArtManagerData {
        inline app::ArtManagerData__Class** type_info() {
            static app::ArtManagerData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ArtManagerData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ArtManagerData__Class* get_class() {
            return il2cpp::get_class<app::ArtManagerData__Class>(type_info(), "Moon", "ArtManagerData");
        }
        inline app::ArtManagerData* create() {
            return il2cpp::create_object<app::ArtManagerData>(get_class());
        }
    } // namespace ArtManagerData
} // namespace app::classes::types
