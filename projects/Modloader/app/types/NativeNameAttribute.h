#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NativeNameAttribute__Class.h>
#include <Modloader/app/structs/NativeNameAttribute.h>

namespace app::classes::types {
    namespace NativeNameAttribute {
        namespace {
            inline app::NativeNameAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativeNameAttribute__Class** type_info = &type_info_ref;
        inline app::NativeNameAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeNameAttribute__Class>(type_info, "UnityEngine.Bindings", "NativeNameAttribute");
        }
        inline app::NativeNameAttribute* create() {
            return il2cpp::create_object<app::NativeNameAttribute>(get_class());
        }
    } // namespace NativeNameAttribute
} // namespace app::classes::types
