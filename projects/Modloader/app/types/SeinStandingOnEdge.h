#pragma once
#include <Modloader/app/structs/SeinStandingOnEdge.h>
#include <Modloader/app/structs/SeinStandingOnEdge__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinStandingOnEdge {
        inline app::SeinStandingOnEdge__Class** type_info() {
            static app::SeinStandingOnEdge__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinStandingOnEdge__Class**)(modloader::win::memory::resolve_rva(0x04703128));
            }
            return cache;
        }
        inline app::SeinStandingOnEdge__Class* get_class() {
            return il2cpp::get_class<app::SeinStandingOnEdge__Class>(type_info(), "", "SeinStandingOnEdge");
        }
        inline app::SeinStandingOnEdge* create() {
            return il2cpp::create_object<app::SeinStandingOnEdge>(get_class());
        }
    } // namespace SeinStandingOnEdge
} // namespace app::classes::types
