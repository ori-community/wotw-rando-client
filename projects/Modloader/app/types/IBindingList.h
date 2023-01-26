#pragma once
#include <Modloader/app/structs/IBindingList.h>
#include <Modloader/app/structs/IBindingList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBindingList {
        inline app::IBindingList__Class** type_info() {
            static app::IBindingList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IBindingList__Class**)(modloader::win::memory::resolve_rva(0x04724480));
            }
            return cache;
        }
        inline app::IBindingList__Class* get_class() {
            return il2cpp::get_class<app::IBindingList__Class>(type_info(), "System.ComponentModel", "IBindingList");
        }
    } // namespace IBindingList
} // namespace app::classes::types
