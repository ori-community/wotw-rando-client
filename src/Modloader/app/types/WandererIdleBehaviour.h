#pragma once
#include <Modloader/app/structs/WandererIdleBehaviour.h>
#include <Modloader/app/structs/WandererIdleBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererIdleBehaviour {
        inline app::WandererIdleBehaviour__Class** type_info() {
            static app::WandererIdleBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WandererIdleBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04780178));
            }
            return cache;
        }
        inline app::WandererIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererIdleBehaviour__Class>(type_info(), "", "WandererIdleBehaviour");
        }
        inline app::WandererIdleBehaviour* create() {
            return il2cpp::create_object<app::WandererIdleBehaviour>(get_class());
        }
    } // namespace WandererIdleBehaviour
} // namespace app::classes::types
