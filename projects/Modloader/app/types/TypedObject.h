#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypedObject {
        inline app::TypedObject__Class** type_info = (app::TypedObject__Class**)(modloader::win::memory::resolve_rva(0x0477E908));
        inline app::TypedObject__Class* get_class() {
            return il2cpp::get_class<app::TypedObject__Class>(type_info, "System.Xml.Schema", "TypedObject");
        }
        inline app::TypedObject* create() {
            return il2cpp::create_object<app::TypedObject>(get_class());
        }
        inline app::TypedObject__Array* create_array(int size) {
            return il2cpp::array_new<app::TypedObject__Array>(get_class(), size);
        }
        inline app::TypedObject__Array* create_array(const std::vector<app::TypedObject*>& items) {
            return il2cpp::array_new<app::TypedObject__Array>(get_class(), items);
        }
    } // namespace TypedObject
} // namespace app::classes::types
