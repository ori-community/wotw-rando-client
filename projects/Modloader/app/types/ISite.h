#pragma once
#include <Modloader/app/structs/ISite.h>
#include <Modloader/app/structs/ISite__Array.h>
#include <Modloader/app/structs/ISite__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISite {
        inline app::ISite__Class** type_info() {
            static app::ISite__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISite__Class**)(modloader::win::memory::resolve_rva(0x04771F30));
            }
            return cache;
        }
        inline app::ISite__Class* get_class() {
            return il2cpp::get_class<app::ISite__Class>(type_info(), "System.ComponentModel", "ISite");
        }
        inline app::ISite__Array* create_array(int size) {
            return il2cpp::array_new<app::ISite__Array>(get_class(), size);
        }
        inline app::ISite__Array* create_array(const std::vector<app::ISite*>& items) {
            return il2cpp::array_new<app::ISite__Array>(get_class(), items);
        }
    } // namespace ISite
} // namespace app::classes::types
