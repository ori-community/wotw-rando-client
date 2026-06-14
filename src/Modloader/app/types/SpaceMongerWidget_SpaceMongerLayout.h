#pragma once
#include <Modloader/app/structs/SpaceMongerWidget_SpaceMongerLayout.h>
#include <Modloader/app/structs/SpaceMongerWidget_SpaceMongerLayout__Boxed.h>
#include <Modloader/app/structs/SpaceMongerWidget_SpaceMongerLayout__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpaceMongerWidget_SpaceMongerLayout {
        inline app::SpaceMongerWidget_SpaceMongerLayout__Class** type_info() {
            static app::SpaceMongerWidget_SpaceMongerLayout__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpaceMongerWidget_SpaceMongerLayout__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpaceMongerWidget_SpaceMongerLayout__Class* get_class() {
            return il2cpp::get_nested_class<app::SpaceMongerWidget_SpaceMongerLayout__Class>(type_info(), "Moon.UberStateVisualization", "SpaceMongerWidget", "SpaceMongerLayout");
        }
        inline app::SpaceMongerWidget_SpaceMongerLayout* create() {
            return il2cpp::create_object<app::SpaceMongerWidget_SpaceMongerLayout>(get_class());
        }
        inline app::SpaceMongerWidget_SpaceMongerLayout__Boxed* box(app::SpaceMongerWidget_SpaceMongerLayout value) {
            return il2cpp::box_value<app::SpaceMongerWidget_SpaceMongerLayout__Boxed>(get_class(), value);
        }
    } // namespace SpaceMongerWidget_SpaceMongerLayout
} // namespace app::classes::types
