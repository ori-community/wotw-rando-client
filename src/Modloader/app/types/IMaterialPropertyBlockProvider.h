#pragma once
#include <Modloader/app/structs/IMaterialPropertyBlockProvider.h>
#include <Modloader/app/structs/IMaterialPropertyBlockProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMaterialPropertyBlockProvider {
        inline app::IMaterialPropertyBlockProvider__Class** type_info() {
            static app::IMaterialPropertyBlockProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMaterialPropertyBlockProvider__Class**)(modloader::win::memory::resolve_rva(0x04700E30));
            }
            return cache;
        }
        inline app::IMaterialPropertyBlockProvider__Class* get_class() {
            return il2cpp::get_class<app::IMaterialPropertyBlockProvider__Class>(type_info(), "", "IMaterialPropertyBlockProvider");
        }
    } // namespace IMaterialPropertyBlockProvider
} // namespace app::classes::types
