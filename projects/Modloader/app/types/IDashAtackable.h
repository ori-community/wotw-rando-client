#pragma once
#include <Modloader/app/structs/IDashAtackable.h>
#include <Modloader/app/structs/IDashAtackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDashAtackable {
        inline app::IDashAtackable__Class** type_info() {
            static app::IDashAtackable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDashAtackable__Class**)(modloader::win::memory::resolve_rva(0x0478ACE8));
            }
            return cache;
        }
        inline app::IDashAtackable__Class* get_class() {
            return il2cpp::get_class<app::IDashAtackable__Class>(type_info(), "", "IDashAtackable");
        }
    } // namespace IDashAtackable
} // namespace app::classes::types
