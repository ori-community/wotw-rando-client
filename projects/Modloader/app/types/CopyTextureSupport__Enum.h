#pragma once
#include <Modloader/app/structs/CopyTextureSupport__Enum.h>
#include <Modloader/app/structs/CopyTextureSupport__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CopyTextureSupport__Enum {
        inline app::CopyTextureSupport__Enum__Class** type_info() {
            static app::CopyTextureSupport__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CopyTextureSupport__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478B850));
            }
            return cache;
        }
        inline app::CopyTextureSupport__Enum__Class* get_class() {
            return il2cpp::get_class<app::CopyTextureSupport__Enum__Class>(type_info(), "UnityEngine.Rendering", "CopyTextureSupport");
        }
        inline app::CopyTextureSupport__Enum* create() {
            return il2cpp::create_object<app::CopyTextureSupport__Enum>(get_class());
        }
    } // namespace CopyTextureSupport__Enum
} // namespace app::classes::types
