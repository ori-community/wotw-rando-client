#pragma once
#include <Modloader/app/structs/IIntUberState.h>
#include <Modloader/app/structs/IIntUberState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IIntUberState {
        inline app::IIntUberState__Class** type_info() {
            static app::IIntUberState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IIntUberState__Class**)(modloader::win::memory::resolve_rva(0x04764DD8));
            }
            return cache;
        }
        inline app::IIntUberState__Class* get_class() {
            return il2cpp::get_class<app::IIntUberState__Class>(type_info(), "Moon", "IIntUberState");
        }
    } // namespace IIntUberState
} // namespace app::classes::types
