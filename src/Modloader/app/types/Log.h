#pragma once
#include <Modloader/app/structs/Log.h>
#include <Modloader/app/structs/Log__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Log {
        inline app::Log__Class** type_info() {
            static app::Log__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Log__Class**)(modloader::win::memory::resolve_rva(0x04791C70));
            }
            return cache;
        }
        inline app::Log__Class* get_class() {
            return il2cpp::get_class<app::Log__Class>(type_info(), "TriangleNet", "Log");
        }
        inline app::Log* create() {
            return il2cpp::create_object<app::Log>(get_class());
        }
    } // namespace Log
} // namespace app::classes::types
