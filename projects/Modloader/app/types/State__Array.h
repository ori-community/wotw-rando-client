#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/State__Array__Class.h>
#include <Modloader/app/structs/State__Array.h>

namespace app::classes::types {
    namespace State__Array {
        namespace {
            inline app::State__Array__Class* type_info_ref = nullptr;
        }
        inline app::State__Array__Class** type_info = &type_info_ref;
        inline app::State__Array__Class* get_class() {
            return il2cpp::get_class<app::State__Array__Class>(type_info, "AK.Wwise", "State[]");
        }
        inline app::State__Array* create() {
            return il2cpp::create_object<app::State__Array>(get_class());
        }
    } // namespace State__Array
} // namespace app::classes::types
