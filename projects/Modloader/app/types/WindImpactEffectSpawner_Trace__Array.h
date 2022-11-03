#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WindImpactEffectSpawner_Trace__Array {
        inline app::WindImpactEffectSpawner_Trace__Array__Class** type_info = (app::WindImpactEffectSpawner_Trace__Array__Class**)(modloader::win::memory::resolve_rva(0x04785BC0));
        inline app::WindImpactEffectSpawner_Trace__Array__Class* get_class() {
            return il2cpp::get_class<app::WindImpactEffectSpawner_Trace__Array__Class>(type_info, "", "WindImpactEffectSpawner+Trace[]");
        }
        inline app::WindImpactEffectSpawner_Trace__Array* create() {
            return il2cpp::create_object<app::WindImpactEffectSpawner_Trace__Array>(get_class());
        }
    } // namespace WindImpactEffectSpawner_Trace__Array
} // namespace app::classes::types
