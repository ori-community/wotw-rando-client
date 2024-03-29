#pragma once
#include <Modloader/app/structs/AppId_t.h>
#include <Modloader/app/structs/AppId_t__Array.h>
#include <Modloader/app/structs/AppId_t__Boxed.h>
#include <Modloader/app/structs/AppId_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AppId_t {
        inline app::AppId_t__Class** type_info() {
            static app::AppId_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AppId_t__Class**)(modloader::win::memory::resolve_rva(0x04778470));
            }
            return cache;
        }
        inline app::AppId_t__Class* get_class() {
            return il2cpp::get_class<app::AppId_t__Class>(type_info(), "Steamworks", "AppId_t");
        }
        inline app::AppId_t* create() {
            return il2cpp::create_object<app::AppId_t>(get_class());
        }
        inline app::AppId_t__Boxed* box(app::AppId_t value) {
            return il2cpp::box_value<app::AppId_t__Boxed>(get_class(), value);
        }
        inline app::AppId_t__Array* create_array(int size) {
            return il2cpp::array_new<app::AppId_t__Array>(get_class(), size);
        }
        inline app::AppId_t__Array* create_array(const std::vector<app::AppId_t>& items) {
            return il2cpp::array_new<app::AppId_t__Array>(get_class(), items);
        }
    } // namespace AppId_t
} // namespace app::classes::types
