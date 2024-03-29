#pragma once
#include <Modloader/app/structs/Osub__Array.h>
#include <Modloader/app/structs/Osub__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Osub__Array {
        inline app::Osub__Array__Class** type_info() {
            static app::Osub__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Osub__Array__Class**)(modloader::win::memory::resolve_rva(0x047871F0));
            }
            return cache;
        }
        inline app::Osub__Array__Class* get_class() {
            return il2cpp::get_class<app::Osub__Array__Class>(type_info(), "TriangleNet.Topology", "Osub[]");
        }
        inline app::Osub__Array* create() {
            return il2cpp::create_object<app::Osub__Array>(get_class());
        }
    } // namespace Osub__Array
} // namespace app::classes::types
