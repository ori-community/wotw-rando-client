#pragma once
#include <Modloader/app/structs/IByteUberState.h>
#include <Modloader/app/structs/IByteUberState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IByteUberState {
        inline app::IByteUberState__Class** type_info() {
            static app::IByteUberState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IByteUberState__Class**)(modloader::win::memory::resolve_rva(0x04734950));
            }
            return cache;
        }
        inline app::IByteUberState__Class* get_class() {
            return il2cpp::get_class<app::IByteUberState__Class>(type_info(), "Moon", "IByteUberState");
        }
    } // namespace IByteUberState
} // namespace app::classes::types
