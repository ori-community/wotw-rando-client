#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BigInteger_ModulusRing_1__Class.h>
#include <Modloader/app/structs/BigInteger_ModulusRing_1.h>

namespace app::classes::types {
    namespace BigInteger_ModulusRing_1 {
        inline app::BigInteger_ModulusRing_1__Class** type_info = (app::BigInteger_ModulusRing_1__Class**)(modloader::win::memory::resolve_rva(0x0474B248));
        inline app::BigInteger_ModulusRing_1__Class* get_class() {
            return il2cpp::get_nested_class<app::BigInteger_ModulusRing_1__Class>(type_info, "Mono.Math", "BigInteger", "ModulusRing");
        }
        inline app::BigInteger_ModulusRing_1* create() {
            return il2cpp::create_object<app::BigInteger_ModulusRing_1>(get_class());
        }
    } // namespace BigInteger_ModulusRing_1
} // namespace app::classes::types
