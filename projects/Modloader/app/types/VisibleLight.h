#pragma once
#include <Modloader/app/structs/VisibleLight.h>
#include <Modloader/app/structs/VisibleLight__Array.h>
#include <Modloader/app/structs/VisibleLight__Boxed.h>
#include <Modloader/app/structs/VisibleLight__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VisibleLight {
        inline app::VisibleLight__Class** type_info() {
            static app::VisibleLight__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VisibleLight__Class**)(modloader::win::memory::resolve_rva(0x04720668));
            }
            return cache;
        }
        inline app::VisibleLight__Class* get_class() {
            return il2cpp::get_class<app::VisibleLight__Class>(type_info(), "UnityEngine.Experimental.Rendering", "VisibleLight");
        }
        inline app::VisibleLight* create() {
            return il2cpp::create_object<app::VisibleLight>(get_class());
        }
        inline app::VisibleLight__Boxed* box(app::VisibleLight value) {
            return il2cpp::box_value<app::VisibleLight__Boxed>(get_class(), value);
        }
        inline app::VisibleLight__Array* create_array(int size) {
            return il2cpp::array_new<app::VisibleLight__Array>(get_class(), size);
        }
        inline app::VisibleLight__Array* create_array(const std::vector<app::VisibleLight>& items) {
            return il2cpp::array_new<app::VisibleLight__Array>(get_class(), items);
        }
    } // namespace VisibleLight
} // namespace app::classes::types
