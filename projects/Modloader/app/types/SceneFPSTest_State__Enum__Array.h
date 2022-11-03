#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneFPSTest_State__Enum__Array {
        namespace {
            inline app::SceneFPSTest_State__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::SceneFPSTest_State__Enum__Array__Class** type_info = &type_info_ref;
        inline app::SceneFPSTest_State__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneFPSTest_State__Enum__Array__Class>(type_info, "", "SceneFPSTest+State[]");
        }
        inline app::SceneFPSTest_State__Enum__Array* create() {
            return il2cpp::create_object<app::SceneFPSTest_State__Enum__Array>(get_class());
        }
    } // namespace SceneFPSTest_State__Enum__Array
} // namespace app::classes::types
