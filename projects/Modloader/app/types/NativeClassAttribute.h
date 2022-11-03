#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NativeClassAttribute {
        namespace {
            inline app::NativeClassAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativeClassAttribute__Class** type_info = &type_info_ref;
        inline app::NativeClassAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeClassAttribute__Class>(type_info, "UnityEngine", "NativeClassAttribute");
        }
        inline app::NativeClassAttribute* create() {
            return il2cpp::create_object<app::NativeClassAttribute>(get_class());
        }
    } // namespace NativeClassAttribute
} // namespace app::classes::types
