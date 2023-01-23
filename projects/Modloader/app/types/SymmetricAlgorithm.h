#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SymmetricAlgorithm__Class.h>
#include <Modloader/app/structs/SymmetricAlgorithm.h>

namespace app::classes::types {
    namespace SymmetricAlgorithm {
        inline app::SymmetricAlgorithm__Class** type_info = (app::SymmetricAlgorithm__Class**)(modloader::win::memory::resolve_rva(0x04722ED0));
        inline app::SymmetricAlgorithm__Class* get_class() {
            return il2cpp::get_class<app::SymmetricAlgorithm__Class>(type_info, "System.Security.Cryptography", "SymmetricAlgorithm");
        }
        inline app::SymmetricAlgorithm* create() {
            return il2cpp::create_object<app::SymmetricAlgorithm>(get_class());
        }
    } // namespace SymmetricAlgorithm
} // namespace app::classes::types
