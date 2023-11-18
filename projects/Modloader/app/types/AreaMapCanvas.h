#pragma once
#include <Modloader/app/structs/AreaMapCanvas.h>
#include <Modloader/app/structs/AreaMapCanvas__Array.h>
#include <Modloader/app/structs/AreaMapCanvas__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AreaMapCanvas {
        inline app::AreaMapCanvas__Class** type_info() {
            static app::AreaMapCanvas__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AreaMapCanvas__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AreaMapCanvas__Class* get_class() {
            return il2cpp::get_class<app::AreaMapCanvas__Class>(type_info(), "", "AreaMapCanvas");
        }
        inline app::AreaMapCanvas* create() {
            return il2cpp::create_object<app::AreaMapCanvas>(get_class());
        }
        inline app::AreaMapCanvas__Array* create_array(int size) {
            return il2cpp::array_new<app::AreaMapCanvas__Array>(get_class(), size);
        }
        inline app::AreaMapCanvas__Array* create_array(const std::vector<app::AreaMapCanvas*>& items) {
            return il2cpp::array_new<app::AreaMapCanvas__Array>(get_class(), items);
        }
    } // namespace AreaMapCanvas
} // namespace app::classes::types
