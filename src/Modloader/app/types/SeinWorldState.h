#pragma once
#include <Modloader/app/structs/SeinWorldState.h>
#include <Modloader/app/structs/SeinWorldState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinWorldState {
        inline app::SeinWorldState__Class** type_info() {
            static app::SeinWorldState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinWorldState__Class**)(modloader::win::memory::resolve_rva(0x04738518));
            }
            return cache;
        }
        inline app::SeinWorldState__Class* get_class() {
            return il2cpp::get_class<app::SeinWorldState__Class>(type_info(), "", "SeinWorldState");
        }
        inline app::SeinWorldState* create() {
            return il2cpp::create_object<app::SeinWorldState>(get_class());
        }
    } // namespace SeinWorldState
} // namespace app::classes::types
