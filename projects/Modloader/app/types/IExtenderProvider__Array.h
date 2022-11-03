#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IExtenderProvider__Array {
        inline app::IExtenderProvider__Array__Class** type_info = (app::IExtenderProvider__Array__Class**)(modloader::win::memory::resolve_rva(0x04768D40));
        inline app::IExtenderProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::IExtenderProvider__Array__Class>(type_info, "System.ComponentModel", "IExtenderProvider[]");
        }
        inline app::IExtenderProvider__Array* create() {
            return il2cpp::create_object<app::IExtenderProvider__Array>(get_class());
        }
    } // namespace IExtenderProvider__Array
} // namespace app::classes::types
