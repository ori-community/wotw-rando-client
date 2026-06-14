#pragma once
#include <Modloader/app/structs/AVProWindowsMediaMeshApply.h>
#include <Modloader/app/structs/AVProWindowsMediaMeshApply__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaMeshApply {
        inline app::AVProWindowsMediaMeshApply__Class** type_info() {
            static app::AVProWindowsMediaMeshApply__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AVProWindowsMediaMeshApply__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AVProWindowsMediaMeshApply__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaMeshApply__Class>(type_info(), "", "AVProWindowsMediaMeshApply");
        }
        inline app::AVProWindowsMediaMeshApply* create() {
            return il2cpp::create_object<app::AVProWindowsMediaMeshApply>(get_class());
        }
    } // namespace AVProWindowsMediaMeshApply
} // namespace app::classes::types
