#pragma once
#include <Modloader/app/structs/ImplicitUseKindFlags__Enum.h>
#include <Modloader/app/structs/ImplicitUseKindFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ImplicitUseKindFlags__Enum {
        inline app::ImplicitUseKindFlags__Enum__Class** type_info() {
            static app::ImplicitUseKindFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ImplicitUseKindFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ImplicitUseKindFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::ImplicitUseKindFlags__Enum__Class>(type_info(), "JetBrains.Annotations", "ImplicitUseKindFlags");
        }
        inline app::ImplicitUseKindFlags__Enum* create() {
            return il2cpp::create_object<app::ImplicitUseKindFlags__Enum>(get_class());
        }
    } // namespace ImplicitUseKindFlags__Enum
} // namespace app::classes::types
