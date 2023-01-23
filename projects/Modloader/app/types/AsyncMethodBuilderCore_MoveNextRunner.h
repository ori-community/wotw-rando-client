#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AsyncMethodBuilderCore_MoveNextRunner__Class.h>
#include <Modloader/app/structs/AsyncMethodBuilderCore_MoveNextRunner.h>

namespace app::classes::types {
    namespace AsyncMethodBuilderCore_MoveNextRunner {
        inline app::AsyncMethodBuilderCore_MoveNextRunner__Class** type_info = (app::AsyncMethodBuilderCore_MoveNextRunner__Class**)(modloader::win::memory::resolve_rva(0x0473EA08));
        inline app::AsyncMethodBuilderCore_MoveNextRunner__Class* get_class() {
            return il2cpp::get_nested_class<app::AsyncMethodBuilderCore_MoveNextRunner__Class>(type_info, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore", "MoveNextRunner");
        }
        inline app::AsyncMethodBuilderCore_MoveNextRunner* create() {
            return il2cpp::create_object<app::AsyncMethodBuilderCore_MoveNextRunner>(get_class());
        }
    } // namespace AsyncMethodBuilderCore_MoveNextRunner
} // namespace app::classes::types
