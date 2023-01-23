#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IGreanade__Class.h>
#include <Modloader/app/structs/IGreanade__Array.h>
#include <Modloader/app/structs/IGreanade.h>

namespace app::classes::types {
    namespace IGreanade {
        inline app::IGreanade__Class** type_info = (app::IGreanade__Class**)(modloader::win::memory::resolve_rva(0x047961B8));
        inline app::IGreanade__Class* get_class() {
            return il2cpp::get_class<app::IGreanade__Class>(type_info, "", "IGreanade");
        }
        inline app::IGreanade__Array* create_array(int size) {
            return il2cpp::array_new<app::IGreanade__Array>(get_class(), size);
        }
        inline app::IGreanade__Array* create_array(const std::vector<app::IGreanade*>& items) {
            return il2cpp::array_new<app::IGreanade__Array>(get_class(), items);
        }
    } // namespace IGreanade
} // namespace app::classes::types
