#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocalDefinition__Array {
        inline app::LocalDefinition__Array__Class** type_info = (app::LocalDefinition__Array__Class**)(modloader::win::memory::resolve_rva(0x04738FB8));
        inline app::LocalDefinition__Array__Class* get_class() {
            return il2cpp::get_class<app::LocalDefinition__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "LocalDefinition[]");
        }
        inline app::LocalDefinition__Array* create() {
            return il2cpp::create_object<app::LocalDefinition__Array>(get_class());
        }
    } // namespace LocalDefinition__Array
} // namespace app::classes::types
