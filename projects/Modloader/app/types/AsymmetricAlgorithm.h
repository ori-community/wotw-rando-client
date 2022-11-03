#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsymmetricAlgorithm {
        inline app::AsymmetricAlgorithm__Class** type_info = (app::AsymmetricAlgorithm__Class**)(modloader::win::memory::resolve_rva(0x04739EA8));
        inline app::AsymmetricAlgorithm__Class* get_class() {
            return il2cpp::get_class<app::AsymmetricAlgorithm__Class>(type_info, "System.Security.Cryptography", "AsymmetricAlgorithm");
        }
        inline app::AsymmetricAlgorithm* create() {
            return il2cpp::create_object<app::AsymmetricAlgorithm>(get_class());
        }
    } // namespace AsymmetricAlgorithm
} // namespace app::classes::types
