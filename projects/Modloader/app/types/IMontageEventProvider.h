#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IMontageEventProvider__Class.h>
#include <Modloader/app/structs/IMontageEventProvider__Array.h>
#include <Modloader/app/structs/IMontageEventProvider.h>

namespace app::classes::types {
    namespace IMontageEventProvider {
        inline app::IMontageEventProvider__Class** type_info = (app::IMontageEventProvider__Class**)(modloader::win::memory::resolve_rva(0x047371C8));
        inline app::IMontageEventProvider__Class* get_class() {
            return il2cpp::get_class<app::IMontageEventProvider__Class>(type_info, "", "IMontageEventProvider");
        }
        inline app::IMontageEventProvider__Array* create_array(int size) {
            return il2cpp::array_new<app::IMontageEventProvider__Array>(get_class(), size);
        }
        inline app::IMontageEventProvider__Array* create_array(const std::vector<app::IMontageEventProvider*>& items) {
            return il2cpp::array_new<app::IMontageEventProvider__Array>(get_class(), items);
        }
    } // namespace IMontageEventProvider
} // namespace app::classes::types
