#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Test__Array__Class.h>
#include <Modloader/app/structs/Test__Array.h>

namespace app::classes::types {
    namespace Test__Array {
        namespace {
            inline app::Test__Array__Class* type_info_ref = nullptr;
        }
        inline app::Test__Array__Class** type_info = &type_info_ref;
        inline app::Test__Array__Class* get_class() {
            return il2cpp::get_class<app::Test__Array__Class>(type_info, "", "Test[]");
        }
        inline app::Test__Array* create() {
            return il2cpp::create_object<app::Test__Array>(get_class());
        }
    } // namespace Test__Array
} // namespace app::classes::types
