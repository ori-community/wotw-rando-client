#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InterfaceTest__Class.h>
#include <Modloader/app/structs/InterfaceTest.h>

namespace app::classes::types {
    namespace InterfaceTest {
        namespace {
            inline app::InterfaceTest__Class* type_info_ref = nullptr;
        }
        inline app::InterfaceTest__Class** type_info = &type_info_ref;
        inline app::InterfaceTest__Class* get_class() {
            return il2cpp::get_class<app::InterfaceTest__Class>(type_info, "", "InterfaceTest");
        }
        inline app::InterfaceTest* create() {
            return il2cpp::create_object<app::InterfaceTest>(get_class());
        }
    } // namespace InterfaceTest
} // namespace app::classes::types
