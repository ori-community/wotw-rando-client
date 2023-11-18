#pragma once
#include <Modloader/app/structs/_Filters.h>
#include <Modloader/app/structs/_Filters__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _Filters {
        inline app::_Filters__Class** type_info() {
            static app::_Filters__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::_Filters__Class**)(modloader::win::memory::resolve_rva(0x04774760));
            }
            return cache;
        }
        inline app::_Filters__Class* get_class() {
            return il2cpp::get_class<app::_Filters__Class>(type_info(), "System", "__Filters");
        }
        inline app::_Filters* create() {
            return il2cpp::create_object<app::_Filters>(get_class());
        }
    } // namespace _Filters
} // namespace app::classes::types
