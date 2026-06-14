#pragma once
#include <Modloader/app/structs/EventInfo_1__Array.h>
#include <Modloader/app/structs/EventInfo_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventInfo_1__Array {
        inline app::EventInfo_1__Array__Class** type_info() {
            static app::EventInfo_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventInfo_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04758968));
            }
            return cache;
        }
        inline app::EventInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::EventInfo_1__Array__Class>(type_info(), "System.Reflection", "EventInfo[]");
        }
        inline app::EventInfo_1__Array* create() {
            return il2cpp::create_object<app::EventInfo_1__Array>(get_class());
        }
    } // namespace EventInfo_1__Array
} // namespace app::classes::types
