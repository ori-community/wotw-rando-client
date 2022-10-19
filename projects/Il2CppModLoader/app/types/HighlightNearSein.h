#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HighlightNearSein {
        namespace {
            inline app::HighlightNearSein__Class* type_info_ref = nullptr;
        }
        inline app::HighlightNearSein__Class** type_info = &type_info_ref;
        inline app::HighlightNearSein__Class* get_class() {
            return il2cpp::get_class<app::HighlightNearSein__Class>(type_info, "", "HighlightNearSein");
        }
        inline app::HighlightNearSein* create() {
            return il2cpp::create_object<app::HighlightNearSein>(get_class());
        }
    } // namespace HighlightNearSein
} // namespace app::classes::types
