#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IContext__Array {
        inline app::IContext__Array__Class** type_info = (app::IContext__Array__Class**)(modloader::win::memory::resolve_rva(0x04778198));
        inline app::IContext__Array__Class* get_class() {
            return il2cpp::get_class<app::IContext__Array__Class>(type_info, "", "IContext[]");
        }
        inline app::IContext__Array* create() {
            return il2cpp::create_object<app::IContext__Array>(get_class());
        }
    } // namespace IContext__Array
} // namespace app::classes::types
