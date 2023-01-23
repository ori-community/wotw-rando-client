#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ICameraTarget__Array__Class.h>
#include <Modloader/app/structs/ICameraTarget__Array.h>

namespace app::classes::types {
    namespace ICameraTarget__Array {
        namespace {
            inline app::ICameraTarget__Array__Class* type_info_ref = nullptr;
        }
        inline app::ICameraTarget__Array__Class** type_info = &type_info_ref;
        inline app::ICameraTarget__Array__Class* get_class() {
            return il2cpp::get_class<app::ICameraTarget__Array__Class>(type_info, "", "ICameraTarget[]");
        }
        inline app::ICameraTarget__Array* create() {
            return il2cpp::create_object<app::ICameraTarget__Array>(get_class());
        }
    } // namespace ICameraTarget__Array
} // namespace app::classes::types
