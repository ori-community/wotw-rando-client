#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RammingRetreatState__Class.h>
#include <Modloader/app/structs/RammingRetreatState.h>

namespace app::classes::types {
    namespace RammingRetreatState {
        inline app::RammingRetreatState__Class** type_info = (app::RammingRetreatState__Class**)(modloader::win::memory::resolve_rva(0x047994E0));
        inline app::RammingRetreatState__Class* get_class() {
            return il2cpp::get_class<app::RammingRetreatState__Class>(type_info, "", "RammingRetreatState");
        }
        inline app::RammingRetreatState* create() {
            return il2cpp::create_object<app::RammingRetreatState>(get_class());
        }
    } // namespace RammingRetreatState
} // namespace app::classes::types
