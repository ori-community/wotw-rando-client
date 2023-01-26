#pragma once
#include <Modloader/app/structs/TorchInsideZoneChecker.h>
#include <Modloader/app/structs/TorchInsideZoneChecker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TorchInsideZoneChecker {
        inline app::TorchInsideZoneChecker__Class** type_info() {
            static app::TorchInsideZoneChecker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TorchInsideZoneChecker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TorchInsideZoneChecker__Class* get_class() {
            return il2cpp::get_class<app::TorchInsideZoneChecker__Class>(type_info(), "", "TorchInsideZoneChecker");
        }
        inline app::TorchInsideZoneChecker* create() {
            return il2cpp::create_object<app::TorchInsideZoneChecker>(get_class());
        }
    } // namespace TorchInsideZoneChecker
} // namespace app::classes::types
