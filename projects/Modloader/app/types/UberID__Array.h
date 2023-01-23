#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberID__Array__Class.h>
#include <Modloader/app/structs/UberID__Array.h>

namespace app::classes::types {
    namespace UberID__Array {
        namespace {
            inline app::UberID__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberID__Array__Class** type_info = &type_info_ref;
        inline app::UberID__Array__Class* get_class() {
            return il2cpp::get_class<app::UberID__Array__Class>(type_info, "Moon", "UberID[]");
        }
        inline app::UberID__Array* create() {
            return il2cpp::create_object<app::UberID__Array>(get_class());
        }
    } // namespace UberID__Array
} // namespace app::classes::types
