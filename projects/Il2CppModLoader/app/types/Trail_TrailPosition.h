#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Trail_TrailPosition {
        inline app::Trail_TrailPosition__Class** type_info = (app::Trail_TrailPosition__Class**)(modloader::win::memory::resolve_rva(0x04729588));
        inline app::Trail_TrailPosition__Class* get_class() {
            return il2cpp::get_nested_class<app::Trail_TrailPosition__Class>(type_info, "", "Trail", "TrailPosition");
        }
        inline app::Trail_TrailPosition* create() {
            return il2cpp::create_object<app::Trail_TrailPosition>(get_class());
        }
        inline app::Trail_TrailPosition__Boxed* box(app::Trail_TrailPosition value) {
            return il2cpp::box_value<app::Trail_TrailPosition__Boxed>(get_class(), value);
        }
        inline app::Trail_TrailPosition__Array* create_array(int size) {
            return il2cpp::array_new<app::Trail_TrailPosition__Array>(get_class(), size);
        }
        inline app::Trail_TrailPosition__Array* create_array(const std::vector<app::Trail_TrailPosition>& items) {
            return il2cpp::array_new<app::Trail_TrailPosition__Array>(get_class(), items);
        }
    } // namespace Trail_TrailPosition
} // namespace app::classes::types
