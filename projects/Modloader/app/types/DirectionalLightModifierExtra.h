#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DirectionalLightModifierExtra {
        namespace {
            inline app::DirectionalLightModifierExtra__Class* type_info_ref = nullptr;
        }
        inline app::DirectionalLightModifierExtra__Class** type_info = &type_info_ref;
        inline app::DirectionalLightModifierExtra__Class* get_class() {
            return il2cpp::get_class<app::DirectionalLightModifierExtra__Class>(type_info, "", "DirectionalLightModifierExtra");
        }
        inline app::DirectionalLightModifierExtra* create() {
            return il2cpp::create_object<app::DirectionalLightModifierExtra>(get_class());
        }
    } // namespace DirectionalLightModifierExtra
} // namespace app::classes::types
