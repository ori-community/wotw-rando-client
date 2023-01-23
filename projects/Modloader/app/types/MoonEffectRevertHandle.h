#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonEffectRevertHandle__Class.h>
#include <Modloader/app/structs/MoonEffectRevertHandle.h>
#include <Modloader/app/structs/MoonEffectRevertHandle__Array.h>

namespace app::classes::types {
    namespace MoonEffectRevertHandle {
        inline app::MoonEffectRevertHandle__Class** type_info = (app::MoonEffectRevertHandle__Class**)(modloader::win::memory::resolve_rva(0x04786BB0));
        inline app::MoonEffectRevertHandle__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectRevertHandle__Class>(type_info, "Moon.EffectsFramework", "MoonEffectRevertHandle");
        }
        inline app::MoonEffectRevertHandle* create() {
            return il2cpp::create_object<app::MoonEffectRevertHandle>(get_class());
        }
        inline app::MoonEffectRevertHandle__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonEffectRevertHandle__Array>(get_class(), size);
        }
        inline app::MoonEffectRevertHandle__Array* create_array(const std::vector<app::MoonEffectRevertHandle*>& items) {
            return il2cpp::array_new<app::MoonEffectRevertHandle__Array>(get_class(), items);
        }
    } // namespace MoonEffectRevertHandle
} // namespace app::classes::types
