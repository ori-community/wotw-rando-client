#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NativeHeaderAttribute__Class.h>
#include <Modloader/app/structs/NativeHeaderAttribute.h>

namespace app::classes::types {
    namespace NativeHeaderAttribute {
        namespace {
            inline app::NativeHeaderAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativeHeaderAttribute__Class** type_info = &type_info_ref;
        inline app::NativeHeaderAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeHeaderAttribute__Class>(type_info, "UnityEngine.Bindings", "NativeHeaderAttribute");
        }
        inline app::NativeHeaderAttribute* create() {
            return il2cpp::create_object<app::NativeHeaderAttribute>(get_class());
        }
    } // namespace NativeHeaderAttribute
} // namespace app::classes::types
