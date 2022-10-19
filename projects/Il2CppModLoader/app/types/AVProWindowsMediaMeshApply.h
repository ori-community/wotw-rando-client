#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
