#pragma once
#include <Modloader/app/structs/Marker__Enum.h>
#include <Modloader/app/structs/Marker__Enum__Array.h>
#include <Modloader/app/structs/Marker__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Marker__Enum {
        inline app::Marker__Enum__Class** type_info() {
            static app::Marker__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Marker__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Marker__Enum__Class* get_class() {
            return il2cpp::get_class<app::Marker__Enum__Class>(type_info(), "Moon.Profile", "Marker");
        }
        inline app::Marker__Enum* create() {
            return il2cpp::create_object<app::Marker__Enum>(get_class());
        }
        inline app::Marker__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::Marker__Enum__Array>(get_class(), size);
        }
        inline app::Marker__Enum__Array* create_array(const std::vector<app::Marker__Enum*>& items) {
            return il2cpp::array_new<app::Marker__Enum__Array>(get_class(), items);
        }
    } // namespace Marker__Enum
} // namespace app::classes::types
