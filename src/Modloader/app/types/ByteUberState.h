#pragma once
#include <Modloader/app/structs/ByteUberState.h>
#include <Modloader/app/structs/ByteUberState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ByteUberState {
        inline app::ByteUberState__Class** type_info() {
            static app::ByteUberState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ByteUberState__Class**)(modloader::win::memory::resolve_rva(0x04798970));
            }
            return cache;
        }
        inline app::ByteUberState__Class* get_class() {
            return il2cpp::get_class<app::ByteUberState__Class>(type_info(), "Moon", "ByteUberState");
        }
        inline app::ByteUberState* create() {
            return il2cpp::create_object<app::ByteUberState>(get_class());
        }
    } // namespace ByteUberState
} // namespace app::classes::types
