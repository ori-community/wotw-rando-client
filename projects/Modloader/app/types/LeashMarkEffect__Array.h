#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeashMarkEffect__Array__Class.h>
#include <Modloader/app/structs/LeashMarkEffect__Array.h>

namespace app::classes::types {
    namespace LeashMarkEffect__Array {
        namespace {
            inline app::LeashMarkEffect__Array__Class* type_info_ref = nullptr;
        }
        inline app::LeashMarkEffect__Array__Class** type_info = &type_info_ref;
        inline app::LeashMarkEffect__Array__Class* get_class() {
            return il2cpp::get_class<app::LeashMarkEffect__Array__Class>(type_info, "", "LeashMarkEffect[]");
        }
        inline app::LeashMarkEffect__Array* create() {
            return il2cpp::create_object<app::LeashMarkEffect__Array>(get_class());
        }
    } // namespace LeashMarkEffect__Array
} // namespace app::classes::types
