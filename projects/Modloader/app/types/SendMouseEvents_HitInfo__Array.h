#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SendMouseEvents_HitInfo__Array__Class.h>
#include <Modloader/app/structs/SendMouseEvents_HitInfo__Array.h>

namespace app::classes::types {
    namespace SendMouseEvents_HitInfo__Array {
        inline app::SendMouseEvents_HitInfo__Array__Class** type_info = (app::SendMouseEvents_HitInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04756D48));
        inline app::SendMouseEvents_HitInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SendMouseEvents_HitInfo__Array__Class>(type_info, "UnityEngine", "SendMouseEvents+HitInfo[]");
        }
        inline app::SendMouseEvents_HitInfo__Array* create() {
            return il2cpp::create_object<app::SendMouseEvents_HitInfo__Array>(get_class());
        }
    } // namespace SendMouseEvents_HitInfo__Array
} // namespace app::classes::types
