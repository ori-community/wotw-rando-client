#pragma once
#include <Modloader/app/structs/KeyValuePairs.h>
#include <Modloader/app/structs/KeyValuePairs__Array.h>
#include <Modloader/app/structs/KeyValuePairs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyValuePairs {
        inline app::KeyValuePairs__Class** type_info() {
            static app::KeyValuePairs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KeyValuePairs__Class**)(modloader::win::memory::resolve_rva(0x04762B68));
            }
            return cache;
        }
        inline app::KeyValuePairs__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePairs__Class>(type_info(), "System.Collections", "KeyValuePairs");
        }
        inline app::KeyValuePairs* create() {
            return il2cpp::create_object<app::KeyValuePairs>(get_class());
        }
        inline app::KeyValuePairs__Array* create_array(int size) {
            return il2cpp::array_new<app::KeyValuePairs__Array>(get_class(), size);
        }
        inline app::KeyValuePairs__Array* create_array(const std::vector<app::KeyValuePairs*>& items) {
            return il2cpp::array_new<app::KeyValuePairs__Array>(get_class(), items);
        }
    } // namespace KeyValuePairs
} // namespace app::classes::types
