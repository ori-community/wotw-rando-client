#pragma once
#include <Modloader/app/structs/MetaballWaterBlobs.h>
#include <Modloader/app/structs/MetaballWaterBlobs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MetaballWaterBlobs {
        inline app::MetaballWaterBlobs__Class** type_info() {
            static app::MetaballWaterBlobs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MetaballWaterBlobs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MetaballWaterBlobs__Class* get_class() {
            return il2cpp::get_class<app::MetaballWaterBlobs__Class>(type_info(), "", "MetaballWaterBlobs");
        }
        inline app::MetaballWaterBlobs* create() {
            return il2cpp::create_object<app::MetaballWaterBlobs>(get_class());
        }
    } // namespace MetaballWaterBlobs
} // namespace app::classes::types
