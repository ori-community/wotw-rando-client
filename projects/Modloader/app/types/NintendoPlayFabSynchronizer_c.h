#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NintendoPlayFabSynchronizer_c__Class.h>
#include <Modloader/app/structs/NintendoPlayFabSynchronizer_c.h>

namespace app::classes::types {
    namespace NintendoPlayFabSynchronizer_c {
        inline app::NintendoPlayFabSynchronizer_c__Class** type_info = (app::NintendoPlayFabSynchronizer_c__Class**)(modloader::win::memory::resolve_rva(0x04736F48));
        inline app::NintendoPlayFabSynchronizer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::NintendoPlayFabSynchronizer_c__Class>(type_info, "SystemIntegration", "NintendoPlayFabSynchronizer", "<>c");
        }
        inline app::NintendoPlayFabSynchronizer_c* create() {
            return il2cpp::create_object<app::NintendoPlayFabSynchronizer_c>(get_class());
        }
    } // namespace NintendoPlayFabSynchronizer_c
} // namespace app::classes::types
