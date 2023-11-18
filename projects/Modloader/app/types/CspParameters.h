#pragma once
#include <Modloader/app/structs/CspParameters.h>
#include <Modloader/app/structs/CspParameters__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CspParameters {
        inline app::CspParameters__Class** type_info() {
            static app::CspParameters__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CspParameters__Class**)(modloader::win::memory::resolve_rva(0x04761E80));
            }
            return cache;
        }
        inline app::CspParameters__Class* get_class() {
            return il2cpp::get_class<app::CspParameters__Class>(type_info(), "System.Security.Cryptography", "CspParameters");
        }
        inline app::CspParameters* create() {
            return il2cpp::create_object<app::CspParameters>(get_class());
        }
    } // namespace CspParameters
} // namespace app::classes::types
