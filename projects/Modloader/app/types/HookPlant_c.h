#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HookPlant_c__Class.h>
#include <Modloader/app/structs/HookPlant_c.h>

namespace app::classes::types {
    namespace HookPlant_c {
        inline app::HookPlant_c__Class** type_info = (app::HookPlant_c__Class**)(modloader::win::memory::resolve_rva(0x047967C8));
        inline app::HookPlant_c__Class* get_class() {
            return il2cpp::get_nested_class<app::HookPlant_c__Class>(type_info, "", "HookPlant", "<>c");
        }
        inline app::HookPlant_c* create() {
            return il2cpp::create_object<app::HookPlant_c>(get_class());
        }
    } // namespace HookPlant_c
} // namespace app::classes::types
