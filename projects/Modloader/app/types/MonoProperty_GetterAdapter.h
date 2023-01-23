#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MonoProperty_GetterAdapter__Class.h>
#include <Modloader/app/structs/MonoProperty_GetterAdapter.h>

namespace app::classes::types {
    namespace MonoProperty_GetterAdapter {
        inline app::MonoProperty_GetterAdapter__Class** type_info = (app::MonoProperty_GetterAdapter__Class**)(modloader::win::memory::resolve_rva(0x0476F948));
        inline app::MonoProperty_GetterAdapter__Class* get_class() {
            return il2cpp::get_nested_class<app::MonoProperty_GetterAdapter__Class>(type_info, "System.Reflection", "MonoProperty", "GetterAdapter");
        }
        inline app::MonoProperty_GetterAdapter* create() {
            return il2cpp::create_object<app::MonoProperty_GetterAdapter>(get_class());
        }
    } // namespace MonoProperty_GetterAdapter
} // namespace app::classes::types
