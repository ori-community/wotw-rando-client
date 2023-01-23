#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DynamicInstantiationIgnoreAttribute__Class.h>
#include <Modloader/app/structs/DynamicInstantiationIgnoreAttribute.h>

namespace app::classes::types {
    namespace DynamicInstantiationIgnoreAttribute {
        namespace {
            inline app::DynamicInstantiationIgnoreAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DynamicInstantiationIgnoreAttribute__Class** type_info = &type_info_ref;
        inline app::DynamicInstantiationIgnoreAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationIgnoreAttribute__Class>(type_info, "", "DynamicInstantiationIgnoreAttribute");
        }
        inline app::DynamicInstantiationIgnoreAttribute* create() {
            return il2cpp::create_object<app::DynamicInstantiationIgnoreAttribute>(get_class());
        }
    } // namespace DynamicInstantiationIgnoreAttribute
} // namespace app::classes::types
