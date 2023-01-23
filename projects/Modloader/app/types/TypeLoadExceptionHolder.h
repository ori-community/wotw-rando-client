#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TypeLoadExceptionHolder__Class.h>
#include <Modloader/app/structs/TypeLoadExceptionHolder.h>

namespace app::classes::types {
    namespace TypeLoadExceptionHolder {
        inline app::TypeLoadExceptionHolder__Class** type_info = (app::TypeLoadExceptionHolder__Class**)(modloader::win::memory::resolve_rva(0x04756368));
        inline app::TypeLoadExceptionHolder__Class* get_class() {
            return il2cpp::get_class<app::TypeLoadExceptionHolder__Class>(type_info, "System.Runtime.Serialization", "TypeLoadExceptionHolder");
        }
        inline app::TypeLoadExceptionHolder* create() {
            return il2cpp::create_object<app::TypeLoadExceptionHolder>(get_class());
        }
    } // namespace TypeLoadExceptionHolder
} // namespace app::classes::types
