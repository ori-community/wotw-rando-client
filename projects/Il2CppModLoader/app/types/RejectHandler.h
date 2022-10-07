#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RejectHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RejectHandler__Class** type_info;
        inline app::RejectHandler__Class* get_class() {
            return il2cpp::get_class<app::RejectHandler__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "RejectHandler");
        }
        inline app::RejectHandler* create() {
            return il2cpp::create_object<app::RejectHandler>(get_class());
        }
        inline app::RejectHandler__Boxed* box(app::RejectHandler value) {
            return il2cpp::box_value<app::RejectHandler__Boxed>(get_class(), value);
        }
        inline app::RejectHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::RejectHandler__Array>(get_class(), size);
        }
        inline app::RejectHandler__Array* create_array(const std::vector<app::RejectHandler>& items) {
            return il2cpp::array_new<app::RejectHandler__Array>(get_class(), items);
        }
    } // namespace RejectHandler
} // namespace app::classes::types
