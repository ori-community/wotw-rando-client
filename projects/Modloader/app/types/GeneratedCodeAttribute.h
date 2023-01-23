#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GeneratedCodeAttribute__Class.h>
#include <Modloader/app/structs/GeneratedCodeAttribute.h>

namespace app::classes::types {
    namespace GeneratedCodeAttribute {
        namespace {
            inline app::GeneratedCodeAttribute__Class* type_info_ref = nullptr;
        }
        inline app::GeneratedCodeAttribute__Class** type_info = &type_info_ref;
        inline app::GeneratedCodeAttribute__Class* get_class() {
            return il2cpp::get_class<app::GeneratedCodeAttribute__Class>(type_info, "System.CodeDom.Compiler", "GeneratedCodeAttribute");
        }
        inline app::GeneratedCodeAttribute* create() {
            return il2cpp::create_object<app::GeneratedCodeAttribute>(get_class());
        }
    } // namespace GeneratedCodeAttribute
} // namespace app::classes::types
