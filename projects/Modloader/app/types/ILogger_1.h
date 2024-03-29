#pragma once
#include <Modloader/app/structs/ILogger_1.h>
#include <Modloader/app/structs/ILogger_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ILogger_1 {
        inline app::ILogger_1__Class** type_info() {
            static app::ILogger_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ILogger_1__Class**)(modloader::win::memory::resolve_rva(0x047644E8));
            }
            return cache;
        }
        inline app::ILogger_1__Class* get_class() {
            return il2cpp::get_class<app::ILogger_1__Class>(type_info(), "PlayFab.Logger", "ILogger");
        }
    } // namespace ILogger_1
} // namespace app::classes::types
