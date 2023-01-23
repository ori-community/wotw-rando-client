#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UIVertex__Class.h>
#include <Modloader/app/structs/UIVertex.h>
#include <Modloader/app/structs/UIVertex__Boxed.h>
#include <Modloader/app/structs/UIVertex__Array.h>

namespace app::classes::types {
    namespace UIVertex {
        inline app::UIVertex__Class** type_info = (app::UIVertex__Class**)(modloader::win::memory::resolve_rva(0x04798870));
        inline app::UIVertex__Class* get_class() {
            return il2cpp::get_class<app::UIVertex__Class>(type_info, "UnityEngine", "UIVertex");
        }
        inline app::UIVertex* create() {
            return il2cpp::create_object<app::UIVertex>(get_class());
        }
        inline app::UIVertex__Boxed* box(app::UIVertex value) {
            return il2cpp::box_value<app::UIVertex__Boxed>(get_class(), value);
        }
        inline app::UIVertex__Array* create_array(int size) {
            return il2cpp::array_new<app::UIVertex__Array>(get_class(), size);
        }
        inline app::UIVertex__Array* create_array(const std::vector<app::UIVertex>& items) {
            return il2cpp::array_new<app::UIVertex__Array>(get_class(), items);
        }
    } // namespace UIVertex
} // namespace app::classes::types
