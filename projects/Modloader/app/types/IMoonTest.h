#pragma once
#include <Modloader/app/structs/IMoonTest.h>
#include <Modloader/app/structs/IMoonTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMoonTest {
        inline app::IMoonTest__Class** type_info() {
            static app::IMoonTest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMoonTest__Class**)(modloader::win::memory::resolve_rva(0x0478F268));
            }
            return cache;
        }
        inline app::IMoonTest__Class* get_class() {
            return il2cpp::get_class<app::IMoonTest__Class>(type_info(), "", "IMoonTest");
        }
    } // namespace IMoonTest
} // namespace app::classes::types
