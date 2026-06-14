#pragma once
#include <Modloader/app/structs/EntryPointNotFoundException.h>
#include <Modloader/app/structs/EntryPointNotFoundException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntryPointNotFoundException {
        inline app::EntryPointNotFoundException__Class** type_info() {
            static app::EntryPointNotFoundException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntryPointNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x04714FD0));
            }
            return cache;
        }
        inline app::EntryPointNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::EntryPointNotFoundException__Class>(type_info(), "System", "EntryPointNotFoundException");
        }
        inline app::EntryPointNotFoundException* create() {
            return il2cpp::create_object<app::EntryPointNotFoundException>(get_class());
        }
    } // namespace EntryPointNotFoundException
} // namespace app::classes::types
