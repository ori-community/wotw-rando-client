#pragma once
#include <Modloader/app/structs/MoonTrailUpdateFlags__Enum.h>
#include <Modloader/app/structs/MoonTrailUpdateFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTrailUpdateFlags__Enum {
        inline app::MoonTrailUpdateFlags__Enum__Class** type_info() {
            static app::MoonTrailUpdateFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTrailUpdateFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTrailUpdateFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::MoonTrailUpdateFlags__Enum__Class>(type_info(), "Moon", "MoonTrailUpdateFlags");
        }
        inline app::MoonTrailUpdateFlags__Enum* create() {
            return il2cpp::create_object<app::MoonTrailUpdateFlags__Enum>(get_class());
        }
    } // namespace MoonTrailUpdateFlags__Enum
} // namespace app::classes::types
