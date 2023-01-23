#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FrameTiming__Array__Class.h>
#include <Modloader/app/structs/FrameTiming__Array.h>

namespace app::classes::types {
    namespace FrameTiming__Array {
        inline app::FrameTiming__Array__Class** type_info = (app::FrameTiming__Array__Class**)(modloader::win::memory::resolve_rva(0x04780450));
        inline app::FrameTiming__Array__Class* get_class() {
            return il2cpp::get_class<app::FrameTiming__Array__Class>(type_info, "UnityEngine", "FrameTiming[]");
        }
        inline app::FrameTiming__Array* create() {
            return il2cpp::create_object<app::FrameTiming__Array>(get_class());
        }
    } // namespace FrameTiming__Array
} // namespace app::classes::types
