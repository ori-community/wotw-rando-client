#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ObjectDisabler__Class.h>
#include <Modloader/app/structs/ObjectDisabler.h>
#include <Modloader/app/structs/ObjectDisabler__Array.h>

namespace app::classes::types {
    namespace ObjectDisabler {
        namespace {
            inline app::ObjectDisabler__Class* type_info_ref = nullptr;
        }
        inline app::ObjectDisabler__Class** type_info = &type_info_ref;
        inline app::ObjectDisabler__Class* get_class() {
            return il2cpp::get_class<app::ObjectDisabler__Class>(type_info, "Moon.Utilities", "ObjectDisabler");
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
