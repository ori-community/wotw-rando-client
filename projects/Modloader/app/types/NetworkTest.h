#pragma once
#include <Modloader/app/structs/NetworkTest.h>
#include <Modloader/app/structs/NetworkTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NetworkTest {
        inline app::NetworkTest__Class** type_info() {
            static app::NetworkTest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NetworkTest__Class**)(modloader::win::memory::resolve_rva(0x04704180));
            }
            return cache;
        }
        inline app::NetworkTest__Class* get_class() {
            return il2cpp::get_class<app::NetworkTest__Class>(type_info(), "", "NetworkTest");
        }
        inline app::NetworkTest* create() {
            return il2cpp::create_object<app::NetworkTest>(get_class());
        }
    } // namespace NetworkTest
} // namespace app::classes::types
