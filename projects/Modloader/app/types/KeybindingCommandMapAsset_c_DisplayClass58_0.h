#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KeybindingCommandMapAsset_c_DisplayClass58_0__Class.h>
#include <Modloader/app/structs/KeybindingCommandMapAsset_c_DisplayClass58_0.h>

namespace app::classes::types {
    namespace KeybindingCommandMapAsset_c_DisplayClass58_0 {
        inline app::KeybindingCommandMapAsset_c_DisplayClass58_0__Class** type_info = (app::KeybindingCommandMapAsset_c_DisplayClass58_0__Class**)(modloader::win::memory::resolve_rva(0x0477D080));
        inline app::KeybindingCommandMapAsset_c_DisplayClass58_0__Class* get_class() {
            return il2cpp::get_nested_class<app::KeybindingCommandMapAsset_c_DisplayClass58_0__Class>(type_info, "", "KeybindingCommandMapAsset", "<>c__DisplayClass58_0");
        }
        inline app::KeybindingCommandMapAsset_c_DisplayClass58_0* create() {
            return il2cpp::create_object<app::KeybindingCommandMapAsset_c_DisplayClass58_0>(get_class());
        }
    } // namespace KeybindingCommandMapAsset_c_DisplayClass58_0
} // namespace app::classes::types
