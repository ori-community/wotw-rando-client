#pragma once
#include <Modloader/app/structs/VerletVertexMetaData.h>
#include <Modloader/app/structs/VerletVertexMetaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletVertexMetaData {
        inline app::VerletVertexMetaData__Class** type_info() {
            static app::VerletVertexMetaData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletVertexMetaData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletVertexMetaData__Class* get_class() {
            return il2cpp::get_class<app::VerletVertexMetaData__Class>(type_info(), "", "VerletVertexMetaData");
        }
        inline app::VerletVertexMetaData* create() {
            return il2cpp::create_object<app::VerletVertexMetaData>(get_class());
        }
    } // namespace VerletVertexMetaData
} // namespace app::classes::types
