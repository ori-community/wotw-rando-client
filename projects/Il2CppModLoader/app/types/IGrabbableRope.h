#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IGrabbableRope {
        inline app::IGrabbableRope__Class** type_info = (app::IGrabbableRope__Class**)(modloader::win::memory::resolve_rva(0x04771AC8));
        inline app::IGrabbableRope__Class* get_class() {
            return il2cpp::get_class<app::IGrabbableRope__Class>(type_info, "", "IGrabbableRope");
        }
        inline app::IGrabbableRope__Array* create_array(int size) {
            return il2cpp::array_new<app::IGrabbableRope__Array>(get_class(), size);
        }
        inline app::IGrabbableRope__Array* create_array(const std::vector<app::IGrabbableRope*>& items) {
            return il2cpp::array_new<app::IGrabbableRope__Array>(get_class(), items);
        }
    } // namespace IGrabbableRope
} // namespace app::classes::types
