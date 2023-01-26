#pragma once
#include <Modloader/app/structs/Boolean.h>
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/Boolean__Boxed.h>
#include <Modloader/app/structs/Boolean__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Boolean {
        inline app::Boolean__Class** type_info() {
            static app::Boolean__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Boolean__Class**)(modloader::win::memory::resolve_rva(0x04781D98));
            }
            return cache;
        }
        inline app::Boolean__Class* get_class() {
            return il2cpp::get_class<app::Boolean__Class>(type_info(), "System", "Boolean");
        }
        inline app::Boolean* create() {
            return il2cpp::create_object<app::Boolean>(get_class());
        }
        inline app::Boolean__Boxed* box(bool value) {
            return il2cpp::box_value<app::Boolean__Boxed>(get_class(), value);
        }
        inline app::Boolean__Array* create_array(int size) {
            return il2cpp::array_new<app::Boolean__Array>(get_class(), size);
        }
        inline app::Boolean__Array* create_array(const std::vector<bool>& items) {
            return il2cpp::array_new<app::Boolean__Array>(get_class(), items);
        }
    } // namespace Boolean
} // namespace app::classes::types
