#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HitFlash3D__Class.h>
#include <Modloader/app/structs/HitFlash3D.h>

namespace app::classes::types {
    namespace HitFlash3D {
        namespace {
            inline app::HitFlash3D__Class* type_info_ref = nullptr;
        }
        inline app::HitFlash3D__Class** type_info = &type_info_ref;
        inline app::HitFlash3D__Class* get_class() {
            return il2cpp::get_class<app::HitFlash3D__Class>(type_info, "", "HitFlash3D");
        }
        inline app::HitFlash3D* create() {
            return il2cpp::create_object<app::HitFlash3D>(get_class());
        }
    } // namespace HitFlash3D
} // namespace app::classes::types
