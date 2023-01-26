#pragma once
#include <Modloader/app/structs/PrimalityTest.h>
#include <Modloader/app/structs/PrimalityTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrimalityTest {
        inline app::PrimalityTest__Class** type_info() {
            static app::PrimalityTest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PrimalityTest__Class**)(modloader::win::memory::resolve_rva(0x04745CF0));
            }
            return cache;
        }
        inline app::PrimalityTest__Class* get_class() {
            return il2cpp::get_class<app::PrimalityTest__Class>(type_info(), "Mono.Math.Prime", "PrimalityTest");
        }
        inline app::PrimalityTest* create() {
            return il2cpp::create_object<app::PrimalityTest>(get_class());
        }
    } // namespace PrimalityTest
} // namespace app::classes::types
