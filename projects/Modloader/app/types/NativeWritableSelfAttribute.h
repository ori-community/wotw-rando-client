#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NativeWritableSelfAttribute {
        namespace {
            inline app::NativeWritableSelfAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativeWritableSelfAttribute__Class** type_info = &type_info_ref;
        inline app::NativeWritableSelfAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeWritableSelfAttribute__Class>(type_info, "UnityEngine.Bindings", "NativeWritableSelfAttribute");
        }
        inline app::NativeWritableSelfAttribute* create() {
            return il2cpp::create_object<app::NativeWritableSelfAttribute>(get_class());
        }
    } // namespace NativeWritableSelfAttribute
} // namespace app::classes::types
