#pragma once
#include <Modloader/app/structs/ICollisionContext.h>
#include <Modloader/app/structs/ICollisionContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICollisionContext {
        inline app::ICollisionContext__Class** type_info() {
            static app::ICollisionContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICollisionContext__Class**)(modloader::win::memory::resolve_rva(0x0472F9E8));
            }
            return cache;
        }
        inline app::ICollisionContext__Class* get_class() {
            return il2cpp::get_class<app::ICollisionContext__Class>(type_info(), "", "ICollisionContext");
        }
    } // namespace ICollisionContext
} // namespace app::classes::types
