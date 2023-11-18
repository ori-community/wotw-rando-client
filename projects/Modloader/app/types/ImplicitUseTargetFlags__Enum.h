#pragma once
#include <Modloader/app/structs/ImplicitUseTargetFlags__Enum.h>
#include <Modloader/app/structs/ImplicitUseTargetFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ImplicitUseTargetFlags__Enum {
        inline app::ImplicitUseTargetFlags__Enum__Class** type_info() {
            static app::ImplicitUseTargetFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ImplicitUseTargetFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ImplicitUseTargetFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::ImplicitUseTargetFlags__Enum__Class>(type_info(), "JetBrains.Annotations", "ImplicitUseTargetFlags");
        }
        inline app::ImplicitUseTargetFlags__Enum* create() {
            return il2cpp::create_object<app::ImplicitUseTargetFlags__Enum>(get_class());
        }
    } // namespace ImplicitUseTargetFlags__Enum
} // namespace app::classes::types
