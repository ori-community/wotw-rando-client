#pragma once
#include <Modloader/app/structs/RammingBehaviour_c.h>
#include <Modloader/app/structs/RammingBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingBehaviour_c {
        inline app::RammingBehaviour_c__Class** type_info() {
            static app::RammingBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RammingBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x047623E8));
            }
            return cache;
        }
        inline app::RammingBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingBehaviour_c__Class>(type_info(), "Moon", "RammingBehaviour", "<>c");
        }
        inline app::RammingBehaviour_c* create() {
            return il2cpp::create_object<app::RammingBehaviour_c>(get_class());
        }
    } // namespace RammingBehaviour_c
} // namespace app::classes::types
