#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPoolGroup__Array__Class.h>
#include <Modloader/app/structs/UberPoolGroup__Array.h>

namespace app::classes::types {
    namespace UberPoolGroup__Array {
        namespace {
            inline app::UberPoolGroup__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberPoolGroup__Array__Class** type_info = &type_info_ref;
        inline app::UberPoolGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolGroup__Array__Class>(type_info, "", "UberPoolGroup[]");
        }
        inline app::UberPoolGroup__Array* create() {
            return il2cpp::create_object<app::UberPoolGroup__Array>(get_class());
        }
    } // namespace UberPoolGroup__Array
} // namespace app::classes::types
