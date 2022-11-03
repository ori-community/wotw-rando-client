#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialPropertyBlock {
        inline app::MaterialPropertyBlock__Class** type_info = (app::MaterialPropertyBlock__Class**)(modloader::win::memory::resolve_rva(0x047528E8));
        inline app::MaterialPropertyBlock__Class* get_class() {
            return il2cpp::get_class<app::MaterialPropertyBlock__Class>(type_info, "UnityEngine", "MaterialPropertyBlock");
        }
        inline app::MaterialPropertyBlock* create() {
            return il2cpp::create_object<app::MaterialPropertyBlock>(get_class());
        }
    } // namespace MaterialPropertyBlock
} // namespace app::classes::types
