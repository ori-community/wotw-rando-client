#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MarshalByRefObject {
        inline app::MarshalByRefObject__Class** type_info = (app::MarshalByRefObject__Class**)(modloader::win::memory::resolve_rva(0x04706818));
        inline app::MarshalByRefObject__Class* get_class() {
            return il2cpp::get_class<app::MarshalByRefObject__Class>(type_info, "System", "MarshalByRefObject");
        }
        inline app::MarshalByRefObject* create() {
            return il2cpp::create_object<app::MarshalByRefObject>(get_class());
        }
    } // namespace MarshalByRefObject
} // namespace app::classes::types
