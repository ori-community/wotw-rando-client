#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Presentation__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Presentation__Enum__Class** type_info;
        inline app::Presentation__Enum__Class* get_class() {
            return il2cpp::get_class<app::Presentation__Enum__Class>(type_info, "Moon.Profile", "Presentation");
        }
        inline app::Presentation__Enum* create() {
            return il2cpp::create_object<app::Presentation__Enum>(get_class());
        }
    } // namespace Presentation__Enum
} // namespace app::classes::types
