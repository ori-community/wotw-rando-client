#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JsonContainerAttribute__Class.h>
#include <Modloader/app/structs/JsonContainerAttribute.h>

namespace app::classes::types {
    namespace JsonContainerAttribute {
        namespace {
            inline app::JsonContainerAttribute__Class* type_info_ref = nullptr;
        }
        inline app::JsonContainerAttribute__Class** type_info = &type_info_ref;
        inline app::JsonContainerAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonContainerAttribute__Class>(type_info, "Newtonsoft.Json", "JsonContainerAttribute");
        }
        inline app::JsonContainerAttribute* create() {
            return il2cpp::create_object<app::JsonContainerAttribute>(get_class());
        }
    } // namespace JsonContainerAttribute
} // namespace app::classes::types
