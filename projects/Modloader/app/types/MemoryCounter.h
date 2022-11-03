#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemoryCounter {
        namespace {
            inline app::MemoryCounter__Class* type_info_ref = nullptr;
        }
        inline app::MemoryCounter__Class** type_info = &type_info_ref;
        inline app::MemoryCounter__Class* get_class() {
            return il2cpp::get_class<app::MemoryCounter__Class>(type_info, "", "MemoryCounter");
        }
        inline app::MemoryCounter* create() {
            return il2cpp::create_object<app::MemoryCounter>(get_class());
        }
    } // namespace MemoryCounter
} // namespace app::classes::types
