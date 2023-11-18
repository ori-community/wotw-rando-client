#pragma once
#include <Modloader/app/structs/NativeThrowsAttribute.h>
#include <Modloader/app/structs/NativeThrowsAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeThrowsAttribute {
        inline app::NativeThrowsAttribute__Class** type_info() {
            static app::NativeThrowsAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeThrowsAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeThrowsAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeThrowsAttribute__Class>(type_info(), "UnityEngine.Bindings", "NativeThrowsAttribute");
        }
        inline app::NativeThrowsAttribute* create() {
            return il2cpp::create_object<app::NativeThrowsAttribute>(get_class());
        }
    } // namespace NativeThrowsAttribute
} // namespace app::classes::types
