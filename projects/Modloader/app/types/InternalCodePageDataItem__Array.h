#pragma once
#include <Modloader/app/structs/InternalCodePageDataItem__Array.h>
#include <Modloader/app/structs/InternalCodePageDataItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalCodePageDataItem__Array {
        inline app::InternalCodePageDataItem__Array__Class** type_info() {
            static app::InternalCodePageDataItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InternalCodePageDataItem__Array__Class**)(modloader::win::memory::resolve_rva(0x047539A8));
            }
            return cache;
        }
        inline app::InternalCodePageDataItem__Array__Class* get_class() {
            return il2cpp::get_class<app::InternalCodePageDataItem__Array__Class>(type_info(), "System.Globalization", "InternalCodePageDataItem[]");
        }
        inline app::InternalCodePageDataItem__Array* create() {
            return il2cpp::create_object<app::InternalCodePageDataItem__Array>(get_class());
        }
    } // namespace InternalCodePageDataItem__Array
} // namespace app::classes::types
