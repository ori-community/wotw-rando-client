#pragma once
#include <Modloader/app/structs/AsyncMethodBuilderCore_c.h>
#include <Modloader/app/structs/AsyncMethodBuilderCore_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncMethodBuilderCore_c {
        inline app::AsyncMethodBuilderCore_c__Class** type_info() {
            static app::AsyncMethodBuilderCore_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AsyncMethodBuilderCore_c__Class**)(modloader::win::memory::resolve_rva(0x047494D0));
            }
            return cache;
        }
        inline app::AsyncMethodBuilderCore_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AsyncMethodBuilderCore_c__Class>(type_info(), "System.Runtime.CompilerServices", "AsyncMethodBuilderCore", "<>c");
        }
        inline app::AsyncMethodBuilderCore_c* create() {
            return il2cpp::create_object<app::AsyncMethodBuilderCore_c>(get_class());
        }
    } // namespace AsyncMethodBuilderCore_c
} // namespace app::classes::types
