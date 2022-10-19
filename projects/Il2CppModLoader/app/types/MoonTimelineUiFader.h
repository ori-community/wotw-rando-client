#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTimelineUiFader {
        namespace {
            inline app::MoonTimelineUiFader__Class* type_info_ref = nullptr;
        }
        inline app::MoonTimelineUiFader__Class** type_info = &type_info_ref;
        inline app::MoonTimelineUiFader__Class* get_class() {
            return il2cpp::get_class<app::MoonTimelineUiFader__Class>(type_info, "", "MoonTimelineUiFader");
        }
        inline app::MoonTimelineUiFader* create() {
            return il2cpp::create_object<app::MoonTimelineUiFader>(get_class());
        }
    } // namespace MoonTimelineUiFader
} // namespace app::classes::types
