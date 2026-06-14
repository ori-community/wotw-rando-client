#pragma once
#include <Modloader/app/structs/IGizmo.h>
#include <Modloader/app/structs/IGizmo__Array.h>
#include <Modloader/app/structs/IGizmo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IGizmo {
        inline app::IGizmo__Class** type_info() {
            static app::IGizmo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IGizmo__Class**)(modloader::win::memory::resolve_rva(0x04772D08));
            }
            return cache;
        }
        inline app::IGizmo__Class* get_class() {
            return il2cpp::get_class<app::IGizmo__Class>(type_info(), "Moon", "IGizmo");
        }
        inline app::IGizmo__Array* create_array(int size) {
            return il2cpp::array_new<app::IGizmo__Array>(get_class(), size);
        }
        inline app::IGizmo__Array* create_array(const std::vector<app::IGizmo*>& items) {
            return il2cpp::array_new<app::IGizmo__Array>(get_class(), items);
        }
    } // namespace IGizmo
} // namespace app::classes::types
