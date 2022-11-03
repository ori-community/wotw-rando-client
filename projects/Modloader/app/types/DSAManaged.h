#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DSAManaged {
        inline app::DSAManaged__Class** type_info = (app::DSAManaged__Class**)(modloader::win::memory::resolve_rva(0x04736AB0));
        inline app::DSAManaged__Class* get_class() {
            return il2cpp::get_class<app::DSAManaged__Class>(type_info, "Mono.Security.Cryptography", "DSAManaged");
        }
        inline app::DSAManaged* create() {
            return il2cpp::create_object<app::DSAManaged>(get_class());
        }
    } // namespace DSAManaged
} // namespace app::classes::types
