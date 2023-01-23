#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DebugMenuToggler__Class.h>
#include <Modloader/app/structs/DebugMenuToggler.h>

namespace app::classes::types {
    namespace DebugMenuToggler {
        namespace {
            inline app::DebugMenuToggler__Class* type_info_ref = nullptr;
        }
        inline app::DebugMenuToggler__Class** type_info = &type_info_ref;
        inline app::DebugMenuToggler__Class* get_class() {
            return il2cpp::get_class<app::DebugMenuToggler__Class>(type_info, "", "DebugMenuToggler");
        }
        inline app::DebugMenuToggler* create() {
            return il2cpp::create_object<app::DebugMenuToggler>(get_class());
        }
    } // namespace DebugMenuToggler
} // namespace app::classes::types
