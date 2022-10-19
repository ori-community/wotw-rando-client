#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrossStitch {
        namespace {
            inline app::CrossStitch__Class* type_info_ref = nullptr;
        }
        inline app::CrossStitch__Class** type_info = &type_info_ref;
        inline app::CrossStitch__Class* get_class() {
            return il2cpp::get_class<app::CrossStitch__Class>(type_info, "Colorful", "CrossStitch");
        }
        inline app::CrossStitch* create() {
            return il2cpp::create_object<app::CrossStitch>(get_class());
        }
    } // namespace CrossStitch
} // namespace app::classes::types
