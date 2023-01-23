#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExtensionAttribute__Class.h>
#include <Modloader/app/structs/ExtensionAttribute.h>

namespace app::classes::types {
    namespace ExtensionAttribute {
        namespace {
            inline app::ExtensionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ExtensionAttribute__Class** type_info = &type_info_ref;
        inline app::ExtensionAttribute__Class* get_class() {
            return il2cpp::get_class<app::ExtensionAttribute__Class>(type_info, "System.Runtime.CompilerServices", "ExtensionAttribute");
        }
        inline app::ExtensionAttribute* create() {
            return il2cpp::create_object<app::ExtensionAttribute>(get_class());
        }
    } // namespace ExtensionAttribute
} // namespace app::classes::types
