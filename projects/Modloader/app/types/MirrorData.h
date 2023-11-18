#pragma once
#include <Modloader/app/structs/MirrorData.h>
#include <Modloader/app/structs/MirrorData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MirrorData {
        inline app::MirrorData__Class** type_info() {
            static app::MirrorData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MirrorData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MirrorData__Class* get_class() {
            return il2cpp::get_class<app::MirrorData__Class>(type_info(), "", "MirrorData");
        }
        inline app::MirrorData* create() {
            return il2cpp::create_object<app::MirrorData>(get_class());
        }
    } // namespace MirrorData
} // namespace app::classes::types
