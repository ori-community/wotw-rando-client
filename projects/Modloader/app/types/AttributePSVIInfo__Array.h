#pragma once
#include <Modloader/app/structs/AttributePSVIInfo__Array.h>
#include <Modloader/app/structs/AttributePSVIInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttributePSVIInfo__Array {
        inline app::AttributePSVIInfo__Array__Class** type_info() {
            static app::AttributePSVIInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AttributePSVIInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0475DC60));
            }
            return cache;
        }
        inline app::AttributePSVIInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::AttributePSVIInfo__Array__Class>(type_info(), "System.Xml", "AttributePSVIInfo[]");
        }
        inline app::AttributePSVIInfo__Array* create() {
            return il2cpp::create_object<app::AttributePSVIInfo__Array>(get_class());
        }
    } // namespace AttributePSVIInfo__Array
} // namespace app::classes::types
