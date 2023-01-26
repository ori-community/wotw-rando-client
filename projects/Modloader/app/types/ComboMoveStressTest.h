#pragma once
#include <Modloader/app/structs/ComboMoveStressTest.h>
#include <Modloader/app/structs/ComboMoveStressTest__Array.h>
#include <Modloader/app/structs/ComboMoveStressTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComboMoveStressTest {
        inline app::ComboMoveStressTest__Class** type_info() {
            static app::ComboMoveStressTest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ComboMoveStressTest__Class**)(modloader::win::memory::resolve_rva(0x04761E50));
            }
            return cache;
        }
        inline app::ComboMoveStressTest__Class* get_class() {
            return il2cpp::get_class<app::ComboMoveStressTest__Class>(type_info(), "", "ComboMoveStressTest");
        }
        inline app::ComboMoveStressTest* create() {
            return il2cpp::create_object<app::ComboMoveStressTest>(get_class());
        }
        inline app::ComboMoveStressTest__Array* create_array(int size) {
            return il2cpp::array_new<app::ComboMoveStressTest__Array>(get_class(), size);
        }
        inline app::ComboMoveStressTest__Array* create_array(const std::vector<app::ComboMoveStressTest*>& items) {
            return il2cpp::array_new<app::ComboMoveStressTest__Array>(get_class(), items);
        }
    } // namespace ComboMoveStressTest
} // namespace app::classes::types
