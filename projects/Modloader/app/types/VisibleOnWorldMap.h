#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VisibleOnWorldMap {
        namespace {
            inline app::VisibleOnWorldMap__Class* type_info_ref = nullptr;
        }
        inline app::VisibleOnWorldMap__Class** type_info = &type_info_ref;
        inline app::VisibleOnWorldMap__Class* get_class() {
            return il2cpp::get_class<app::VisibleOnWorldMap__Class>(type_info, "", "VisibleOnWorldMap");
        }
        inline app::VisibleOnWorldMap* create() {
            return il2cpp::create_object<app::VisibleOnWorldMap>(get_class());
        }
    } // namespace VisibleOnWorldMap
} // namespace app::classes::types
