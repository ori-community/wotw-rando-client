#pragma once
#include <Modloader/app/structs/WaitNodeNonFixedRandom.h>
#include <Modloader/app/structs/WaitNodeNonFixedRandom__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitNodeNonFixedRandom {
        inline app::WaitNodeNonFixedRandom__Class** type_info() {
            static app::WaitNodeNonFixedRandom__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaitNodeNonFixedRandom__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaitNodeNonFixedRandom__Class* get_class() {
            return il2cpp::get_class<app::WaitNodeNonFixedRandom__Class>(type_info(), "Moon.BehaviourSystem", "WaitNodeNonFixedRandom");
        }
        inline app::WaitNodeNonFixedRandom* create() {
            return il2cpp::create_object<app::WaitNodeNonFixedRandom>(get_class());
        }
    } // namespace WaitNodeNonFixedRandom
} // namespace app::classes::types
