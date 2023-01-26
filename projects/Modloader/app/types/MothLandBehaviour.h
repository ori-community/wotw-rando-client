#pragma once
#include <Modloader/app/structs/MothLandBehaviour.h>
#include <Modloader/app/structs/MothLandBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MothLandBehaviour {
        inline app::MothLandBehaviour__Class** type_info() {
            static app::MothLandBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MothLandBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MothLandBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MothLandBehaviour__Class>(type_info(), "", "MothLandBehaviour");
        }
        inline app::MothLandBehaviour* create() {
            return il2cpp::create_object<app::MothLandBehaviour>(get_class());
        }
    } // namespace MothLandBehaviour
} // namespace app::classes::types
