#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UsedByNativeCodeAttribute__Class.h>
#include <Modloader/app/structs/UsedByNativeCodeAttribute.h>

namespace app::classes::types {
    namespace UsedByNativeCodeAttribute {
        namespace {
            inline app::UsedByNativeCodeAttribute__Class* type_info_ref = nullptr;
        }
        inline app::UsedByNativeCodeAttribute__Class** type_info = &type_info_ref;
        inline app::UsedByNativeCodeAttribute__Class* get_class() {
            return il2cpp::get_class<app::UsedByNativeCodeAttribute__Class>(type_info, "UnityEngine.Scripting", "UsedByNativeCodeAttribute");
        }
        inline app::UsedByNativeCodeAttribute* create() {
            return il2cpp::create_object<app::UsedByNativeCodeAttribute>(get_class());
        }
    } // namespace UsedByNativeCodeAttribute
} // namespace app::classes::types
