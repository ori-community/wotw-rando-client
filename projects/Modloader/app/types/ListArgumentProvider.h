#pragma once
#include <Modloader/app/structs/ListArgumentProvider.h>
#include <Modloader/app/structs/ListArgumentProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListArgumentProvider {
        inline app::ListArgumentProvider__Class** type_info() {
            static app::ListArgumentProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListArgumentProvider__Class**)(modloader::win::memory::resolve_rva(0x04702408));
            }
            return cache;
        }
        inline app::ListArgumentProvider__Class* get_class() {
            return il2cpp::get_class<app::ListArgumentProvider__Class>(type_info(), "System.Dynamic.Utils", "ListArgumentProvider");
        }
        inline app::ListArgumentProvider* create() {
            return il2cpp::create_object<app::ListArgumentProvider>(get_class());
        }
    } // namespace ListArgumentProvider
} // namespace app::classes::types
