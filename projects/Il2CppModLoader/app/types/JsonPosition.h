#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonPosition {
        inline app::JsonPosition__Class** type_info = (app::JsonPosition__Class**)(modloader::win::memory::resolve_rva(0x047942C8));
        inline app::JsonPosition__Class* get_class() {
            return il2cpp::get_class<app::JsonPosition__Class>(type_info, "Newtonsoft.Json", "JsonPosition");
        }
        inline app::JsonPosition* create() {
            return il2cpp::create_object<app::JsonPosition>(get_class());
        }
        inline app::JsonPosition__Boxed* box(app::JsonPosition value) {
            return il2cpp::box_value<app::JsonPosition__Boxed>(get_class(), value);
        }
        inline app::JsonPosition__Array* create_array(int size) {
            return il2cpp::array_new<app::JsonPosition__Array>(get_class(), size);
        }
        inline app::JsonPosition__Array* create_array(const std::vector<app::JsonPosition>& items) {
            return il2cpp::array_new<app::JsonPosition__Array>(get_class(), items);
        }
    } // namespace JsonPosition
} // namespace app::classes::types
