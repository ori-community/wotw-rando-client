#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HashAlgorithmName__Class.h>
#include <Modloader/app/structs/HashAlgorithmName.h>
#include <Modloader/app/structs/HashAlgorithmName__Boxed.h>

namespace app::classes::types {
    namespace HashAlgorithmName {
        inline app::HashAlgorithmName__Class** type_info = (app::HashAlgorithmName__Class**)(modloader::win::memory::resolve_rva(0x047774E8));
        inline app::HashAlgorithmName__Class* get_class() {
            return il2cpp::get_class<app::HashAlgorithmName__Class>(type_info, "System.Security.Cryptography", "HashAlgorithmName");
        }
        inline app::HashAlgorithmName* create() {
            return il2cpp::create_object<app::HashAlgorithmName>(get_class());
        }
        inline app::HashAlgorithmName__Boxed* box(app::HashAlgorithmName value) {
            return il2cpp::box_value<app::HashAlgorithmName__Boxed>(get_class(), value);
        }
    } // namespace HashAlgorithmName
} // namespace app::classes::types
