#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalHttpHeader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalHttpHeader__Class** type_info;
        inline app::XalHttpHeader__Class* get_class() {
            return il2cpp::get_class<app::XalHttpHeader__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalHttpHeader");
        }
        inline app::XalHttpHeader* create() {
            return il2cpp::create_object<app::XalHttpHeader>(get_class());
        }
        inline app::XalHttpHeader__Boxed* box(app::XalHttpHeader value) {
            return il2cpp::box_value<app::XalHttpHeader__Boxed>(get_class(), value);
        }
        inline app::XalHttpHeader__Array* create_array(int size) {
            return il2cpp::array_new<app::XalHttpHeader__Array>(get_class(), size);
        }
        inline app::XalHttpHeader__Array* create_array(const std::vector<app::XalHttpHeader__Boxed>& items) {
            return il2cpp::array_new<app::XalHttpHeader__Array>(get_class(), items);
        }
    } // namespace XalHttpHeader
} // namespace app::classes::types
