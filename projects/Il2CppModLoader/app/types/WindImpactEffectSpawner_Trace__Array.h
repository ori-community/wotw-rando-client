#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WindImpactEffectSpawner_Trace__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WindImpactEffectSpawner_Trace__Array__Class** type_info;
        inline app::WindImpactEffectSpawner_Trace__Array__Class* get_class() {
            return il2cpp::get_class<app::WindImpactEffectSpawner_Trace__Array__Class>(type_info, "", "WindImpactEffectSpawner+Trace[]");
        }
        inline app::WindImpactEffectSpawner_Trace__Array* create() {
            return il2cpp::create_object<app::WindImpactEffectSpawner_Trace__Array>(get_class());
        }
    } // namespace WindImpactEffectSpawner_Trace__Array
} // namespace app::classes::types
