#pragma once
#include <Modloader/app/structs/Header.h>
#include <Modloader/app/structs/Header__Array.h>
#include <Modloader/app/structs/Header__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Header {
        inline app::Header__Class** type_info() {
            static app::Header__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Header__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Header__Class* get_class() {
            return il2cpp::get_class<app::Header__Class>(type_info(), "System.Runtime.Remoting.Messaging", "Header");
        }
        inline app::Header* create() {
            return il2cpp::create_object<app::Header>(get_class());
        }
        inline app::Header__Array* create_array(int size) {
            return il2cpp::array_new<app::Header__Array>(get_class(), size);
        }
        inline app::Header__Array* create_array(const std::vector<app::Header*>& items) {
            return il2cpp::array_new<app::Header__Array>(get_class(), items);
        }
    } // namespace Header
} // namespace app::classes::types
