#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AreaMapScrollLimit__Class.h>
#include <Modloader/app/structs/AreaMapScrollLimit.h>
#include <Modloader/app/structs/AreaMapScrollLimit__Array.h>

namespace app::classes::types {
    namespace AreaMapScrollLimit {
        namespace {
            inline app::AreaMapScrollLimit__Class* type_info_ref = nullptr;
        }
        inline app::AreaMapScrollLimit__Class** type_info = &type_info_ref;
        inline app::AreaMapScrollLimit__Class* get_class() {
            return il2cpp::get_class<app::AreaMapScrollLimit__Class>(type_info, "", "AreaMapScrollLimit");
        }
        inline app::AreaMapScrollLimit* create() {
            return il2cpp::create_object<app::AreaMapScrollLimit>(get_class());
        }
        inline app::AreaMapScrollLimit__Array* create_array(int size) {
            return il2cpp::array_new<app::AreaMapScrollLimit__Array>(get_class(), size);
        }
        inline app::AreaMapScrollLimit__Array* create_array(const std::vector<app::AreaMapScrollLimit*>& items) {
            return il2cpp::array_new<app::AreaMapScrollLimit__Array>(get_class(), items);
        }
    } // namespace AreaMapScrollLimit
} // namespace app::classes::types
