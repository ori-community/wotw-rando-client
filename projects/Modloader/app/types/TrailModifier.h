#pragma once
#include <Modloader/app/structs/TrailModifier.h>
#include <Modloader/app/structs/TrailModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrailModifier {
        inline app::TrailModifier__Class** type_info() {
            static app::TrailModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TrailModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TrailModifier__Class* get_class() {
            return il2cpp::get_class<app::TrailModifier__Class>(type_info(), "", "TrailModifier");
        }
        inline app::TrailModifier* create() {
            return il2cpp::create_object<app::TrailModifier>(get_class());
        }
    } // namespace TrailModifier
} // namespace app::classes::types
