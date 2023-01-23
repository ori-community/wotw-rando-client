#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SwitchLevelAttribute__Class.h>
#include <Modloader/app/structs/SwitchLevelAttribute.h>

namespace app::classes::types {
    namespace SwitchLevelAttribute {
        namespace {
            inline app::SwitchLevelAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SwitchLevelAttribute__Class** type_info = &type_info_ref;
        inline app::SwitchLevelAttribute__Class* get_class() {
            return il2cpp::get_class<app::SwitchLevelAttribute__Class>(type_info, "System.Diagnostics", "SwitchLevelAttribute");
        }
        inline app::SwitchLevelAttribute* create() {
            return il2cpp::create_object<app::SwitchLevelAttribute>(get_class());
        }
    } // namespace SwitchLevelAttribute
} // namespace app::classes::types
