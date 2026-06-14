#pragma once
#include <Modloader/app/structs/SeinHold.h>
#include <Modloader/app/structs/SeinHold__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinHold {
        inline app::SeinHold__Class** type_info() {
            static app::SeinHold__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinHold__Class**)(modloader::win::memory::resolve_rva(0x0473A918));
            }
            return cache;
        }
        inline app::SeinHold__Class* get_class() {
            return il2cpp::get_class<app::SeinHold__Class>(type_info(), "", "SeinHold");
        }
        inline app::SeinHold* create() {
            return il2cpp::create_object<app::SeinHold>(get_class());
        }
    } // namespace SeinHold
} // namespace app::classes::types
