#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ContactPoint__Array__Class.h>
#include <Modloader/app/structs/ContactPoint__Array.h>

namespace app::classes::types {
    namespace ContactPoint__Array {
        inline app::ContactPoint__Array__Class** type_info = (app::ContactPoint__Array__Class**)(modloader::win::memory::resolve_rva(0x04715B40));
        inline app::ContactPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::ContactPoint__Array__Class>(type_info, "UnityEngine", "ContactPoint[]");
        }
        inline app::ContactPoint__Array* create() {
            return il2cpp::create_object<app::ContactPoint__Array>(get_class());
        }
    } // namespace ContactPoint__Array
} // namespace app::classes::types
