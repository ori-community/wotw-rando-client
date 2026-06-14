#pragma once
#include <Modloader/app/structs/ActivateCooldownRule__Array.h>
#include <Modloader/app/structs/ActivateCooldownRule__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivateCooldownRule__Array {
        inline app::ActivateCooldownRule__Array__Class** type_info() {
            static app::ActivateCooldownRule__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ActivateCooldownRule__Array__Class**)(modloader::win::memory::resolve_rva(0x04749370));
            }
            return cache;
        }
        inline app::ActivateCooldownRule__Array__Class* get_class() {
            return il2cpp::get_class<app::ActivateCooldownRule__Array__Class>(type_info(), "", "ActivateCooldownRule[]");
        }
        inline app::ActivateCooldownRule__Array* create() {
            return il2cpp::create_object<app::ActivateCooldownRule__Array>(get_class());
        }
    } // namespace ActivateCooldownRule__Array
} // namespace app::classes::types
