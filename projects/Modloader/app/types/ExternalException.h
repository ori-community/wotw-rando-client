#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExternalException__Class.h>
#include <Modloader/app/structs/ExternalException.h>

namespace app::classes::types {
    namespace ExternalException {
        namespace {
            inline app::ExternalException__Class* type_info_ref = nullptr;
        }
        inline app::ExternalException__Class** type_info = &type_info_ref;
        inline app::ExternalException__Class* get_class() {
            return il2cpp::get_class<app::ExternalException__Class>(type_info, "System.Runtime.InteropServices", "ExternalException");
        }
        inline app::ExternalException* create() {
            return il2cpp::create_object<app::ExternalException>(get_class());
        }
    } // namespace ExternalException
} // namespace app::classes::types
