#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AVProWindowsMediaMeshApply__Class.h>
#include <Modloader/app/structs/AVProWindowsMediaMeshApply.h>

namespace app::classes::types {
    namespace AVProWindowsMediaMeshApply {
        namespace {
            inline app::AVProWindowsMediaMeshApply__Class* type_info_ref = nullptr;
        }
        inline app::AVProWindowsMediaMeshApply__Class** type_info = &type_info_ref;
        inline app::AVProWindowsMediaMeshApply__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaMeshApply__Class>(type_info, "", "AVProWindowsMediaMeshApply");
        }
        inline app::AVProWindowsMediaMeshApply* create() {
            return il2cpp::create_object<app::AVProWindowsMediaMeshApply>(get_class());
        }
    } // namespace AVProWindowsMediaMeshApply
} // namespace app::classes::types
