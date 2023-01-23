#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InstantiateDebugIgnore_c_DisplayClass4_0__Class.h>
#include <Modloader/app/structs/InstantiateDebugIgnore_c_DisplayClass4_0.h>

namespace app::classes::types {
    namespace InstantiateDebugIgnore_c_DisplayClass4_0 {
        inline app::InstantiateDebugIgnore_c_DisplayClass4_0__Class** type_info = (app::InstantiateDebugIgnore_c_DisplayClass4_0__Class**)(modloader::win::memory::resolve_rva(0x04715D70));
        inline app::InstantiateDebugIgnore_c_DisplayClass4_0__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiateDebugIgnore_c_DisplayClass4_0__Class>(type_info, "InstantiateDebug", "InstantiateDebugIgnore", "<>c__DisplayClass4_0");
        }
        inline app::InstantiateDebugIgnore_c_DisplayClass4_0* create() {
            return il2cpp::create_object<app::InstantiateDebugIgnore_c_DisplayClass4_0>(get_class());
        }
    } // namespace InstantiateDebugIgnore_c_DisplayClass4_0
} // namespace app::classes::types
