#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTrailUpdateFlags__Enum {
        namespace {
            inline app::MoonTrailUpdateFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MoonTrailUpdateFlags__Enum__Class** type_info = &type_info_ref;
        inline app::MoonTrailUpdateFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::MoonTrailUpdateFlags__Enum__Class>(type_info, "Moon", "MoonTrailUpdateFlags");
        }
        inline app::MoonTrailUpdateFlags__Enum* create() {
            return il2cpp::create_object<app::MoonTrailUpdateFlags__Enum>(get_class());
        }
    } // namespace MoonTrailUpdateFlags__Enum
} // namespace app::classes::types
