#pragma once
#include <Modloader/app/structs/WwiseGameObjectSystem_c.h>
#include <Modloader/app/structs/WwiseGameObjectSystem_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseGameObjectSystem_c {
        inline app::WwiseGameObjectSystem_c__Class** type_info() {
            static app::WwiseGameObjectSystem_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WwiseGameObjectSystem_c__Class**)(modloader::win::memory::resolve_rva(0x0477D988));
            }
            return cache;
        }
        inline app::WwiseGameObjectSystem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseGameObjectSystem_c__Class>(type_info(), "Moon.Wwise", "WwiseGameObjectSystem", "<>c");
        }
        inline app::WwiseGameObjectSystem_c* create() {
            return il2cpp::create_object<app::WwiseGameObjectSystem_c>(get_class());
        }
    } // namespace WwiseGameObjectSystem_c
} // namespace app::classes::types
