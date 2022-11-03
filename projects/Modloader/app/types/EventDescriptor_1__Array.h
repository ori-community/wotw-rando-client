#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventDescriptor_1__Array {
        inline app::EventDescriptor_1__Array__Class** type_info = (app::EventDescriptor_1__Array__Class**)(modloader::win::memory::resolve_rva(0x047715D0));
        inline app::EventDescriptor_1__Array__Class* get_class() {
            return il2cpp::get_class<app::EventDescriptor_1__Array__Class>(type_info, "System.ComponentModel", "EventDescriptor[]");
        }
        inline app::EventDescriptor_1__Array* create() {
            return il2cpp::create_object<app::EventDescriptor_1__Array>(get_class());
        }
    } // namespace EventDescriptor_1__Array
} // namespace app::classes::types
