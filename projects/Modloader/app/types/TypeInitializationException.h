#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeInitializationException {
        inline app::TypeInitializationException__Class** type_info = (app::TypeInitializationException__Class**)(modloader::win::memory::resolve_rva(0x047847B0));
        inline app::TypeInitializationException__Class* get_class() {
            return il2cpp::get_class<app::TypeInitializationException__Class>(type_info, "System", "TypeInitializationException");
        }
        inline app::TypeInitializationException* create() {
            return il2cpp::create_object<app::TypeInitializationException>(get_class());
        }
    } // namespace TypeInitializationException
} // namespace app::classes::types
