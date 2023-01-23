#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AsyncMethodBuilderCore_ContinuationWrapper__Class.h>
#include <Modloader/app/structs/AsyncMethodBuilderCore_ContinuationWrapper.h>

namespace app::classes::types {
    namespace AsyncMethodBuilderCore_ContinuationWrapper {
        inline app::AsyncMethodBuilderCore_ContinuationWrapper__Class** type_info = (app::AsyncMethodBuilderCore_ContinuationWrapper__Class**)(modloader::win::memory::resolve_rva(0x0477E488));
        inline app::AsyncMethodBuilderCore_ContinuationWrapper__Class* get_class() {
            return il2cpp::get_nested_class<app::AsyncMethodBuilderCore_ContinuationWrapper__Class>(type_info, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore", "ContinuationWrapper");
        }
        inline app::AsyncMethodBuilderCore_ContinuationWrapper* create() {
            return il2cpp::create_object<app::AsyncMethodBuilderCore_ContinuationWrapper>(get_class());
        }
    } // namespace AsyncMethodBuilderCore_ContinuationWrapper
} // namespace app::classes::types
