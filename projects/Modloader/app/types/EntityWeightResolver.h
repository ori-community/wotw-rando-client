#pragma once
#include <Modloader/app/structs/EntityWeightResolver.h>
#include <Modloader/app/structs/EntityWeightResolver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityWeightResolver {
        inline app::EntityWeightResolver__Class** type_info() {
            static app::EntityWeightResolver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityWeightResolver__Class**)(modloader::win::memory::resolve_rva(0x04716FB8));
            }
            return cache;
        }
        inline app::EntityWeightResolver__Class* get_class() {
            return il2cpp::get_class<app::EntityWeightResolver__Class>(type_info(), "", "EntityWeightResolver");
        }
        inline app::EntityWeightResolver* create() {
            return il2cpp::create_object<app::EntityWeightResolver>(get_class());
        }
    } // namespace EntityWeightResolver
} // namespace app::classes::types
