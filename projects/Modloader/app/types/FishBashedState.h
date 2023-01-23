#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FishBashedState__Class.h>
#include <Modloader/app/structs/FishBashedState.h>

namespace app::classes::types {
    namespace FishBashedState {
        inline app::FishBashedState__Class** type_info = (app::FishBashedState__Class**)(modloader::win::memory::resolve_rva(0x04778798));
        inline app::FishBashedState__Class* get_class() {
            return il2cpp::get_class<app::FishBashedState__Class>(type_info, "", "FishBashedState");
        }
        inline app::FishBashedState* create() {
            return il2cpp::create_object<app::FishBashedState>(get_class());
        }
    } // namespace FishBashedState
} // namespace app::classes::types
