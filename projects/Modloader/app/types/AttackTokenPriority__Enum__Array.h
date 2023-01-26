#pragma once
#include <Modloader/app/structs/AttackTokenPriority__Enum__Array.h>
#include <Modloader/app/structs/AttackTokenPriority__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttackTokenPriority__Enum__Array {
        inline app::AttackTokenPriority__Enum__Array__Class** type_info() {
            static app::AttackTokenPriority__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AttackTokenPriority__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0470A990));
            }
            return cache;
        }
        inline app::AttackTokenPriority__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::AttackTokenPriority__Enum__Array__Class>(type_info(), "", "AttackTokenPriority[]");
        }
        inline app::AttackTokenPriority__Enum__Array* create() {
            return il2cpp::create_object<app::AttackTokenPriority__Enum__Array>(get_class());
        }
    } // namespace AttackTokenPriority__Enum__Array
} // namespace app::classes::types
