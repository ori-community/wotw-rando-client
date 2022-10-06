#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonIconRenderer_IconObject {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonIconRenderer_IconObject__Class** type_info;
        inline app::MoonIconRenderer_IconObject__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonIconRenderer_IconObject__Class>(type_info, "CatlikeCoding.TextBox", "MoonIconRenderer", "IconObject");
        }
        inline app::MoonIconRenderer_IconObject* create() {
            return il2cpp::create_object<app::MoonIconRenderer_IconObject>(get_class());
        }
        inline app::MoonIconRenderer_IconObject__Boxed* box(app::MoonIconRenderer_IconObject value) {
            return il2cpp::box_value<app::MoonIconRenderer_IconObject__Boxed>(get_class(), value);
        }
        inline app::MoonIconRenderer_IconObject__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonIconRenderer_IconObject__Array>(get_class(), size);
        }
        inline app::MoonIconRenderer_IconObject__Array* create_array(const std::vector<app::MoonIconRenderer_IconObject__Boxed>& items) {
            return il2cpp::array_new<app::MoonIconRenderer_IconObject__Array>(get_class(), items);
        }
    } // namespace MoonIconRenderer_IconObject
} // namespace app::classes::types
