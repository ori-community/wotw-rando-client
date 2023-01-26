#pragma once
#include <Modloader/app/structs/IGrabbableRope.h>
#include <Modloader/app/structs/IGrabbableRope__Array.h>
#include <Modloader/app/structs/IGrabbableRope__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IGrabbableRope {
        inline app::IGrabbableRope__Class** type_info() {
            static app::IGrabbableRope__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IGrabbableRope__Class**)(modloader::win::memory::resolve_rva(0x04771AC8));
            }
            return cache;
        }
        inline app::IGrabbableRope__Class* get_class() {
            return il2cpp::get_class<app::IGrabbableRope__Class>(type_info(), "", "IGrabbableRope");
        }
        inline app::IGrabbableRope__Array* create_array(int size) {
            return il2cpp::array_new<app::IGrabbableRope__Array>(get_class(), size);
        }
        inline app::IGrabbableRope__Array* create_array(const std::vector<app::IGrabbableRope*>& items) {
            return il2cpp::array_new<app::IGrabbableRope__Array>(get_class(), items);
        }
    } // namespace IGrabbableRope
} // namespace app::classes::types
