#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerPolygon__Class.h>
#include <Modloader/app/structs/ServerPolygon.h>

namespace app::classes::types {
    namespace ServerPolygon {
        namespace {
            inline app::ServerPolygon__Class* type_info_ref = nullptr;
        }
        inline app::ServerPolygon__Class** type_info = &type_info_ref;
        inline app::ServerPolygon__Class* get_class() {
            return il2cpp::get_class<app::ServerPolygon__Class>(type_info, "", "ServerPolygon");
        }
        inline app::ServerPolygon* create() {
            return il2cpp::create_object<app::ServerPolygon>(get_class());
        }
    } // namespace ServerPolygon
} // namespace app::classes::types
