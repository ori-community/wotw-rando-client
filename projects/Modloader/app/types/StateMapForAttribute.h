#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StateMapForAttribute__Class.h>
#include <Modloader/app/structs/StateMapForAttribute.h>

namespace app::classes::types {
    namespace StateMapForAttribute {
        namespace {
            inline app::StateMapForAttribute__Class* type_info_ref = nullptr;
        }
        inline app::StateMapForAttribute__Class** type_info = &type_info_ref;
        inline app::StateMapForAttribute__Class* get_class() {
            return il2cpp::get_class<app::StateMapForAttribute__Class>(type_info, "", "StateMapForAttribute");
        }
        inline app::StateMapForAttribute* create() {
            return il2cpp::create_object<app::StateMapForAttribute>(get_class());
        }
    } // namespace StateMapForAttribute
} // namespace app::classes::types
