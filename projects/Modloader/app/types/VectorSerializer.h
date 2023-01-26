#pragma once
#include <Modloader/app/structs/VectorSerializer.h>
#include <Modloader/app/structs/VectorSerializer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VectorSerializer {
        inline app::VectorSerializer__Class** type_info() {
            static app::VectorSerializer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VectorSerializer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VectorSerializer__Class* get_class() {
            return il2cpp::get_class<app::VectorSerializer__Class>(type_info(), "", "VectorSerializer");
        }
        inline app::VectorSerializer* create() {
            return il2cpp::create_object<app::VectorSerializer>(get_class());
        }
    } // namespace VectorSerializer
} // namespace app::classes::types
