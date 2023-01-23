#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IDtdDefaultAttributeInfo__Array__Class.h>
#include <Modloader/app/structs/IDtdDefaultAttributeInfo__Array.h>

namespace app::classes::types {
    namespace IDtdDefaultAttributeInfo__Array {
        namespace {
            inline app::IDtdDefaultAttributeInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::IDtdDefaultAttributeInfo__Array__Class** type_info = &type_info_ref;
        inline app::IDtdDefaultAttributeInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::IDtdDefaultAttributeInfo__Array__Class>(type_info, "System.Xml", "IDtdDefaultAttributeInfo[]");
        }
        inline app::IDtdDefaultAttributeInfo__Array* create() {
            return il2cpp::create_object<app::IDtdDefaultAttributeInfo__Array>(get_class());
        }
    } // namespace IDtdDefaultAttributeInfo__Array
} // namespace app::classes::types
