#pragma once
#include <Modloader/app/structs/GodRayModifier.h>
#include <Modloader/app/structs/GodRayModifier__Array.h>
#include <Modloader/app/structs/GodRayModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GodRayModifier {
        inline app::GodRayModifier__Class** type_info() {
            static app::GodRayModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GodRayModifier__Class**)(modloader::win::memory::resolve_rva(0x04702118));
            }
            return cache;
        }
        inline app::GodRayModifier__Class* get_class() {
            return il2cpp::get_class<app::GodRayModifier__Class>(type_info(), "", "GodRayModifier");
        }
        inline app::GodRayModifier* create() {
            return il2cpp::create_object<app::GodRayModifier>(get_class());
        }
        inline app::GodRayModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::GodRayModifier__Array>(get_class(), size);
        }
        inline app::GodRayModifier__Array* create_array(const std::vector<app::GodRayModifier*>& items) {
            return il2cpp::array_new<app::GodRayModifier__Array>(get_class(), items);
        }
    } // namespace GodRayModifier
} // namespace app::classes::types
