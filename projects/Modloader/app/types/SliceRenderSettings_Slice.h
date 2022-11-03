#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SliceRenderSettings_Slice {
        inline app::SliceRenderSettings_Slice__Class** type_info = (app::SliceRenderSettings_Slice__Class**)(modloader::win::memory::resolve_rva(0x04776AC0));
        inline app::SliceRenderSettings_Slice__Class* get_class() {
            return il2cpp::get_nested_class<app::SliceRenderSettings_Slice__Class>(type_info, "Moon.Rendering", "SliceRenderSettings", "Slice");
        }
        inline app::SliceRenderSettings_Slice* create() {
            return il2cpp::create_object<app::SliceRenderSettings_Slice>(get_class());
        }
        inline app::SliceRenderSettings_Slice__Boxed* box(app::SliceRenderSettings_Slice value) {
            return il2cpp::box_value<app::SliceRenderSettings_Slice__Boxed>(get_class(), value);
        }
        inline app::SliceRenderSettings_Slice__Array* create_array(int size) {
            return il2cpp::array_new<app::SliceRenderSettings_Slice__Array>(get_class(), size);
        }
        inline app::SliceRenderSettings_Slice__Array* create_array(const std::vector<app::SliceRenderSettings_Slice>& items) {
            return il2cpp::array_new<app::SliceRenderSettings_Slice__Array>(get_class(), items);
        }
    } // namespace SliceRenderSettings_Slice
} // namespace app::classes::types
