#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonBounds {
        namespace {
            inline app::MoonBounds__Class* type_info_ref = nullptr;
        }
        inline app::MoonBounds__Class** type_info = &type_info_ref;
        inline app::MoonBounds__Class* get_class() {
            return il2cpp::get_class<app::MoonBounds__Class>(type_info, "Moon", "MoonBounds");
        }
        inline app::MoonBounds* create() {
            return il2cpp::create_object<app::MoonBounds>(get_class());
        }
    } // namespace MoonBounds
} // namespace app::classes::types
