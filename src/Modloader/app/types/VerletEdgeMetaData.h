#pragma once
#include <Modloader/app/structs/VerletEdgeMetaData.h>
#include <Modloader/app/structs/VerletEdgeMetaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletEdgeMetaData {
        inline app::VerletEdgeMetaData__Class** type_info() {
            static app::VerletEdgeMetaData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletEdgeMetaData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletEdgeMetaData__Class* get_class() {
            return il2cpp::get_class<app::VerletEdgeMetaData__Class>(type_info(), "", "VerletEdgeMetaData");
        }
        inline app::VerletEdgeMetaData* create() {
            return il2cpp::create_object<app::VerletEdgeMetaData>(get_class());
        }
    } // namespace VerletEdgeMetaData
} // namespace app::classes::types
