#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttributePSVIInfo__Array {
        inline app::AttributePSVIInfo__Array__Class** type_info = (app::AttributePSVIInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0475DC60));
        inline app::AttributePSVIInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::AttributePSVIInfo__Array__Class>(type_info, "System.Xml", "AttributePSVIInfo[]");
        }
        inline app::AttributePSVIInfo__Array* create() {
            return il2cpp::create_object<app::AttributePSVIInfo__Array>(get_class());
        }
    } // namespace AttributePSVIInfo__Array
} // namespace app::classes::types
