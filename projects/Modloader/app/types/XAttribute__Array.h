#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XAttribute__Array__Class.h>
#include <Modloader/app/structs/XAttribute__Array.h>

namespace app::classes::types {
    namespace XAttribute__Array {
        namespace {
            inline app::XAttribute__Array__Class* type_info_ref = nullptr;
        }
        inline app::XAttribute__Array__Class** type_info = &type_info_ref;
        inline app::XAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::XAttribute__Array__Class>(type_info, "System.Xml.Linq", "XAttribute[]");
        }
        inline app::XAttribute__Array* create() {
            return il2cpp::create_object<app::XAttribute__Array>(get_class());
        }
    } // namespace XAttribute__Array
} // namespace app::classes::types
