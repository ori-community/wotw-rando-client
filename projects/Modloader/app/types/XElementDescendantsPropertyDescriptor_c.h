#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XElementDescendantsPropertyDescriptor_c__Class.h>
#include <Modloader/app/structs/XElementDescendantsPropertyDescriptor_c.h>

namespace app::classes::types {
    namespace XElementDescendantsPropertyDescriptor_c {
        inline app::XElementDescendantsPropertyDescriptor_c__Class** type_info = (app::XElementDescendantsPropertyDescriptor_c__Class**)(modloader::win::memory::resolve_rva(0x0478B1B8));
        inline app::XElementDescendantsPropertyDescriptor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XElementDescendantsPropertyDescriptor_c__Class>(type_info, "MS.Internal.Xml.Linq.ComponentModel", "XElementDescendantsPropertyDescriptor", "<>c");
        }
        inline app::XElementDescendantsPropertyDescriptor_c* create() {
            return il2cpp::create_object<app::XElementDescendantsPropertyDescriptor_c>(get_class());
        }
    } // namespace XElementDescendantsPropertyDescriptor_c
} // namespace app::classes::types
