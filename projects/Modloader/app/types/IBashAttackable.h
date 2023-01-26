#pragma once
#include <Modloader/app/structs/IBashAttackable.h>
#include <Modloader/app/structs/IBashAttackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBashAttackable {
        inline app::IBashAttackable__Class** type_info() {
            static app::IBashAttackable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IBashAttackable__Class**)(modloader::win::memory::resolve_rva(0x04701138));
            }
            return cache;
        }
        inline app::IBashAttackable__Class* get_class() {
            return il2cpp::get_class<app::IBashAttackable__Class>(type_info(), "", "IBashAttackable");
        }
    } // namespace IBashAttackable
} // namespace app::classes::types
