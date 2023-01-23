#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpaceAttribute__Class.h>
#include <Modloader/app/structs/SpaceAttribute.h>

namespace app::classes::types {
    namespace SpaceAttribute {
        namespace {
            inline app::SpaceAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SpaceAttribute__Class** type_info = &type_info_ref;
        inline app::SpaceAttribute__Class* get_class() {
            return il2cpp::get_class<app::SpaceAttribute__Class>(type_info, "UnityEngine", "SpaceAttribute");
        }
        inline app::SpaceAttribute* create() {
            return il2cpp::create_object<app::SpaceAttribute>(get_class());
        }
    } // namespace SpaceAttribute
} // namespace app::classes::types
