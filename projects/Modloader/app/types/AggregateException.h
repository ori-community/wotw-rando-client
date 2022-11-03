#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AggregateException {
        inline app::AggregateException__Class** type_info = (app::AggregateException__Class**)(modloader::win::memory::resolve_rva(0x0470F4B0));
        inline app::AggregateException__Class* get_class() {
            return il2cpp::get_class<app::AggregateException__Class>(type_info, "System", "AggregateException");
        }
        inline app::AggregateException* create() {
            return il2cpp::create_object<app::AggregateException>(get_class());
        }
        inline app::AggregateException__Array* create_array(int size) {
            return il2cpp::array_new<app::AggregateException__Array>(get_class(), size);
        }
        inline app::AggregateException__Array* create_array(const std::vector<app::AggregateException*>& items) {
            return il2cpp::array_new<app::AggregateException__Array>(get_class(), items);
        }
    } // namespace AggregateException
} // namespace app::classes::types
