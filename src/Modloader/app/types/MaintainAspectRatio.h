#pragma once
#include <Modloader/app/structs/MaintainAspectRatio.h>
#include <Modloader/app/structs/MaintainAspectRatio__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaintainAspectRatio {
        inline app::MaintainAspectRatio__Class** type_info() {
            static app::MaintainAspectRatio__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaintainAspectRatio__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaintainAspectRatio__Class* get_class() {
            return il2cpp::get_class<app::MaintainAspectRatio__Class>(type_info(), "", "MaintainAspectRatio");
        }
        inline app::MaintainAspectRatio* create() {
            return il2cpp::create_object<app::MaintainAspectRatio>(get_class());
        }
    } // namespace MaintainAspectRatio
} // namespace app::classes::types
