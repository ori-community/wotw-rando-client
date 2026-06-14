#pragma once
#include <Modloader/app/structs/TransferMotion.h>
#include <Modloader/app/structs/TransferMotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransferMotion {
        inline app::TransferMotion__Class** type_info() {
            static app::TransferMotion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransferMotion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransferMotion__Class* get_class() {
            return il2cpp::get_class<app::TransferMotion__Class>(type_info(), "RootMotion.Demos", "TransferMotion");
        }
        inline app::TransferMotion* create() {
            return il2cpp::create_object<app::TransferMotion>(get_class());
        }
    } // namespace TransferMotion
} // namespace app::classes::types
