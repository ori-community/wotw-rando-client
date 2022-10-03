#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberAtlasPrewarmContainer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberAtlasPrewarmContainer__Class** type_info;
        inline app::UberAtlasPrewarmContainer__Class* get_class() {
            return il2cpp::get_class<app::UberAtlasPrewarmContainer__Class>(type_info, "UberShader.optimizations.atlassing", "UberAtlasPrewarmContainer");
        }
        inline app::UberAtlasPrewarmContainer* create() {
            return il2cpp::create_object<app::UberAtlasPrewarmContainer>(get_class());
        }
    } // namespace UberAtlasPrewarmContainer
} // namespace app::classes::types
