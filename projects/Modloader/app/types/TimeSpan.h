#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimeSpan__Class.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/TimeSpan__Boxed.h>
#include <Modloader/app/structs/TimeSpan__Array.h>

namespace app::classes::types {
    namespace TimeSpan {
        inline app::TimeSpan__Class** type_info = (app::TimeSpan__Class**)(modloader::win::memory::resolve_rva(0x04759E38));
        inline app::TimeSpan__Class* get_class() {
            return il2cpp::get_class<app::TimeSpan__Class>(type_info, "System", "TimeSpan");
        }
        inline app::TimeSpan* create() {
            return il2cpp::create_object<app::TimeSpan>(get_class());
        }
        inline app::TimeSpan__Boxed* box(app::TimeSpan value) {
            return il2cpp::box_value<app::TimeSpan__Boxed>(get_class(), value);
        }
        inline app::TimeSpan__Array* create_array(int size) {
            return il2cpp::array_new<app::TimeSpan__Array>(get_class(), size);
        }
        inline app::TimeSpan__Array* create_array(const std::vector<app::TimeSpan>& items) {
            return il2cpp::array_new<app::TimeSpan__Array>(get_class(), items);
        }
    } // namespace TimeSpan
} // namespace app::classes::types
