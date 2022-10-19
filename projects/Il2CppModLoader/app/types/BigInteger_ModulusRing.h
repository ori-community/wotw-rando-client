#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BigInteger_ModulusRing {
        inline app::BigInteger_ModulusRing__Class** type_info = (app::BigInteger_ModulusRing__Class**)(modloader::win::memory::resolve_rva(0x04753778));
        inline app::BigInteger_ModulusRing__Class* get_class() {
            return il2cpp::get_nested_class<app::BigInteger_ModulusRing__Class>(type_info, "Mono.Math", "BigInteger", "ModulusRing");
        }
        inline app::BigInteger_ModulusRing* create() {
            return il2cpp::create_object<app::BigInteger_ModulusRing>(get_class());
        }
    } // namespace BigInteger_ModulusRing
} // namespace app::classes::types
