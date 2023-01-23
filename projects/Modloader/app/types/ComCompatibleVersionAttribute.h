#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ComCompatibleVersionAttribute__Class.h>
#include <Modloader/app/structs/ComCompatibleVersionAttribute.h>

namespace app::classes::types {
    namespace ComCompatibleVersionAttribute {
        namespace {
            inline app::ComCompatibleVersionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ComCompatibleVersionAttribute__Class** type_info = &type_info_ref;
        inline app::ComCompatibleVersionAttribute__Class* get_class() {
            return il2cpp::get_class<app::ComCompatibleVersionAttribute__Class>(type_info, "System.Runtime.InteropServices", "ComCompatibleVersionAttribute");
        }
        inline app::ComCompatibleVersionAttribute* create() {
            return il2cpp::create_object<app::ComCompatibleVersionAttribute>(get_class());
        }
    } // namespace ComCompatibleVersionAttribute
} // namespace app::classes::types
