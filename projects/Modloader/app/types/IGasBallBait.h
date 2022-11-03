#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IGasBallBait {
        inline app::IGasBallBait__Class** type_info = (app::IGasBallBait__Class**)(modloader::win::memory::resolve_rva(0x04724A08));
        inline app::IGasBallBait__Class* get_class() {
            return il2cpp::get_class<app::IGasBallBait__Class>(type_info, "", "IGasBallBait");
        }
        inline app::IGasBallBait__Array* create_array(int size) {
            return il2cpp::array_new<app::IGasBallBait__Array>(get_class(), size);
        }
        inline app::IGasBallBait__Array* create_array(const std::vector<app::IGasBallBait*>& items) {
            return il2cpp::array_new<app::IGasBallBait__Array>(get_class(), items);
        }
    } // namespace IGasBallBait
} // namespace app::classes::types
