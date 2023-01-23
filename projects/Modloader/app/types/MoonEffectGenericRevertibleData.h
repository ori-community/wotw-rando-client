#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData__Class.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData {
        namespace {
            inline app::MoonEffectGenericRevertibleData__Class* type_info_ref = nullptr;
        }
        inline app::MoonEffectGenericRevertibleData__Class** type_info = &type_info_ref;
        inline app::MoonEffectGenericRevertibleData__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectGenericRevertibleData__Class>(type_info, "Moon.EffectsFramework", "MoonEffectGenericRevertibleData");
        }
        inline app::MoonEffectGenericRevertibleData* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData>(get_class());
        }
    } // namespace MoonEffectGenericRevertibleData
} // namespace app::classes::types
