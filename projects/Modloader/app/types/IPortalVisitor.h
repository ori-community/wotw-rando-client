#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPortalVisitor {
        inline app::IPortalVisitor__Class** type_info = (app::IPortalVisitor__Class**)(modloader::win::memory::resolve_rva(0x047757E8));
        inline app::IPortalVisitor__Class* get_class() {
            return il2cpp::get_class<app::IPortalVisitor__Class>(type_info, "", "IPortalVisitor");
        }
        inline app::IPortalVisitor__Array* create_array(int size) {
            return il2cpp::array_new<app::IPortalVisitor__Array>(get_class(), size);
        }
        inline app::IPortalVisitor__Array* create_array(const std::vector<app::IPortalVisitor*>& items) {
            return il2cpp::array_new<app::IPortalVisitor__Array>(get_class(), items);
        }
    } // namespace IPortalVisitor
} // namespace app::classes::types
