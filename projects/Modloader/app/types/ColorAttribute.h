#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ColorAttribute__Class.h>
#include <Modloader/app/structs/ColorAttribute.h>

namespace app::classes::types {
    namespace ColorAttribute {
        namespace {
            inline app::ColorAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ColorAttribute__Class** type_info = &type_info_ref;
        inline app::ColorAttribute__Class* get_class() {
            return il2cpp::get_class<app::ColorAttribute__Class>(type_info, "Moon.BehaviourSystem.BTEditor", "ColorAttribute");
        }
        inline app::ColorAttribute* create() {
            return il2cpp::create_object<app::ColorAttribute>(get_class());
        }
    } // namespace ColorAttribute
} // namespace app::classes::types
