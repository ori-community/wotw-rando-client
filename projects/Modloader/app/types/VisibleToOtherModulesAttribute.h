#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VisibleToOtherModulesAttribute__Class.h>
#include <Modloader/app/structs/VisibleToOtherModulesAttribute.h>

namespace app::classes::types {
    namespace VisibleToOtherModulesAttribute {
        namespace {
            inline app::VisibleToOtherModulesAttribute__Class* type_info_ref = nullptr;
        }
        inline app::VisibleToOtherModulesAttribute__Class** type_info = &type_info_ref;
        inline app::VisibleToOtherModulesAttribute__Class* get_class() {
            return il2cpp::get_class<app::VisibleToOtherModulesAttribute__Class>(type_info, "UnityEngine.Bindings", "VisibleToOtherModulesAttribute");
        }
        inline app::VisibleToOtherModulesAttribute* create() {
            return il2cpp::create_object<app::VisibleToOtherModulesAttribute>(get_class());
        }
    } // namespace VisibleToOtherModulesAttribute
} // namespace app::classes::types
