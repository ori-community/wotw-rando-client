#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Log {
        inline app::Log__Class** type_info = (app::Log__Class**)(modloader::win::memory::resolve_rva(0x04791C70));
        inline app::Log__Class* get_class() {
            return il2cpp::get_class<app::Log__Class>(type_info, "TriangleNet", "Log");
        }
        inline app::Log* create() {
            return il2cpp::create_object<app::Log>(get_class());
        }
    } // namespace Log
} // namespace app::classes::types
