#pragma once
#include <Modloader/app/structs/DefaultCameraTargetsProvider.h>
#include <Modloader/app/structs/DefaultCameraTargetsProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultCameraTargetsProvider {
        inline app::DefaultCameraTargetsProvider__Class** type_info() {
            static app::DefaultCameraTargetsProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DefaultCameraTargetsProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DefaultCameraTargetsProvider__Class* get_class() {
            return il2cpp::get_class<app::DefaultCameraTargetsProvider__Class>(type_info(), "", "DefaultCameraTargetsProvider");
        }
        inline app::DefaultCameraTargetsProvider* create() {
            return il2cpp::create_object<app::DefaultCameraTargetsProvider>(get_class());
        }
    } // namespace DefaultCameraTargetsProvider
} // namespace app::classes::types
