#pragma once
#include <Modloader/app/structs/MidpointRounding__Enum.h>
#include <Modloader/app/structs/MidpointRounding__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MidpointRounding__Enum {
        inline app::MidpointRounding__Enum__Class** type_info() {
            static app::MidpointRounding__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MidpointRounding__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476C780));
            }
            return cache;
        }
        inline app::MidpointRounding__Enum__Class* get_class() {
            return il2cpp::get_class<app::MidpointRounding__Enum__Class>(type_info(), "System", "MidpointRounding");
        }
        inline app::MidpointRounding__Enum* create() {
            return il2cpp::create_object<app::MidpointRounding__Enum>(get_class());
        }
    } // namespace MidpointRounding__Enum
} // namespace app::classes::types
