#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IconAttribute {
        namespace {
            inline app::IconAttribute__Class* type_info_ref = nullptr;
        }
        inline app::IconAttribute__Class** type_info = &type_info_ref;
        inline app::IconAttribute__Class* get_class() {
            return il2cpp::get_class<app::IconAttribute__Class>(type_info, "Moon.BehaviourSystem.BTEditor", "IconAttribute");
        }
        inline app::IconAttribute* create() {
            return il2cpp::create_object<app::IconAttribute>(get_class());
        }
    } // namespace IconAttribute
} // namespace app::classes::types
