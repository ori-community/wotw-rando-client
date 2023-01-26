#pragma once
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/RaycastHit__Boxed.h>
#include <Modloader/app/structs/RaycastHit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaycastHit {
        inline app::RaycastHit__Class** type_info() {
            static app::RaycastHit__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaycastHit__Class**)(modloader::win::memory::resolve_rva(0x047020A8));
            }
            return cache;
        }
        inline app::RaycastHit__Class* get_class() {
            return il2cpp::get_class<app::RaycastHit__Class>(type_info(), "UnityEngine", "RaycastHit");
        }
        inline app::RaycastHit* create() {
            return il2cpp::create_object<app::RaycastHit>(get_class());
        }
        inline app::RaycastHit__Boxed* box(app::RaycastHit value) {
            return il2cpp::box_value<app::RaycastHit__Boxed>(get_class(), value);
        }
        inline app::RaycastHit__Array* create_array(int size) {
            return il2cpp::array_new<app::RaycastHit__Array>(get_class(), size);
        }
        inline app::RaycastHit__Array* create_array(const std::vector<app::RaycastHit>& items) {
            return il2cpp::array_new<app::RaycastHit__Array>(get_class(), items);
        }
    } // namespace RaycastHit
} // namespace app::classes::types
