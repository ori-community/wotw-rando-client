#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HashAlgorithm {
        inline app::HashAlgorithm__Class** type_info = (app::HashAlgorithm__Class**)(modloader::win::memory::resolve_rva(0x04787CC0));
        inline app::HashAlgorithm__Class* get_class() {
            return il2cpp::get_class<app::HashAlgorithm__Class>(type_info, "System.Security.Cryptography", "HashAlgorithm");
        }
        inline app::HashAlgorithm* create() {
            return il2cpp::create_object<app::HashAlgorithm>(get_class());
        }
    } // namespace HashAlgorithm
} // namespace app::classes::types
