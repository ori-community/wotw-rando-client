#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonEffectWispsRoot__Class.h>
#include <Modloader/app/structs/MoonEffectWispsRoot.h>

namespace app::classes::types {
    namespace MoonEffectWispsRoot {
        namespace {
            inline app::MoonEffectWispsRoot__Class* type_info_ref = nullptr;
        }
        inline app::MoonEffectWispsRoot__Class** type_info = &type_info_ref;
        inline app::MoonEffectWispsRoot__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectWispsRoot__Class>(type_info, "Moon.EffectsFramework.Wisps", "MoonEffectWispsRoot");
        }
        inline app::MoonEffectWispsRoot* create() {
            return il2cpp::create_object<app::MoonEffectWispsRoot>(get_class());
        }
    } // namespace MoonEffectWispsRoot
} // namespace app::classes::types
