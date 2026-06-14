#pragma once
#include <Modloader/app/structs/CullingCategory__Enum.h>
#include <Modloader/app/structs/CullingCategory__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CullingCategory__Enum {
        inline app::CullingCategory__Enum__Class** type_info() {
            static app::CullingCategory__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CullingCategory__Enum__Class**)(modloader::win::memory::resolve_rva(0x047596D8));
            }
            return cache;
        }
        inline app::CullingCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::CullingCategory__Enum__Class>(type_info(), "", "CullingCategory");
        }
        inline app::CullingCategory__Enum* create() {
            return il2cpp::create_object<app::CullingCategory__Enum>(get_class());
        }
    } // namespace CullingCategory__Enum
} // namespace app::classes::types
