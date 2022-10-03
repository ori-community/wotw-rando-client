#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostTransformData {
        namespace {
            app::GhostTransformData__Class* type_info_ref = nullptr;
        }
        app::GhostTransformData__Class** type_info = &type_info_ref;
        inline app::GhostTransformData__Class* get_class() {
            return il2cpp::get_class<app::GhostTransformData__Class>(type_info, "", "GhostTransformData");
        }
        inline app::GhostTransformData* create() {
            return il2cpp::create_object<app::GhostTransformData>(get_class());
        }
    } // namespace GhostTransformData
} // namespace app::classes::types
