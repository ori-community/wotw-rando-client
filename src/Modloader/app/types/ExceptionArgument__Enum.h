#pragma once
#include <Modloader/app/structs/ExceptionArgument__Enum.h>
#include <Modloader/app/structs/ExceptionArgument__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExceptionArgument__Enum {
        inline app::ExceptionArgument__Enum__Class** type_info() {
            static app::ExceptionArgument__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExceptionArgument__Enum__Class**)(modloader::win::memory::resolve_rva(0x04749808));
            }
            return cache;
        }
        inline app::ExceptionArgument__Enum__Class* get_class() {
            return il2cpp::get_class<app::ExceptionArgument__Enum__Class>(type_info(), "System", "ExceptionArgument");
        }
        inline app::ExceptionArgument__Enum* create() {
            return il2cpp::create_object<app::ExceptionArgument__Enum>(get_class());
        }
    } // namespace ExceptionArgument__Enum
} // namespace app::classes::types
