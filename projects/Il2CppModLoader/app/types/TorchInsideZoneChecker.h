#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TorchInsideZoneChecker {
        namespace {
            app::TorchInsideZoneChecker__Class* type_info_ref = nullptr;
        }
        app::TorchInsideZoneChecker__Class** type_info = &type_info_ref;
        inline app::TorchInsideZoneChecker__Class* get_class() {
            return il2cpp::get_class<app::TorchInsideZoneChecker__Class>(type_info, "", "TorchInsideZoneChecker");
        }
        inline app::TorchInsideZoneChecker* create() {
            return il2cpp::create_object<app::TorchInsideZoneChecker>(get_class());
        }
    } // namespace TorchInsideZoneChecker
} // namespace app::classes::types
