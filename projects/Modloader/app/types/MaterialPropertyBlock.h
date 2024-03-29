#pragma once
#include <Modloader/app/structs/MaterialPropertyBlock.h>
#include <Modloader/app/structs/MaterialPropertyBlock__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialPropertyBlock {
        inline app::MaterialPropertyBlock__Class** type_info() {
            static app::MaterialPropertyBlock__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MaterialPropertyBlock__Class**)(modloader::win::memory::resolve_rva(0x047528E8));
            }
            return cache;
        }
        inline app::MaterialPropertyBlock__Class* get_class() {
            return il2cpp::get_class<app::MaterialPropertyBlock__Class>(type_info(), "UnityEngine", "MaterialPropertyBlock");
        }
        inline app::MaterialPropertyBlock* create() {
            return il2cpp::create_object<app::MaterialPropertyBlock>(get_class());
        }
    } // namespace MaterialPropertyBlock
} // namespace app::classes::types
