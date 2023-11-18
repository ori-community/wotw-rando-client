#pragma once
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/IList__Array.h>
#include <Modloader/app/structs/IList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IList {
        inline app::IList__Class** type_info() {
            static app::IList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IList__Class**)(modloader::win::memory::resolve_rva(0x0471FB08));
            }
            return cache;
        }
        inline app::IList__Class* get_class() {
            return il2cpp::get_class<app::IList__Class>(type_info(), "System.Collections", "IList");
        }
        inline app::IList__Array* create_array(int size) {
            return il2cpp::array_new<app::IList__Array>(get_class(), size);
        }
        inline app::IList__Array* create_array(const std::vector<app::IList*>& items) {
            return il2cpp::array_new<app::IList__Array>(get_class(), items);
        }
    } // namespace IList
} // namespace app::classes::types
