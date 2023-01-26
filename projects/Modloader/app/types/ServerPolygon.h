#pragma once
#include <Modloader/app/structs/ServerPolygon.h>
#include <Modloader/app/structs/ServerPolygon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerPolygon {
        inline app::ServerPolygon__Class** type_info() {
            static app::ServerPolygon__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerPolygon__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerPolygon__Class* get_class() {
            return il2cpp::get_class<app::ServerPolygon__Class>(type_info(), "", "ServerPolygon");
        }
        inline app::ServerPolygon* create() {
            return il2cpp::create_object<app::ServerPolygon>(get_class());
        }
    } // namespace ServerPolygon
} // namespace app::classes::types
