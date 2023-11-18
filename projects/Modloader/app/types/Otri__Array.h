#pragma once
#include <Modloader/app/structs/Otri__Array.h>
#include <Modloader/app/structs/Otri__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Otri__Array {
        inline app::Otri__Array__Class** type_info() {
            static app::Otri__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Otri__Array__Class**)(modloader::win::memory::resolve_rva(0x04763D30));
            }
            return cache;
        }
        inline app::Otri__Array__Class* get_class() {
            return il2cpp::get_class<app::Otri__Array__Class>(type_info(), "TriangleNet.Topology", "Otri[]");
        }
        inline app::Otri__Array* create() {
            return il2cpp::create_object<app::Otri__Array>(get_class());
        }
    } // namespace Otri__Array
} // namespace app::classes::types
