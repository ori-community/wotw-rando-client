#pragma once
#include <Modloader/app/structs/ExceptionProcessor_c.h>
#include <Modloader/app/structs/ExceptionProcessor_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExceptionProcessor_c {
        inline app::ExceptionProcessor_c__Class** type_info() {
            static app::ExceptionProcessor_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExceptionProcessor_c__Class**)(modloader::win::memory::resolve_rva(0x04795668));
            }
            return cache;
        }
        inline app::ExceptionProcessor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ExceptionProcessor_c__Class>(type_info(), "Moon.ExceptionProcessing", "ExceptionProcessor", "<>c");
        }
        inline app::ExceptionProcessor_c* create() {
            return il2cpp::create_object<app::ExceptionProcessor_c>(get_class());
        }
    } // namespace ExceptionProcessor_c
} // namespace app::classes::types
