#pragma once
#include <Modloader/app/structs/CameraTargetsProvider.h>
#include <Modloader/app/structs/CameraTargetsProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraTargetsProvider {
        inline app::CameraTargetsProvider__Class** type_info() {
            static app::CameraTargetsProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraTargetsProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraTargetsProvider__Class* get_class() {
            return il2cpp::get_class<app::CameraTargetsProvider__Class>(type_info(), "Moon", "CameraTargetsProvider");
        }
        inline app::CameraTargetsProvider* create() {
            return il2cpp::create_object<app::CameraTargetsProvider>(get_class());
        }
    } // namespace CameraTargetsProvider
} // namespace app::classes::types
