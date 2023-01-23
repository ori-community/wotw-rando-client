#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RequiredByNativeCodeAttribute__Class.h>
#include <Modloader/app/structs/RequiredByNativeCodeAttribute.h>

namespace app::classes::types {
    namespace RequiredByNativeCodeAttribute {
        namespace {
            inline app::RequiredByNativeCodeAttribute__Class* type_info_ref = nullptr;
        }
        inline app::RequiredByNativeCodeAttribute__Class** type_info = &type_info_ref;
        inline app::RequiredByNativeCodeAttribute__Class* get_class() {
            return il2cpp::get_class<app::RequiredByNativeCodeAttribute__Class>(type_info, "UnityEngine.Scripting", "RequiredByNativeCodeAttribute");
        }
        inline app::RequiredByNativeCodeAttribute* create() {
            return il2cpp::create_object<app::RequiredByNativeCodeAttribute>(get_class());
        }
    } // namespace RequiredByNativeCodeAttribute
} // namespace app::classes::types
