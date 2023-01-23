#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WindImpactEffectSpawner__Class.h>
#include <Modloader/app/structs/WindImpactEffectSpawner.h>

namespace app::classes::types {
    namespace WindImpactEffectSpawner {
        namespace {
            inline app::WindImpactEffectSpawner__Class* type_info_ref = nullptr;
        }
        inline app::WindImpactEffectSpawner__Class** type_info = &type_info_ref;
        inline app::WindImpactEffectSpawner__Class* get_class() {
            return il2cpp::get_class<app::WindImpactEffectSpawner__Class>(type_info, "", "WindImpactEffectSpawner");
        }
        inline app::WindImpactEffectSpawner* create() {
            return il2cpp::create_object<app::WindImpactEffectSpawner>(get_class());
        }
    } // namespace WindImpactEffectSpawner
} // namespace app::classes::types
