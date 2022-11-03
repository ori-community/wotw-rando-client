#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CompiledIdentityConstraint__Array {
        inline app::CompiledIdentityConstraint__Array__Class** type_info = (app::CompiledIdentityConstraint__Array__Class**)(modloader::win::memory::resolve_rva(0x0470E700));
        inline app::CompiledIdentityConstraint__Array__Class* get_class() {
            return il2cpp::get_class<app::CompiledIdentityConstraint__Array__Class>(type_info, "System.Xml.Schema", "CompiledIdentityConstraint[]");
        }
        inline app::CompiledIdentityConstraint__Array* create() {
            return il2cpp::create_object<app::CompiledIdentityConstraint__Array>(get_class());
        }
    } // namespace CompiledIdentityConstraint__Array
} // namespace app::classes::types
