#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Ephemeron {
        namespace {
            inline app::Ephemeron__Class* type_info_ref = nullptr;
        }
        inline app::Ephemeron__Class** type_info = &type_info_ref;
        inline app::Ephemeron__Class* get_class() {
            return il2cpp::get_class<app::Ephemeron__Class>(type_info, "System.Runtime.CompilerServices", "Ephemeron");
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
