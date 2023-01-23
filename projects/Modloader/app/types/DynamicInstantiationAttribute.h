#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DynamicInstantiationAttribute__Class.h>
#include <Modloader/app/structs/DynamicInstantiationAttribute.h>

namespace app::classes::types {
    namespace DynamicInstantiationAttribute {
        namespace {
            inline app::DynamicInstantiationAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DynamicInstantiationAttribute__Class** type_info = &type_info_ref;
        inline app::DynamicInstantiationAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationAttribute__Class>(type_info, "", "DynamicInstantiationAttribute");
        }
        inline app::DynamicInstantiationAttribute* create() {
            return il2cpp::create_object<app::DynamicInstantiationAttribute>(get_class());
        }
    } // namespace DynamicInstantiationAttribute
} // namespace app::classes::types
