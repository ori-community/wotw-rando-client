#pragma once
#include <Modloader/app/structs/HashAlgorithmName.h>
#include <Modloader/app/structs/HashAlgorithmName__Boxed.h>
#include <Modloader/app/structs/HashAlgorithmName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HashAlgorithmName {
        inline app::HashAlgorithmName__Class** type_info() {
            static app::HashAlgorithmName__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HashAlgorithmName__Class**)(modloader::win::memory::resolve_rva(0x047774E8));
            }
            return cache;
        }
        inline app::HashAlgorithmName__Class* get_class() {
            return il2cpp::get_class<app::HashAlgorithmName__Class>(type_info(), "System.Security.Cryptography", "HashAlgorithmName");
        }
        inline app::HashAlgorithmName* create() {
            return il2cpp::create_object<app::HashAlgorithmName>(get_class());
        }
        inline app::HashAlgorithmName__Boxed* box(app::HashAlgorithmName value) {
            return il2cpp::box_value<app::HashAlgorithmName__Boxed>(get_class(), value);
        }
    } // namespace HashAlgorithmName
} // namespace app::classes::types
