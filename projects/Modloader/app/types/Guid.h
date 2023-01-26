#pragma once
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/Guid__Array.h>
#include <Modloader/app/structs/Guid__Boxed.h>
#include <Modloader/app/structs/Guid__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Guid {
        inline app::Guid__Class** type_info() {
            static app::Guid__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Guid__Class**)(modloader::win::memory::resolve_rva(0x0474ABA0));
            }
            return cache;
        }
        inline app::Guid__Class* get_class() {
            return il2cpp::get_class<app::Guid__Class>(type_info(), "System", "Guid");
        }
        inline app::Guid* create() {
            return il2cpp::create_object<app::Guid>(get_class());
        }
        inline app::Guid__Boxed* box(app::Guid value) {
            return il2cpp::box_value<app::Guid__Boxed>(get_class(), value);
        }
        inline app::Guid__Array* create_array(int size) {
            return il2cpp::array_new<app::Guid__Array>(get_class(), size);
        }
        inline app::Guid__Array* create_array(const std::vector<app::Guid>& items) {
            return il2cpp::array_new<app::Guid__Array>(get_class(), items);
        }
    } // namespace Guid
} // namespace app::classes::types
