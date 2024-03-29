#pragma once
#include <Modloader/app/structs/ServerPolygon_PolygonData.h>
#include <Modloader/app/structs/ServerPolygon_PolygonData__Boxed.h>
#include <Modloader/app/structs/ServerPolygon_PolygonData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerPolygon_PolygonData {
        inline app::ServerPolygon_PolygonData__Class** type_info() {
            static app::ServerPolygon_PolygonData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerPolygon_PolygonData__Class**)(modloader::win::memory::resolve_rva(0x04759498));
            }
            return cache;
        }
        inline app::ServerPolygon_PolygonData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerPolygon_PolygonData__Class>(type_info(), "", "ServerPolygon", "PolygonData");
        }
        inline app::ServerPolygon_PolygonData* create() {
            return il2cpp::create_object<app::ServerPolygon_PolygonData>(get_class());
        }
        inline app::ServerPolygon_PolygonData__Boxed* box(app::ServerPolygon_PolygonData value) {
            return il2cpp::box_value<app::ServerPolygon_PolygonData__Boxed>(get_class(), value);
        }
    } // namespace ServerPolygon_PolygonData
} // namespace app::classes::types
