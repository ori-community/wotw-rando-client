#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IScenesManagerBehaviour__Array__Class.h>
#include <Modloader/app/structs/IScenesManagerBehaviour__Array.h>

namespace app::classes::types {
    namespace IScenesManagerBehaviour__Array {
        inline app::IScenesManagerBehaviour__Array__Class** type_info = (app::IScenesManagerBehaviour__Array__Class**)(modloader::win::memory::resolve_rva(0x04794178));
        inline app::IScenesManagerBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::IScenesManagerBehaviour__Array__Class>(type_info, "", "IScenesManagerBehaviour[]");
        }
        inline app::IScenesManagerBehaviour__Array* create() {
            return il2cpp::create_object<app::IScenesManagerBehaviour__Array>(get_class());
        }
    } // namespace IScenesManagerBehaviour__Array
} // namespace app::classes::types
