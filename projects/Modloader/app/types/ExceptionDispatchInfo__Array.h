#pragma once
#include <Modloader/app/structs/ExceptionDispatchInfo__Array.h>
#include <Modloader/app/structs/ExceptionDispatchInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExceptionDispatchInfo__Array {
        inline app::ExceptionDispatchInfo__Array__Class** type_info() {
            static app::ExceptionDispatchInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExceptionDispatchInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04743710));
            }
            return cache;
        }
        inline app::ExceptionDispatchInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::ExceptionDispatchInfo__Array__Class>(type_info(), "System.Runtime.ExceptionServices", "ExceptionDispatchInfo[]");
        }
        inline app::ExceptionDispatchInfo__Array* create() {
            return il2cpp::create_object<app::ExceptionDispatchInfo__Array>(get_class());
        }
    } // namespace ExceptionDispatchInfo__Array
} // namespace app::classes::types
