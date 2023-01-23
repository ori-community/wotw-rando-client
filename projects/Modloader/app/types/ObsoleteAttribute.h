#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ObsoleteAttribute__Class.h>
#include <Modloader/app/structs/ObsoleteAttribute.h>

namespace app::classes::types {
    namespace ObsoleteAttribute {
        namespace {
            inline app::ObsoleteAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ObsoleteAttribute__Class** type_info = &type_info_ref;
        inline app::ObsoleteAttribute__Class* get_class() {
            return il2cpp::get_class<app::ObsoleteAttribute__Class>(type_info, "System", "ObsoleteAttribute");
        }
        inline app::ObsoleteAttribute* create() {
            return il2cpp::create_object<app::ObsoleteAttribute>(get_class());
        }
    } // namespace ObsoleteAttribute
} // namespace app::classes::types
