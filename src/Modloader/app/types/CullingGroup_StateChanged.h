#pragma once
#include <Modloader/app/structs/CullingGroup_StateChanged.h>
#include <Modloader/app/structs/CullingGroup_StateChanged__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CullingGroup_StateChanged {
        inline app::CullingGroup_StateChanged__Class** type_info() {
            static app::CullingGroup_StateChanged__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CullingGroup_StateChanged__Class**)(modloader::win::memory::resolve_rva(0x0476EF38));
            }
            return cache;
        }
        inline app::CullingGroup_StateChanged__Class* get_class() {
            return il2cpp::get_nested_class<app::CullingGroup_StateChanged__Class>(type_info(), "UnityEngine", "CullingGroup", "StateChanged");
        }
        inline app::CullingGroup_StateChanged* create() {
            return il2cpp::create_object<app::CullingGroup_StateChanged>(get_class());
        }
    } // namespace CullingGroup_StateChanged
} // namespace app::classes::types
