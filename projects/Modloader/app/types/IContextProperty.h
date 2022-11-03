#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IContextProperty {
        inline app::IContextProperty__Class** type_info = (app::IContextProperty__Class**)(modloader::win::memory::resolve_rva(0x0473FEF0));
        inline app::IContextProperty__Class* get_class() {
            return il2cpp::get_class<app::IContextProperty__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContextProperty");
        }
        inline app::IContextProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::IContextProperty__Array>(get_class(), size);
        }
        inline app::IContextProperty__Array* create_array(const std::vector<app::IContextProperty*>& items) {
            return il2cpp::array_new<app::IContextProperty__Array>(get_class(), items);
        }
    } // namespace IContextProperty
} // namespace app::classes::types
