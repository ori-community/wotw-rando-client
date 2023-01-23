#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HideOrShowOnWorldMap__Class.h>
#include <Modloader/app/structs/HideOrShowOnWorldMap.h>

namespace app::classes::types {
    namespace HideOrShowOnWorldMap {
        namespace {
            inline app::HideOrShowOnWorldMap__Class* type_info_ref = nullptr;
        }
        inline app::HideOrShowOnWorldMap__Class** type_info = &type_info_ref;
        inline app::HideOrShowOnWorldMap__Class* get_class() {
            return il2cpp::get_class<app::HideOrShowOnWorldMap__Class>(type_info, "", "HideOrShowOnWorldMap");
        }
        inline app::HideOrShowOnWorldMap* create() {
            return il2cpp::create_object<app::HideOrShowOnWorldMap>(get_class());
        }
    } // namespace HideOrShowOnWorldMap
} // namespace app::classes::types
