#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetupStateModifierDrawerAttribute__Class.h>
#include <Modloader/app/structs/SetupStateModifierDrawerAttribute.h>

namespace app::classes::types {
    namespace SetupStateModifierDrawerAttribute {
        namespace {
            inline app::SetupStateModifierDrawerAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SetupStateModifierDrawerAttribute__Class** type_info = &type_info_ref;
        inline app::SetupStateModifierDrawerAttribute__Class* get_class() {
            return il2cpp::get_class<app::SetupStateModifierDrawerAttribute__Class>(type_info, "", "SetupStateModifierDrawerAttribute");
        }
        inline app::SetupStateModifierDrawerAttribute* create() {
            return il2cpp::create_object<app::SetupStateModifierDrawerAttribute>(get_class());
        }
    } // namespace SetupStateModifierDrawerAttribute
} // namespace app::classes::types
