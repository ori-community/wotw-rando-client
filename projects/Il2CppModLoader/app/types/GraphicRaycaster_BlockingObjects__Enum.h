#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GraphicRaycaster_BlockingObjects__Enum {
        namespace {
            app::GraphicRaycaster_BlockingObjects__Enum__Class* type_info_ref = nullptr;
        }
        app::GraphicRaycaster_BlockingObjects__Enum__Class** type_info = &type_info_ref;
        inline app::GraphicRaycaster_BlockingObjects__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GraphicRaycaster_BlockingObjects__Enum__Class>(type_info, "UnityEngine.UI", "GraphicRaycaster", "BlockingObjects");
        }
        inline app::GraphicRaycaster_BlockingObjects__Enum* create() {
            return il2cpp::create_object<app::GraphicRaycaster_BlockingObjects__Enum>(get_class());
        }
    } // namespace GraphicRaycaster_BlockingObjects__Enum
} // namespace app::classes::types
