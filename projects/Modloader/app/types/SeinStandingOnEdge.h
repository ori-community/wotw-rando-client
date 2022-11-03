#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinStandingOnEdge {
        inline app::SeinStandingOnEdge__Class** type_info = (app::SeinStandingOnEdge__Class**)(modloader::win::memory::resolve_rva(0x04703128));
        inline app::SeinStandingOnEdge__Class* get_class() {
            return il2cpp::get_class<app::SeinStandingOnEdge__Class>(type_info, "", "SeinStandingOnEdge");
        }
        inline app::SeinStandingOnEdge* create() {
            return il2cpp::create_object<app::SeinStandingOnEdge>(get_class());
        }
    } // namespace SeinStandingOnEdge
} // namespace app::classes::types
