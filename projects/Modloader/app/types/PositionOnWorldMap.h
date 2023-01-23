#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PositionOnWorldMap__Class.h>
#include <Modloader/app/structs/PositionOnWorldMap.h>

namespace app::classes::types {
    namespace PositionOnWorldMap {
        namespace {
            inline app::PositionOnWorldMap__Class* type_info_ref = nullptr;
        }
        inline app::PositionOnWorldMap__Class** type_info = &type_info_ref;
        inline app::PositionOnWorldMap__Class* get_class() {
            return il2cpp::get_class<app::PositionOnWorldMap__Class>(type_info, "", "PositionOnWorldMap");
        }
        inline app::PositionOnWorldMap* create() {
            return il2cpp::create_object<app::PositionOnWorldMap>(get_class());
        }
    } // namespace PositionOnWorldMap
} // namespace app::classes::types
