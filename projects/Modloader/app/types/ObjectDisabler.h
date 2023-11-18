#pragma once
#include <Modloader/app/structs/ObjectDisabler.h>
#include <Modloader/app/structs/ObjectDisabler__Array.h>
#include <Modloader/app/structs/ObjectDisabler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectDisabler {
        inline app::ObjectDisabler__Class** type_info() {
            static app::ObjectDisabler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectDisabler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectDisabler__Class* get_class() {
            return il2cpp::get_class<app::ObjectDisabler__Class>(type_info(), "Moon.Utilities", "ObjectDisabler");
        }
        inline app::ObjectDisabler* create() {
            return il2cpp::create_object<app::ObjectDisabler>(get_class());
        }
        inline app::ObjectDisabler__Array* create_array(int size) {
            return il2cpp::array_new<app::ObjectDisabler__Array>(get_class(), size);
        }
        inline app::ObjectDisabler__Array* create_array(const std::vector<app::ObjectDisabler*>& items) {
            return il2cpp::array_new<app::ObjectDisabler__Array>(get_class(), items);
        }
    } // namespace ObjectDisabler
} // namespace app::classes::types
