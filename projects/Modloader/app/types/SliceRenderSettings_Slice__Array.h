#pragma once
#include <Modloader/app/structs/SliceRenderSettings_Slice__Array.h>
#include <Modloader/app/structs/SliceRenderSettings_Slice__Array__Array.h>
#include <Modloader/app/structs/SliceRenderSettings_Slice__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SliceRenderSettings_Slice__Array {
        inline app::SliceRenderSettings_Slice__Array__Class** type_info() {
            static app::SliceRenderSettings_Slice__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SliceRenderSettings_Slice__Array__Class**)(modloader::win::memory::resolve_rva(0x04761F10));
            }
            return cache;
        }
        inline app::SliceRenderSettings_Slice__Array__Class* get_class() {
            return il2cpp::get_class<app::SliceRenderSettings_Slice__Array__Class>(type_info(), "Moon.Rendering", "SliceRenderSettings+Slice[]");
        }
        inline app::SliceRenderSettings_Slice__Array* create() {
            return il2cpp::create_object<app::SliceRenderSettings_Slice__Array>(get_class());
        }
        inline app::SliceRenderSettings_Slice__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::SliceRenderSettings_Slice__Array__Array>(get_class(), size);
        }
        inline app::SliceRenderSettings_Slice__Array__Array* create_array(const std::vector<app::SliceRenderSettings_Slice__Array*>& items) {
            return il2cpp::array_new<app::SliceRenderSettings_Slice__Array__Array>(get_class(), items);
        }
    } // namespace SliceRenderSettings_Slice__Array
} // namespace app::classes::types
