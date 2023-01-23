#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ComboMoveStressTest__Array__Class.h>
#include <Modloader/app/structs/ComboMoveStressTest__Array.h>

namespace app::classes::types {
    namespace ComboMoveStressTest__Array {
        namespace {
            inline app::ComboMoveStressTest__Array__Class* type_info_ref = nullptr;
        }
        inline app::ComboMoveStressTest__Array__Class** type_info = &type_info_ref;
        inline app::ComboMoveStressTest__Array__Class* get_class() {
            return il2cpp::get_class<app::ComboMoveStressTest__Array__Class>(type_info, "", "ComboMoveStressTest[]");
        }
        inline app::ComboMoveStressTest__Array* create() {
            return il2cpp::create_object<app::ComboMoveStressTest__Array>(get_class());
        }
    } // namespace ComboMoveStressTest__Array
} // namespace app::classes::types
