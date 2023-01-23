#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AccessViolationException__Class.h>
#include <Modloader/app/structs/AccessViolationException.h>

namespace app::classes::types {
    namespace AccessViolationException {
        namespace {
            inline app::AccessViolationException__Class* type_info_ref = nullptr;
        }
        inline app::AccessViolationException__Class** type_info = &type_info_ref;
        inline app::AccessViolationException__Class* get_class() {
            return il2cpp::get_class<app::AccessViolationException__Class>(type_info, "System", "AccessViolationException");
        }
        inline app::AccessViolationException* create() {
            return il2cpp::create_object<app::AccessViolationException>(get_class());
        }
    } // namespace AccessViolationException
} // namespace app::classes::types
