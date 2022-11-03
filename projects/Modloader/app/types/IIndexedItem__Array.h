#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IIndexedItem__Array {
        namespace {
            inline app::IIndexedItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::IIndexedItem__Array__Class** type_info = &type_info_ref;
        inline app::IIndexedItem__Array__Class* get_class() {
            return il2cpp::get_class<app::IIndexedItem__Array__Class>(type_info, "", "IIndexedItem[]");
        }
        inline app::IIndexedItem__Array* create() {
            return il2cpp::create_object<app::IIndexedItem__Array>(get_class());
        }
    } // namespace IIndexedItem__Array
} // namespace app::classes::types
