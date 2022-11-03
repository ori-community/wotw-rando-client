#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData {
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Class** type_info = (app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Class**)(modloader::win::memory::resolve_rva(0x04720170));
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Class>(type_info, "Moon.EffectsFramework", "MoonEffectGenericRevertibleData", "MoonEffectRevertibleParticleData");
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData>(get_class());
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array>(get_class(), size);
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array* create_array(const std::vector<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData*>& items) {
            return il2cpp::array_new<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array>(get_class(), items);
        }
    } // namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData
} // namespace app::classes::types
