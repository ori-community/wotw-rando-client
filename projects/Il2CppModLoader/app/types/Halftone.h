#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Halftone {
        namespace {
            inline app::Halftone__Class* type_info_ref = nullptr;
        }
        inline app::Halftone__Class** type_info = &type_info_ref;
        inline app::Halftone__Class* get_class() {
            return il2cpp::get_class<app::Halftone__Class>(type_info, "Colorful", "Halftone");
        }
        inline app::Halftone* create() {
            return il2cpp::create_object<app::Halftone>(get_class());
        }
    } // namespace Halftone
} // namespace app::classes::types
