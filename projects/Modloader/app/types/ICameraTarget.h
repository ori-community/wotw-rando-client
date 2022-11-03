#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICameraTarget {
        inline app::ICameraTarget__Class** type_info = (app::ICameraTarget__Class**)(modloader::win::memory::resolve_rva(0x04781FE0));
        inline app::ICameraTarget__Class* get_class() {
            return il2cpp::get_class<app::ICameraTarget__Class>(type_info, "", "ICameraTarget");
        }
        inline app::ICameraTarget__Array* create_array(int size) {
            return il2cpp::array_new<app::ICameraTarget__Array>(get_class(), size);
        }
        inline app::ICameraTarget__Array* create_array(const std::vector<app::ICameraTarget*>& items) {
            return il2cpp::array_new<app::ICameraTarget__Array>(get_class(), items);
        }
    } // namespace ICameraTarget
} // namespace app::classes::types
