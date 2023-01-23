#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SqlChars__Array__Class.h>
#include <Modloader/app/structs/SqlChars__Array.h>

namespace app::classes::types {
    namespace SqlChars__Array {
        inline app::SqlChars__Array__Class** type_info = (app::SqlChars__Array__Class**)(modloader::win::memory::resolve_rva(0x04743248));
        inline app::SqlChars__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlChars__Array__Class>(type_info, "System.Data.SqlTypes", "SqlChars[]");
        }
        inline app::SqlChars__Array* create() {
            return il2cpp::create_object<app::SqlChars__Array>(get_class());
        }
    } // namespace SqlChars__Array
} // namespace app::classes::types
