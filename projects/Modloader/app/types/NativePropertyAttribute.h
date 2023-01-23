#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NativePropertyAttribute__Class.h>
#include <Modloader/app/structs/NativePropertyAttribute.h>

namespace app::classes::types {
    namespace NativePropertyAttribute {
        namespace {
            inline app::NativePropertyAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativePropertyAttribute__Class** type_info = &type_info_ref;
        inline app::NativePropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativePropertyAttribute__Class>(type_info, "UnityEngine.Bindings", "NativePropertyAttribute");
        }
        inline app::NativePropertyAttribute* create() {
            return il2cpp::create_object<app::NativePropertyAttribute>(get_class());
        }
    } // namespace NativePropertyAttribute
} // namespace app::classes::types
