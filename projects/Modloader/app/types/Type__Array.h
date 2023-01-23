#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Type__Array__Class.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::types {
    namespace Type__Array {
        inline app::Type__Array__Class** type_info = (app::Type__Array__Class**)(modloader::win::memory::resolve_rva(0x04767038));
        inline app::Type__Array__Class* get_class() {
            return il2cpp::get_class<app::Type__Array__Class>(type_info, "System", "Type[]");
        }
        inline app::Type__Array* create() {
            return il2cpp::create_object<app::Type__Array>(get_class());
        }
    } // namespace Type__Array
} // namespace app::classes::types
