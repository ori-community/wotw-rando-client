#pragma once
#include <Modloader/app/structs/PrimalityTest_1.h>
#include <Modloader/app/structs/PrimalityTest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrimalityTest_1 {
        inline app::PrimalityTest_1__Class** type_info() {
            static app::PrimalityTest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PrimalityTest_1__Class**)(modloader::win::memory::resolve_rva(0x0473EDD0));
            }
            return cache;
        }
        inline app::PrimalityTest_1__Class* get_class() {
            return il2cpp::get_class<app::PrimalityTest_1__Class>(type_info(), "Mono.Math.Prime", "PrimalityTest");
        }
        inline app::PrimalityTest_1* create() {
            return il2cpp::create_object<app::PrimalityTest_1>(get_class());
        }
    } // namespace PrimalityTest_1
} // namespace app::classes::types
