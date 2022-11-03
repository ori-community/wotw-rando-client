#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace STCDemo {
        namespace {
            inline app::STCDemo__Class* type_info_ref = nullptr;
        }
        inline app::STCDemo__Class** type_info = &type_info_ref;
        inline app::STCDemo__Class* get_class() {
            return il2cpp::get_class<app::STCDemo__Class>(type_info, "", "STCDemo");
        }
        inline app::STCDemo* create() {
            return il2cpp::create_object<app::STCDemo>(get_class());
        }
    } // namespace STCDemo
} // namespace app::classes::types
