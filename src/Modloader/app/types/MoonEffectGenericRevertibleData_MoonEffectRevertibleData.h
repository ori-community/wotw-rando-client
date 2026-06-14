#pragma once
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleData.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleData {
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Class** type_info() {
            static app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Class**)(modloader::win::memory::resolve_rva(0x047218B8));
            }
            return cache;
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Class>(type_info(), "Moon.EffectsFramework", "MoonEffectGenericRevertibleData", "MoonEffectRevertibleData");
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData>(get_class());
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array>(get_class(), size);
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array* create_array(const std::vector<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData*>& items) {
            return il2cpp::array_new<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array>(get_class(), items);
        }
    } // namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleData
} // namespace app::classes::types
