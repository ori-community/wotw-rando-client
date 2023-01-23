#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ParamArrayAttribute__Class.h>
#include <Modloader/app/structs/ParamArrayAttribute.h>

namespace app::classes::types {
    namespace ParamArrayAttribute {
        namespace {
            inline app::ParamArrayAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ParamArrayAttribute__Class** type_info = &type_info_ref;
        inline app::ParamArrayAttribute__Class* get_class() {
            return il2cpp::get_class<app::ParamArrayAttribute__Class>(type_info, "System", "ParamArrayAttribute");
        }
        inline app::ParamArrayAttribute* create() {
            return il2cpp::create_object<app::ParamArrayAttribute>(get_class());
        }
    } // namespace ParamArrayAttribute
} // namespace app::classes::types
