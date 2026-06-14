#pragma once
#include <Modloader/app/structs/Incremental.h>
#include <Modloader/app/structs/Incremental__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Incremental {
        inline app::Incremental__Class** type_info() {
            static app::Incremental__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Incremental__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Incremental__Class* get_class() {
            return il2cpp::get_class<app::Incremental__Class>(type_info(), "TriangleNet.Meshing.Algorithm", "Incremental");
        }
        inline app::Incremental* create() {
            return il2cpp::create_object<app::Incremental>(get_class());
        }
    } // namespace Incremental
} // namespace app::classes::types
