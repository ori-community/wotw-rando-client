#pragma once
#include <Modloader/app/structs/SymmetricAlgorithm.h>
#include <Modloader/app/structs/SymmetricAlgorithm__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SymmetricAlgorithm {
        inline app::SymmetricAlgorithm__Class** type_info() {
            static app::SymmetricAlgorithm__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SymmetricAlgorithm__Class**)(modloader::win::memory::resolve_rva(0x04722ED0));
            }
            return cache;
        }
        inline app::SymmetricAlgorithm__Class* get_class() {
            return il2cpp::get_class<app::SymmetricAlgorithm__Class>(type_info(), "System.Security.Cryptography", "SymmetricAlgorithm");
        }
        inline app::SymmetricAlgorithm* create() {
            return il2cpp::create_object<app::SymmetricAlgorithm>(get_class());
        }
    } // namespace SymmetricAlgorithm
} // namespace app::classes::types
