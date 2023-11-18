#pragma once
#include <Modloader/app/structs/DestructibleStalactite.h>
#include <Modloader/app/structs/DestructibleStalactite__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DestructibleStalactite {
        inline app::DestructibleStalactite__Class** type_info() {
            static app::DestructibleStalactite__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DestructibleStalactite__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DestructibleStalactite__Class* get_class() {
            return il2cpp::get_class<app::DestructibleStalactite__Class>(type_info(), "", "DestructibleStalactite");
        }
        inline app::DestructibleStalactite* create() {
            return il2cpp::create_object<app::DestructibleStalactite>(get_class());
        }
    } // namespace DestructibleStalactite
} // namespace app::classes::types
