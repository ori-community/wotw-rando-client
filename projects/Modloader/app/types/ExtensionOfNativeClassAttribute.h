#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExtensionOfNativeClassAttribute__Class.h>
#include <Modloader/app/structs/ExtensionOfNativeClassAttribute.h>

namespace app::classes::types {
    namespace ExtensionOfNativeClassAttribute {
        namespace {
            inline app::ExtensionOfNativeClassAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ExtensionOfNativeClassAttribute__Class** type_info = &type_info_ref;
        inline app::ExtensionOfNativeClassAttribute__Class* get_class() {
            return il2cpp::get_class<app::ExtensionOfNativeClassAttribute__Class>(type_info, "UnityEngine", "ExtensionOfNativeClassAttribute");
        }
        inline app::ExtensionOfNativeClassAttribute* create() {
            return il2cpp::create_object<app::ExtensionOfNativeClassAttribute>(get_class());
        }
    } // namespace ExtensionOfNativeClassAttribute
} // namespace app::classes::types
