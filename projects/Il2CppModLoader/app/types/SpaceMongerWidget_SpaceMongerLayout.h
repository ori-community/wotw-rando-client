#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpaceMongerWidget_SpaceMongerLayout {
        namespace {
            inline app::SpaceMongerWidget_SpaceMongerLayout__Class* type_info_ref = nullptr;
        }
        inline app::SpaceMongerWidget_SpaceMongerLayout__Class** type_info = &type_info_ref;
        inline app::SpaceMongerWidget_SpaceMongerLayout__Class* get_class() {
            return il2cpp::get_nested_class<app::SpaceMongerWidget_SpaceMongerLayout__Class>(type_info, "Moon.UberStateVisualization", "SpaceMongerWidget", "SpaceMongerLayout");
        }
        inline app::SpaceMongerWidget_SpaceMongerLayout* create() {
            return il2cpp::create_object<app::SpaceMongerWidget_SpaceMongerLayout>(get_class());
        }
        inline app::SpaceMongerWidget_SpaceMongerLayout__Boxed* box(app::SpaceMongerWidget_SpaceMongerLayout value) {
            return il2cpp::box_value<app::SpaceMongerWidget_SpaceMongerLayout__Boxed>(get_class(), value);
        }
    } // namespace SpaceMongerWidget_SpaceMongerLayout
} // namespace app::classes::types
