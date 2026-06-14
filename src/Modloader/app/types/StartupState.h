#pragma once
#include <Modloader/app/structs/StartupState.h>
#include <Modloader/app/structs/StartupState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StartupState {
        inline app::StartupState__Class** type_info() {
            static app::StartupState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StartupState__Class**)(modloader::win::memory::resolve_rva(0x04792540));
            }
            return cache;
        }
        inline app::StartupState__Class* get_class() {
            return il2cpp::get_class<app::StartupState__Class>(type_info(), "", "StartupState");
        }
        inline app::StartupState* create() {
            return il2cpp::create_object<app::StartupState>(get_class());
        }
    } // namespace StartupState
} // namespace app::classes::types
