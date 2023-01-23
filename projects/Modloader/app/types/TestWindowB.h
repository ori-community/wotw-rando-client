#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TestWindowB__Class.h>
#include <Modloader/app/structs/TestWindowB.h>

namespace app::classes::types {
    namespace TestWindowB {
        namespace {
            inline app::TestWindowB__Class* type_info_ref = nullptr;
        }
        inline app::TestWindowB__Class** type_info = &type_info_ref;
        inline app::TestWindowB__Class* get_class() {
            return il2cpp::get_class<app::TestWindowB__Class>(type_info, "", "TestWindowB");
        }
        inline app::TestWindowB* create() {
            return il2cpp::create_object<app::TestWindowB>(get_class());
        }
    } // namespace TestWindowB
} // namespace app::classes::types
