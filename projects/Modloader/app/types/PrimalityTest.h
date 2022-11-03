#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PrimalityTest {
        inline app::PrimalityTest__Class** type_info = (app::PrimalityTest__Class**)(modloader::win::memory::resolve_rva(0x04745CF0));
        inline app::PrimalityTest__Class* get_class() {
            return il2cpp::get_class<app::PrimalityTest__Class>(type_info, "Mono.Math.Prime", "PrimalityTest");
        }
        inline app::PrimalityTest* create() {
            return il2cpp::create_object<app::PrimalityTest>(get_class());
        }
    } // namespace PrimalityTest
} // namespace app::classes::types
