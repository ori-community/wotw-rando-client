#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/X509ChainElementEnumerator__Class.h>
#include <Modloader/app/structs/X509ChainElementEnumerator.h>

namespace app::classes::types {
    namespace X509ChainElementEnumerator {
        inline app::X509ChainElementEnumerator__Class** type_info = (app::X509ChainElementEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04754458));
        inline app::X509ChainElementEnumerator__Class* get_class() {
            return il2cpp::get_class<app::X509ChainElementEnumerator__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509ChainElementEnumerator");
        }
        inline app::X509ChainElementEnumerator* create() {
            return il2cpp::create_object<app::X509ChainElementEnumerator>(get_class());
        }
    } // namespace X509ChainElementEnumerator
} // namespace app::classes::types
