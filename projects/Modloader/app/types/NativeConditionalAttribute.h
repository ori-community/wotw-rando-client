#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NativeConditionalAttribute__Class.h>
#include <Modloader/app/structs/NativeConditionalAttribute.h>

namespace app::classes::types {
    namespace NativeConditionalAttribute {
        namespace {
            inline app::NativeConditionalAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativeConditionalAttribute__Class** type_info = &type_info_ref;
        inline app::NativeConditionalAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeConditionalAttribute__Class>(type_info, "UnityEngine.Bindings", "NativeConditionalAttribute");
        }
        inline app::NativeConditionalAttribute* create() {
            return il2cpp::create_object<app::NativeConditionalAttribute>(get_class());
        }
    } // namespace NativeConditionalAttribute
} // namespace app::classes::types
