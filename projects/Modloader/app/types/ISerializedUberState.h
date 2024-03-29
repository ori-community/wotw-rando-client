#pragma once
#include <Modloader/app/structs/ISerializedUberState.h>
#include <Modloader/app/structs/ISerializedUberState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISerializedUberState {
        inline app::ISerializedUberState__Class** type_info() {
            static app::ISerializedUberState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISerializedUberState__Class**)(modloader::win::memory::resolve_rva(0x0476D8E8));
            }
            return cache;
        }
        inline app::ISerializedUberState__Class* get_class() {
            return il2cpp::get_class<app::ISerializedUberState__Class>(type_info(), "Moon", "ISerializedUberState");
        }
    } // namespace ISerializedUberState
} // namespace app::classes::types
