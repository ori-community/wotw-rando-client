#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KillCounterDisplay {
        namespace {
            inline app::KillCounterDisplay__Class* type_info_ref = nullptr;
        }
        inline app::KillCounterDisplay__Class** type_info = &type_info_ref;
        inline app::KillCounterDisplay__Class* get_class() {
            return il2cpp::get_class<app::KillCounterDisplay__Class>(type_info, "", "KillCounterDisplay");
        }
        inline app::KillCounterDisplay* create() {
            return il2cpp::create_object<app::KillCounterDisplay>(get_class());
        }
    } // namespace KillCounterDisplay
} // namespace app::classes::types
