#pragma once
#include <Modloader/app/structs/StaticProxy.h>
#include <Modloader/app/structs/StaticProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StaticProxy {
        inline app::StaticProxy__Class** type_info() {
            static app::StaticProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StaticProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StaticProxy__Class* get_class() {
            return il2cpp::get_class<app::StaticProxy__Class>(type_info(), "System.Net", "StaticProxy");
        }
        inline app::StaticProxy* create() {
            return il2cpp::create_object<app::StaticProxy>(get_class());
        }
    } // namespace StaticProxy
} // namespace app::classes::types
