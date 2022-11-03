#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonExtensionDataAttribute {
        namespace {
            inline app::JsonExtensionDataAttribute__Class* type_info_ref = nullptr;
        }
        inline app::JsonExtensionDataAttribute__Class** type_info = &type_info_ref;
        inline app::JsonExtensionDataAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonExtensionDataAttribute__Class>(type_info, "Newtonsoft.Json", "JsonExtensionDataAttribute");
        }
        inline app::JsonExtensionDataAttribute* create() {
            return il2cpp::create_object<app::JsonExtensionDataAttribute>(get_class());
        }
    } // namespace JsonExtensionDataAttribute
} // namespace app::classes::types
