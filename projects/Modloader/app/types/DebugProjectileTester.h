#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DebugProjectileTester__Class.h>
#include <Modloader/app/structs/DebugProjectileTester.h>

namespace app::classes::types {
    namespace DebugProjectileTester {
        namespace {
            inline app::DebugProjectileTester__Class* type_info_ref = nullptr;
        }
        inline app::DebugProjectileTester__Class** type_info = &type_info_ref;
        inline app::DebugProjectileTester__Class* get_class() {
            return il2cpp::get_class<app::DebugProjectileTester__Class>(type_info, "", "DebugProjectileTester");
        }
        inline app::DebugProjectileTester* create() {
            return il2cpp::create_object<app::DebugProjectileTester>(get_class());
        }
    } // namespace DebugProjectileTester
} // namespace app::classes::types
