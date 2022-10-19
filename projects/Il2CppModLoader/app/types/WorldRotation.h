#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WorldRotation {
        namespace {
            inline app::WorldRotation__Class* type_info_ref = nullptr;
        }
        inline app::WorldRotation__Class** type_info = &type_info_ref;
        inline app::WorldRotation__Class* get_class() {
            return il2cpp::get_class<app::WorldRotation__Class>(type_info, "", "WorldRotation");
        }
        inline app::WorldRotation* create() {
            return il2cpp::create_object<app::WorldRotation>(get_class());
        }
    } // namespace WorldRotation
} // namespace app::classes::types
