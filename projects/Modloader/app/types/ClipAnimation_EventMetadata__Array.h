#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClipAnimation_EventMetadata__Array {
        inline app::ClipAnimation_EventMetadata__Array__Class** type_info = (app::ClipAnimation_EventMetadata__Array__Class**)(modloader::win::memory::resolve_rva(0x04789958));
        inline app::ClipAnimation_EventMetadata__Array__Class* get_class() {
            return il2cpp::get_class<app::ClipAnimation_EventMetadata__Array__Class>(type_info, "Moon", "ClipAnimation+EventMetadata[]");
        }
        inline app::ClipAnimation_EventMetadata__Array* create() {
            return il2cpp::create_object<app::ClipAnimation_EventMetadata__Array>(get_class());
        }
    } // namespace ClipAnimation_EventMetadata__Array
} // namespace app::classes::types
