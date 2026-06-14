#pragma once
#include <Modloader/app/structs/SimpleJsonInstance_PlayFabSimpleJsonCuztomization.h>
#include <Modloader/app/structs/SimpleJsonInstance_PlayFabSimpleJsonCuztomization__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleJsonInstance_PlayFabSimpleJsonCuztomization {
        inline app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization__Class** type_info() {
            static app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization__Class**)(modloader::win::memory::resolve_rva(0x0473F168));
            }
            return cache;
        }
        inline app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization__Class>(type_info(), "PlayFab.Json", "SimpleJsonInstance", "PlayFabSimpleJsonCuztomization");
        }
        inline app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization* create() {
            return il2cpp::create_object<app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization>(get_class());
        }
    } // namespace SimpleJsonInstance_PlayFabSimpleJsonCuztomization
} // namespace app::classes::types
