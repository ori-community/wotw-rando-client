#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RacePrepareState__Class.h>
#include <Modloader/app/structs/RacePrepareState.h>

namespace app::classes::types {
    namespace RacePrepareState {
        inline app::RacePrepareState__Class** type_info = (app::RacePrepareState__Class**)(modloader::win::memory::resolve_rva(0x0476A100));
        inline app::RacePrepareState__Class* get_class() {
            return il2cpp::get_class<app::RacePrepareState__Class>(type_info, "", "RacePrepareState");
        }
        inline app::RacePrepareState* create() {
            return il2cpp::create_object<app::RacePrepareState>(get_class());
        }
    } // namespace RacePrepareState
} // namespace app::classes::types
