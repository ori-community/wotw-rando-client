#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICredentials__Array {
        inline app::ICredentials__Array__Class** type_info = (app::ICredentials__Array__Class**)(modloader::win::memory::resolve_rva(0x0477BC50));
        inline app::ICredentials__Array__Class* get_class() {
            return il2cpp::get_class<app::ICredentials__Array__Class>(type_info, "System.Net", "ICredentials[]");
        }
        inline app::ICredentials__Array* create() {
            return il2cpp::create_object<app::ICredentials__Array>(get_class());
        }
    } // namespace ICredentials__Array
} // namespace app::classes::types
