#pragma once
#include <Modloader/app/structs/IStressTest.h>
#include <Modloader/app/structs/IStressTest__Array.h>
#include <Modloader/app/structs/IStressTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IStressTest {
        inline app::IStressTest__Class** type_info() {
            static app::IStressTest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IStressTest__Class**)(modloader::win::memory::resolve_rva(0x04778190));
            }
            return cache;
        }
        inline app::IStressTest__Class* get_class() {
            return il2cpp::get_class<app::IStressTest__Class>(type_info(), "", "IStressTest");
        }
        inline app::IStressTest__Array* create_array(int size) {
            return il2cpp::array_new<app::IStressTest__Array>(get_class(), size);
        }
        inline app::IStressTest__Array* create_array(const std::vector<app::IStressTest*>& items) {
            return il2cpp::array_new<app::IStressTest__Array>(get_class(), items);
        }
    } // namespace IStressTest
} // namespace app::classes::types
