#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AsyncMethodBuilderCore_c_DisplayClass4_0__Class.h>
#include <Modloader/app/structs/AsyncMethodBuilderCore_c_DisplayClass4_0.h>

namespace app::classes::types {
    namespace AsyncMethodBuilderCore_c_DisplayClass4_0 {
        inline app::AsyncMethodBuilderCore_c_DisplayClass4_0__Class** type_info = (app::AsyncMethodBuilderCore_c_DisplayClass4_0__Class**)(modloader::win::memory::resolve_rva(0x04774BF8));
        inline app::AsyncMethodBuilderCore_c_DisplayClass4_0__Class* get_class() {
            return il2cpp::get_nested_class<app::AsyncMethodBuilderCore_c_DisplayClass4_0__Class>(type_info, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore", "<>c__DisplayClass4_0");
        }
        inline app::AsyncMethodBuilderCore_c_DisplayClass4_0* create() {
            return il2cpp::create_object<app::AsyncMethodBuilderCore_c_DisplayClass4_0>(get_class());
        }
    } // namespace AsyncMethodBuilderCore_c_DisplayClass4_0
} // namespace app::classes::types
