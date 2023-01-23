#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/test__Class.h>
#include <Modloader/app/structs/test.h>
#include <Modloader/app/structs/Test__Class.h>
#include <Modloader/app/structs/Test.h>
#include <Modloader/app/structs/Test__Array.h>

namespace app::classes::types {
    namespace test {
        namespace {
            inline app::test__Class* type_info_ref = nullptr;
        }
        inline app::test__Class** type_info = &type_info_ref;
        inline app::test__Class* get_class() {
            return il2cpp::get_class<app::test__Class>(type_info, "", "test");
        }
        inline app::test* create() {
            return il2cpp::create_object<app::test>(get_class());
        }
    } // namespace test
} // namespace app::classes::types
#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
