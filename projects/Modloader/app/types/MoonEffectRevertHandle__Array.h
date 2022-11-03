#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonEffectRevertHandle__Array {
        namespace {
            inline app::MoonEffectRevertHandle__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonEffectRevertHandle__Array__Class** type_info = &type_info_ref;
        inline app::MoonEffectRevertHandle__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectRevertHandle__Array__Class>(type_info, "Moon.EffectsFramework", "MoonEffectRevertHandle[]");
        }
        inline app::MoonEffectRevertHandle__Array* create() {
            return il2cpp::create_object<app::MoonEffectRevertHandle__Array>(get_class());
        }
    } // namespace MoonEffectRevertHandle__Array
} // namespace app::classes::types
