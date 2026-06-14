#pragma once
#include <Modloader/app/structs/TorchFirePedestal.h>
#include <Modloader/app/structs/TorchFirePedestal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TorchFirePedestal {
        inline app::TorchFirePedestal__Class** type_info() {
            static app::TorchFirePedestal__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TorchFirePedestal__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TorchFirePedestal__Class* get_class() {
            return il2cpp::get_class<app::TorchFirePedestal__Class>(type_info(), "", "TorchFirePedestal");
        }
        inline app::TorchFirePedestal* create() {
            return il2cpp::create_object<app::TorchFirePedestal>(get_class());
        }
    } // namespace TorchFirePedestal
} // namespace app::classes::types
