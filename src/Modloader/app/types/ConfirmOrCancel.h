#pragma once
#include <Modloader/app/structs/ConfirmOrCancel.h>
#include <Modloader/app/structs/ConfirmOrCancel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfirmOrCancel {
        inline app::ConfirmOrCancel__Class** type_info() {
            static app::ConfirmOrCancel__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConfirmOrCancel__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConfirmOrCancel__Class* get_class() {
            return il2cpp::get_class<app::ConfirmOrCancel__Class>(type_info(), "", "ConfirmOrCancel");
        }
        inline app::ConfirmOrCancel* create() {
            return il2cpp::create_object<app::ConfirmOrCancel>(get_class());
        }
    } // namespace ConfirmOrCancel
} // namespace app::classes::types
