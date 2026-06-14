#pragma once
#include <Modloader/app/structs/GhostGenericResourceAttribute.h>
#include <Modloader/app/structs/GhostGenericResourceAttribute__Array.h>
#include <Modloader/app/structs/GhostGenericResourceAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostGenericResourceAttribute {
        inline app::GhostGenericResourceAttribute__Class** type_info() {
            static app::GhostGenericResourceAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostGenericResourceAttribute__Class**)(modloader::win::memory::resolve_rva(0x04709800));
            }
            return cache;
        }
        inline app::GhostGenericResourceAttribute__Class* get_class() {
            return il2cpp::get_class<app::GhostGenericResourceAttribute__Class>(type_info(), "", "GhostGenericResourceAttribute");
        }
        inline app::GhostGenericResourceAttribute* create() {
            return il2cpp::create_object<app::GhostGenericResourceAttribute>(get_class());
        }
        inline app::GhostGenericResourceAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::GhostGenericResourceAttribute__Array>(get_class(), size);
        }
        inline app::GhostGenericResourceAttribute__Array* create_array(const std::vector<app::GhostGenericResourceAttribute*>& items) {
            return il2cpp::array_new<app::GhostGenericResourceAttribute__Array>(get_class(), items);
        }
    } // namespace GhostGenericResourceAttribute
} // namespace app::classes::types
