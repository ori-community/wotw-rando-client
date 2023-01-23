#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraTargetsProvider__Class.h>
#include <Modloader/app/structs/CameraTargetsProvider.h>

namespace app::classes::types {
    namespace CameraTargetsProvider {
        namespace {
            inline app::CameraTargetsProvider__Class* type_info_ref = nullptr;
        }
        inline app::CameraTargetsProvider__Class** type_info = &type_info_ref;
        inline app::CameraTargetsProvider__Class* get_class() {
            return il2cpp::get_class<app::CameraTargetsProvider__Class>(type_info, "Moon", "CameraTargetsProvider");
        }
        inline app::CameraTargetsProvider* create() {
            return il2cpp::create_object<app::CameraTargetsProvider>(get_class());
        }
    } // namespace CameraTargetsProvider
} // namespace app::classes::types
