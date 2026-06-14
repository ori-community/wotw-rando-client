#pragma once
#include <Modloader/app/structs/WindImpactEffectSpawner_Trace.h>
#include <Modloader/app/structs/WindImpactEffectSpawner_Trace__Array.h>
#include <Modloader/app/structs/WindImpactEffectSpawner_Trace__Boxed.h>
#include <Modloader/app/structs/WindImpactEffectSpawner_Trace__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindImpactEffectSpawner_Trace {
        inline app::WindImpactEffectSpawner_Trace__Class** type_info() {
            static app::WindImpactEffectSpawner_Trace__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WindImpactEffectSpawner_Trace__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WindImpactEffectSpawner_Trace__Class* get_class() {
            return il2cpp::get_nested_class<app::WindImpactEffectSpawner_Trace__Class>(type_info(), "", "WindImpactEffectSpawner", "Trace");
        }
        inline app::WindImpactEffectSpawner_Trace* create() {
            return il2cpp::create_object<app::WindImpactEffectSpawner_Trace>(get_class());
        }
        inline app::WindImpactEffectSpawner_Trace__Boxed* box(app::WindImpactEffectSpawner_Trace value) {
            return il2cpp::box_value<app::WindImpactEffectSpawner_Trace__Boxed>(get_class(), value);
        }
        inline app::WindImpactEffectSpawner_Trace__Array* create_array(int size) {
            return il2cpp::array_new<app::WindImpactEffectSpawner_Trace__Array>(get_class(), size);
        }
        inline app::WindImpactEffectSpawner_Trace__Array* create_array(const std::vector<app::WindImpactEffectSpawner_Trace>& items) {
            return il2cpp::array_new<app::WindImpactEffectSpawner_Trace__Array>(get_class(), items);
        }
    } // namespace WindImpactEffectSpawner_Trace
} // namespace app::classes::types
