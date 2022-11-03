#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventInfo_1__Array {
        inline app::EventInfo_1__Array__Class** type_info = (app::EventInfo_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04758968));
        inline app::EventInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::EventInfo_1__Array__Class>(type_info, "System.Reflection", "EventInfo[]");
        }
        inline app::EventInfo_1__Array* create() {
            return il2cpp::create_object<app::EventInfo_1__Array>(get_class());
        }
    } // namespace EventInfo_1__Array
} // namespace app::classes::types
