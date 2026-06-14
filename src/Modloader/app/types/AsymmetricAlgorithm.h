#pragma once
#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/AsymmetricAlgorithm__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsymmetricAlgorithm {
        inline app::AsymmetricAlgorithm__Class** type_info() {
            static app::AsymmetricAlgorithm__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AsymmetricAlgorithm__Class**)(modloader::win::memory::resolve_rva(0x04739EA8));
            }
            return cache;
        }
        inline app::AsymmetricAlgorithm__Class* get_class() {
            return il2cpp::get_class<app::AsymmetricAlgorithm__Class>(type_info(), "System.Security.Cryptography", "AsymmetricAlgorithm");
        }
        inline app::AsymmetricAlgorithm* create() {
            return il2cpp::create_object<app::AsymmetricAlgorithm>(get_class());
        }
    } // namespace AsymmetricAlgorithm
} // namespace app::classes::types
