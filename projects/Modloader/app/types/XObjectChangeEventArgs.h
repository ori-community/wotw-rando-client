#pragma once
#include <Modloader/app/structs/XObjectChangeEventArgs.h>
#include <Modloader/app/structs/XObjectChangeEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XObjectChangeEventArgs {
        inline app::XObjectChangeEventArgs__Class** type_info() {
            static app::XObjectChangeEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XObjectChangeEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04754868));
            }
            return cache;
        }
        inline app::XObjectChangeEventArgs__Class* get_class() {
            return il2cpp::get_class<app::XObjectChangeEventArgs__Class>(type_info(), "System.Xml.Linq", "XObjectChangeEventArgs");
        }
        inline app::XObjectChangeEventArgs* create() {
            return il2cpp::create_object<app::XObjectChangeEventArgs>(get_class());
        }
    } // namespace XObjectChangeEventArgs
} // namespace app::classes::types
