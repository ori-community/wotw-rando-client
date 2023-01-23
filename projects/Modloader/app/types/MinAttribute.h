#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MinAttribute__Class.h>
#include <Modloader/app/structs/MinAttribute.h>

namespace app::classes::types {
    namespace MinAttribute {
        namespace {
            inline app::MinAttribute__Class* type_info_ref = nullptr;
        }
        inline app::MinAttribute__Class** type_info = &type_info_ref;
        inline app::MinAttribute__Class* get_class() {
            return il2cpp::get_class<app::MinAttribute__Class>(type_info, "UnityEngine", "MinAttribute");
        }
        inline app::MinAttribute* create() {
            return il2cpp::create_object<app::MinAttribute>(get_class());
        }
    } // namespace MinAttribute
} // namespace app::classes::types
