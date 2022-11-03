#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PrimitiveSpace__Enum {
        namespace {
            inline app::PrimitiveSpace__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PrimitiveSpace__Enum__Class** type_info = &type_info_ref;
        inline app::PrimitiveSpace__Enum__Class* get_class() {
            return il2cpp::get_class<app::PrimitiveSpace__Enum__Class>(type_info, "Moon", "PrimitiveSpace");
        }
        inline app::PrimitiveSpace__Enum* create() {
            return il2cpp::create_object<app::PrimitiveSpace__Enum>(get_class());
        }
    } // namespace PrimitiveSpace__Enum
} // namespace app::classes::types
