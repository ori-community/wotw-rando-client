#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExceptionsTest__Class.h>
#include <Modloader/app/structs/ExceptionsTest.h>

namespace app::classes::types {
    namespace ExceptionsTest {
        namespace {
            inline app::ExceptionsTest__Class* type_info_ref = nullptr;
        }
        inline app::ExceptionsTest__Class** type_info = &type_info_ref;
        inline app::ExceptionsTest__Class* get_class() {
            return il2cpp::get_class<app::ExceptionsTest__Class>(type_info, "", "ExceptionsTest");
        }
        inline app::ExceptionsTest* create() {
            return il2cpp::create_object<app::ExceptionsTest>(get_class());
        }
    } // namespace ExceptionsTest
} // namespace app::classes::types
