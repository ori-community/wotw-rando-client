#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PowerFuse__Array__Class.h>
#include <Modloader/app/structs/PowerFuse__Array.h>

namespace app::classes::types {
    namespace PowerFuse__Array {
        namespace {
            inline app::PowerFuse__Array__Class* type_info_ref = nullptr;
        }
        inline app::PowerFuse__Array__Class** type_info = &type_info_ref;
        inline app::PowerFuse__Array__Class* get_class() {
            return il2cpp::get_class<app::PowerFuse__Array__Class>(type_info, "", "PowerFuse[]");
        }
        inline app::PowerFuse__Array* create() {
            return il2cpp::create_object<app::PowerFuse__Array>(get_class());
        }
    } // namespace PowerFuse__Array
} // namespace app::classes::types
