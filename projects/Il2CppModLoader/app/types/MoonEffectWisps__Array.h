#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonEffectWisps__Array {
        namespace {
            inline app::MoonEffectWisps__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonEffectWisps__Array__Class** type_info = &type_info_ref;
        inline app::MoonEffectWisps__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectWisps__Array__Class>(type_info, "Moon.EffectsFramework.Wisps", "MoonEffectWisps[]");
        }
        inline app::MoonEffectWisps__Array* create() {
            return il2cpp::create_object<app::MoonEffectWisps__Array>(get_class());
        }
    } // namespace MoonEffectWisps__Array
} // namespace app::classes::types
