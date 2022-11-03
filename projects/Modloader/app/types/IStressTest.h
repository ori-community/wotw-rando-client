#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IStressTest {
        inline app::IStressTest__Class** type_info = (app::IStressTest__Class**)(modloader::win::memory::resolve_rva(0x04778190));
        inline app::IStressTest__Class* get_class() {
            return il2cpp::get_class<app::IStressTest__Class>(type_info, "", "IStressTest");
        }
        inline app::IStressTest__Array* create_array(int size) {
            return il2cpp::array_new<app::IStressTest__Array>(get_class(), size);
        }
        inline app::IStressTest__Array* create_array(const std::vector<app::IStressTest*>& items) {
            return il2cpp::array_new<app::IStressTest__Array>(get_class(), items);
        }
    } // namespace IStressTest
} // namespace app::classes::types
