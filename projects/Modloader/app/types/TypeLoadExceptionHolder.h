#pragma once
#include <Modloader/app/structs/TypeLoadExceptionHolder.h>
#include <Modloader/app/structs/TypeLoadExceptionHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeLoadExceptionHolder {
        inline app::TypeLoadExceptionHolder__Class** type_info() {
            static app::TypeLoadExceptionHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeLoadExceptionHolder__Class**)(modloader::win::memory::resolve_rva(0x04756368));
            }
            return cache;
        }
        inline app::TypeLoadExceptionHolder__Class* get_class() {
            return il2cpp::get_class<app::TypeLoadExceptionHolder__Class>(type_info(), "System.Runtime.Serialization", "TypeLoadExceptionHolder");
        }
        inline app::TypeLoadExceptionHolder* create() {
            return il2cpp::create_object<app::TypeLoadExceptionHolder>(get_class());
        }
    } // namespace TypeLoadExceptionHolder
} // namespace app::classes::types
