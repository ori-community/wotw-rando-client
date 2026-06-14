#pragma once
#include <Modloader/app/structs/MoonIconRenderer.h>
#include <Modloader/app/structs/MoonIconRenderer__Array.h>
#include <Modloader/app/structs/MoonIconRenderer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonIconRenderer {
        inline app::MoonIconRenderer__Class** type_info() {
            static app::MoonIconRenderer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonIconRenderer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonIconRenderer__Class* get_class() {
            return il2cpp::get_class<app::MoonIconRenderer__Class>(type_info(), "CatlikeCoding.TextBox", "MoonIconRenderer");
        }
        inline app::MoonIconRenderer* create() {
            return il2cpp::create_object<app::MoonIconRenderer>(get_class());
        }
        inline app::MoonIconRenderer__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonIconRenderer__Array>(get_class(), size);
        }
        inline app::MoonIconRenderer__Array* create_array(const std::vector<app::MoonIconRenderer*>& items) {
            return il2cpp::array_new<app::MoonIconRenderer__Array>(get_class(), items);
        }
    } // namespace MoonIconRenderer
} // namespace app::classes::types
