#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Boolean__Array__Class.h>
#include <Modloader/app/structs/Boolean__Array.h>

namespace app::classes::types {
    namespace Boolean__Array {
        inline app::Boolean__Array__Class** type_info = (app::Boolean__Array__Class**)(modloader::win::memory::resolve_rva(0x04717AB0));
        inline app::Boolean__Array__Class* get_class() {
            return il2cpp::get_class<app::Boolean__Array__Class>(type_info, "System", "Boolean[]");
        }
        inline app::Boolean__Array* create() {
            return il2cpp::create_object<app::Boolean__Array>(get_class());
        }
    } // namespace Boolean__Array
} // namespace app::classes::types
