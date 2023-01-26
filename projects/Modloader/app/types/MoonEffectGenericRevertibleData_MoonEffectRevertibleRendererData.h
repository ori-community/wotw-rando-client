#pragma once
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData {
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Class** type_info() {
            static app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Class**)(modloader::win::memory::resolve_rva(0x0472DB80));
            }
            return cache;
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Class>(type_info(), "Moon.EffectsFramework", "MoonEffectGenericRevertibleData", "MoonEffectRevertibleRendererData");
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData>(get_class());
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array>(get_class(), size);
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array* create_array(const std::vector<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData*>& items) {
            return il2cpp::array_new<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array>(get_class(), items);
        }
    } // namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData
} // namespace app::classes::types
