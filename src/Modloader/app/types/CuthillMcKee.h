#pragma once
#include <Modloader/app/structs/CuthillMcKee.h>
#include <Modloader/app/structs/CuthillMcKee__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CuthillMcKee {
        inline app::CuthillMcKee__Class** type_info() {
            static app::CuthillMcKee__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CuthillMcKee__Class**)(modloader::win::memory::resolve_rva(0x0472BDA0));
            }
            return cache;
        }
        inline app::CuthillMcKee__Class* get_class() {
            return il2cpp::get_class<app::CuthillMcKee__Class>(type_info(), "TriangleNet.Tools", "CuthillMcKee");
        }
        inline app::CuthillMcKee* create() {
            return il2cpp::create_object<app::CuthillMcKee>(get_class());
        }
    } // namespace CuthillMcKee
} // namespace app::classes::types
