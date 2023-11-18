#pragma once
#include <Modloader/app/structs/AutoDamageColliderResolver.h>
#include <Modloader/app/structs/AutoDamageColliderResolver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AutoDamageColliderResolver {
        inline app::AutoDamageColliderResolver__Class** type_info() {
            static app::AutoDamageColliderResolver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AutoDamageColliderResolver__Class**)(modloader::win::memory::resolve_rva(0x04710E48));
            }
            return cache;
        }
        inline app::AutoDamageColliderResolver__Class* get_class() {
            return il2cpp::get_class<app::AutoDamageColliderResolver__Class>(type_info(), "", "AutoDamageColliderResolver");
        }
        inline app::AutoDamageColliderResolver* create() {
            return il2cpp::create_object<app::AutoDamageColliderResolver>(get_class());
        }
    } // namespace AutoDamageColliderResolver
} // namespace app::classes::types
