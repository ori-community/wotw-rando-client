#pragma once
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Quaternion__Array.h>
#include <Modloader/app/structs/Quaternion__Boxed.h>
#include <Modloader/app/structs/Quaternion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Quaternion {
        inline app::Quaternion__Class** type_info() {
            static app::Quaternion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Quaternion__Class**)(modloader::win::memory::resolve_rva(0x04781FC8));
            }
            return cache;
        }
        inline app::Quaternion__Class* get_class() {
            return il2cpp::get_class<app::Quaternion__Class>(type_info(), "UnityEngine", "Quaternion");
        }
        inline app::Quaternion* create() {
            return il2cpp::create_object<app::Quaternion>(get_class());
        }
        inline app::Quaternion__Boxed* box(app::Quaternion value) {
            return il2cpp::box_value<app::Quaternion__Boxed>(get_class(), value);
        }
        inline app::Quaternion__Array* create_array(int size) {
            return il2cpp::array_new<app::Quaternion__Array>(get_class(), size);
        }
        inline app::Quaternion__Array* create_array(const std::vector<app::Quaternion>& items) {
            return il2cpp::array_new<app::Quaternion__Array>(get_class(), items);
        }
    } // namespace Quaternion
} // namespace app::classes::types
