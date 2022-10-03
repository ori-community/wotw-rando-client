#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldmapModifier {
        namespace {
            app::WorldmapModifier__Class* type_info_ref = nullptr;
        }
        app::WorldmapModifier__Class** type_info = &type_info_ref;
        inline app::WorldmapModifier__Class* get_class() {
            return il2cpp::get_class<app::WorldmapModifier__Class>(type_info, "", "WorldmapModifier");
        }
        inline app::WorldmapModifier* create() {
            return il2cpp::create_object<app::WorldmapModifier>(get_class());
        }
    } // namespace WorldmapModifier
} // namespace app::classes::types
