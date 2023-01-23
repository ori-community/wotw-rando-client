#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Timer__Array__Class.h>
#include <Modloader/app/structs/Timer__Array.h>

namespace app::classes::types {
    namespace Timer__Array {
        namespace {
            inline app::Timer__Array__Class* type_info_ref = nullptr;
        }
        inline app::Timer__Array__Class** type_info = &type_info_ref;
        inline app::Timer__Array__Class* get_class() {
            return il2cpp::get_class<app::Timer__Array__Class>(type_info, "System.Threading", "Timer[]");
        }
        inline app::Timer__Array* create() {
            return il2cpp::create_object<app::Timer__Array>(get_class());
        }
    } // namespace Timer__Array
} // namespace app::classes::types
