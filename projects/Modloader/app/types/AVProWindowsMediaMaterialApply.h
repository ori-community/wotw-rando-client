#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AVProWindowsMediaMaterialApply {
        inline app::AVProWindowsMediaMaterialApply__Class** type_info = (app::AVProWindowsMediaMaterialApply__Class**)(modloader::win::memory::resolve_rva(0x04715210));
        inline app::AVProWindowsMediaMaterialApply__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaMaterialApply__Class>(type_info, "", "AVProWindowsMediaMaterialApply");
        }
        inline app::AVProWindowsMediaMaterialApply* create() {
            return il2cpp::create_object<app::AVProWindowsMediaMaterialApply>(get_class());
        }
    } // namespace AVProWindowsMediaMaterialApply
} // namespace app::classes::types
