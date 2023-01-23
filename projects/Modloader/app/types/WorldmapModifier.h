#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WorldmapModifier__Class.h>
#include <Modloader/app/structs/WorldmapModifier.h>

namespace app::classes::types {
    namespace WorldmapModifier {
        namespace {
            inline app::WorldmapModifier__Class* type_info_ref = nullptr;
        }
        inline app::WorldmapModifier__Class** type_info = &type_info_ref;
        inline app::WorldmapModifier__Class* get_class() {
            return il2cpp::get_class<app::WorldmapModifier__Class>(type_info, "", "WorldmapModifier");
        }
        inline app::WorldmapModifier* create() {
            return il2cpp::create_object<app::WorldmapModifier>(get_class());
        }
    } // namespace WorldmapModifier
} // namespace app::classes::types
