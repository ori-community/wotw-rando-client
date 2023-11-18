#pragma once
#include <Modloader/app/structs/STCDemo.h>
#include <Modloader/app/structs/STCDemo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace STCDemo {
        inline app::STCDemo__Class** type_info() {
            static app::STCDemo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::STCDemo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::STCDemo__Class* get_class() {
            return il2cpp::get_class<app::STCDemo__Class>(type_info(), "", "STCDemo");
        }
        inline app::STCDemo* create() {
            return il2cpp::create_object<app::STCDemo>(get_class());
        }
    } // namespace STCDemo
} // namespace app::classes::types
