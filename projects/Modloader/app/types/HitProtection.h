#pragma once
#include <Modloader/app/structs/HitProtection.h>
#include <Modloader/app/structs/HitProtection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitProtection {
        inline app::HitProtection__Class** type_info() {
            static app::HitProtection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HitProtection__Class**)(modloader::win::memory::resolve_rva(0x04711C90));
            }
            return cache;
        }
        inline app::HitProtection__Class* get_class() {
            return il2cpp::get_class<app::HitProtection__Class>(type_info(), "", "HitProtection");
        }
        inline app::HitProtection* create() {
            return il2cpp::create_object<app::HitProtection>(get_class());
        }
    } // namespace HitProtection
} // namespace app::classes::types
