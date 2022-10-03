#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonFlagsSystem_HiddenFlagModification {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonFlagsSystem_HiddenFlagModification__Class** type_info;
        inline app::MoonFlagsSystem_HiddenFlagModification__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonFlagsSystem_HiddenFlagModification__Class>(type_info, "", "MoonFlagsSystem", "HiddenFlagModification");
        }
        inline app::MoonFlagsSystem_HiddenFlagModification* create() {
            return il2cpp::create_object<app::MoonFlagsSystem_HiddenFlagModification>(get_class());
        }
        inline app::MoonFlagsSystem_HiddenFlagModification__Boxed* box(app::MoonFlagsSystem_HiddenFlagModification value) {
            return il2cpp::box_value<app::MoonFlagsSystem_HiddenFlagModification__Boxed>(get_class(), value);
        }
    } // namespace MoonFlagsSystem_HiddenFlagModification
} // namespace app::classes::types
