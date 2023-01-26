#pragma once
#include <Modloader/app/structs/ServerPhysicalMaterial.h>
#include <Modloader/app/structs/ServerPhysicalMaterial__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerPhysicalMaterial {
        inline app::ServerPhysicalMaterial__Class** type_info() {
            static app::ServerPhysicalMaterial__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerPhysicalMaterial__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerPhysicalMaterial__Class* get_class() {
            return il2cpp::get_class<app::ServerPhysicalMaterial__Class>(type_info(), "", "ServerPhysicalMaterial");
        }
        inline app::ServerPhysicalMaterial* create() {
            return il2cpp::create_object<app::ServerPhysicalMaterial>(get_class());
        }
    } // namespace ServerPhysicalMaterial
} // namespace app::classes::types
