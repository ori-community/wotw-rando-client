#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Guid__Array__Class.h>
#include <Modloader/app/structs/Guid__Array.h>

namespace app::classes::types {
    namespace Guid__Array {
        inline app::Guid__Array__Class** type_info = (app::Guid__Array__Class**)(modloader::win::memory::resolve_rva(0x04713DD0));
        inline app::Guid__Array__Class* get_class() {
            return il2cpp::get_class<app::Guid__Array__Class>(type_info, "System", "Guid[]");
        }
        inline app::Guid__Array* create() {
            return il2cpp::create_object<app::Guid__Array>(get_class());
        }
    } // namespace Guid__Array
} // namespace app::classes::types
