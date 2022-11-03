#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NativeThrowsAttribute {
        namespace {
            inline app::NativeThrowsAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativeThrowsAttribute__Class** type_info = &type_info_ref;
        inline app::NativeThrowsAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeThrowsAttribute__Class>(type_info, "UnityEngine.Bindings", "NativeThrowsAttribute");
        }
        inline app::NativeThrowsAttribute* create() {
            return il2cpp::create_object<app::NativeThrowsAttribute>(get_class());
        }
    } // namespace NativeThrowsAttribute
} // namespace app::classes::types
