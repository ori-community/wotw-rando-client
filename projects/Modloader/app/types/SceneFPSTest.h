#pragma once
#include <Modloader/app/structs/SceneFPSTest.h>
#include <Modloader/app/structs/SceneFPSTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneFPSTest {
        inline app::SceneFPSTest__Class** type_info() {
            static app::SceneFPSTest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneFPSTest__Class**)(modloader::win::memory::resolve_rva(0x0472ED60));
            }
            return cache;
        }
        inline app::SceneFPSTest__Class* get_class() {
            return il2cpp::get_class<app::SceneFPSTest__Class>(type_info(), "", "SceneFPSTest");
        }
        inline app::SceneFPSTest* create() {
            return il2cpp::create_object<app::SceneFPSTest>(get_class());
        }
    } // namespace SceneFPSTest
} // namespace app::classes::types
