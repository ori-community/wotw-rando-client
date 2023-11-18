#pragma once
#include <Modloader/app/structs/Ephemeron.h>
#include <Modloader/app/structs/Ephemeron__Array.h>
#include <Modloader/app/structs/Ephemeron__Boxed.h>
#include <Modloader/app/structs/Ephemeron__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ephemeron {
        inline app::Ephemeron__Class** type_info() {
            static app::Ephemeron__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Ephemeron__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Ephemeron__Class* get_class() {
            return il2cpp::get_class<app::Ephemeron__Class>(type_info(), "System.Runtime.CompilerServices", "Ephemeron");
        }
        inline app::Ephemeron* create() {
            return il2cpp::create_object<app::Ephemeron>(get_class());
        }
        inline app::Ephemeron__Boxed* box(app::Ephemeron value) {
            return il2cpp::box_value<app::Ephemeron__Boxed>(get_class(), value);
        }
        inline app::Ephemeron__Array* create_array(int size) {
            return il2cpp::array_new<app::Ephemeron__Array>(get_class(), size);
        }
        inline app::Ephemeron__Array* create_array(const std::vector<app::Ephemeron>& items) {
            return il2cpp::array_new<app::Ephemeron__Array>(get_class(), items);
        }
    } // namespace Ephemeron
} // namespace app::classes::types
